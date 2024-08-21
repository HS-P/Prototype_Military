import serial
import time
import curses

def calculate_checksum(data):
    checksum = sum(data[2:]) & 0xFF
    checksum = (~checksum) & 0xFF
    data.insert(4, checksum)
    return bytearray(data)

def send_command(ser, command, expected_length):
    ser.write(bytes(calculate_checksum(command)))
    print("Sent Command:", command.hex())

    start_time = time.time()
    response = bytearray()
   
def setting_motor(ser, id_value, mode, data):
    header1 = 0xFF
    header2 = 0xFE
    
    if id_value == 'left':
        id_byte = 0x00
    elif id_value == 'right':
        id_byte = 0x01
    else:
        print("Invalid Direction. Please write 'Left' or 'Right'.")
        return None
        
    if mode == 'pos_reset':
        mode_byte = 0x0C
        data_size = 0x02
        data_packet = []
        # Do Not Write Data Value
    elif mode == 'controller':
        mode_byte = 0x05
        data_size = 0x06
        data_packet = data[:4]
        # KP, KI, KD, mili Ampere 
    elif mode == 'id':
        mode_byte = 0x06
        data_size = 0x03
        data_packet = [data]
        # ID Number
    elif mode == 'baudrate':
        mode_byte = 0x07
        data_size = 0x03
        data_packet = [data]
        # 0x00~0x11
    elif mode == 'control':
        mode_byte = 0x0A
        data_size = 0x03
        data_packet = [data]
        # 0x00~0x01
    else:
        print("Invalid Selection. Please Select in 'pos_reset', 'controller', 'id', 'baudrate', 'control'.")
        return None
        
    full_packet = [header1, header2, id_byte, data_size, mode_byte] + data_packet
    send_command(ser, bytearray(full_packet), 15)
              
def opm(ser, id_value, data):
    header1 = 0xFF
    header2 = 0xFE
    data_size = 0x06
    mode_byte = 0x03
    
    if id_value == 'left':
        id_byte = 0x00
        direction_byte = 0x01
    elif id_value == 'right':
        direction_byte = 0x00
        id_byte = 0x01
    elif id_value == 'back_left':
        direction_byte = 0x00
        id_byte = 0x00
    elif id_value == 'back_right':
        direction_byte = 0x01
        id_byte = 0x01
    else:
        print("Invalid Direction. Please write 'Left' or 'Right'.")
        return None
    
    
     # 1 Sec to Get Motor Speed
    data_packet = [data, 10]
    full_packet = [header1, header2, id_byte, data_size, mode_byte, direction_byte, 0x00] + data_packet
    send_command(ser, bytearray(full_packet), 15)
    
def stm(ser, id_value):
    
    if id_value == 'left':
        id_byte = 0x00
    elif id_value == 'right':
        id_byte = 0x01
    else:
        print("Invalid Direction. Please write 'Left' or 'Right'.")
        return None
    
    print("--------------------Ping Feedback--------------------")
    print(send_command(ser, bytearray([0xFF, 0xFE, id_byte, 0x02, 0xA0]), 15))
    print("--------------------Speed Feedback--------------------")
    print(send_command(ser, bytearray([0xFF, 0xFE, id_byte, 0x02, 0xA2]), 15))
    print("--------------------Control Feedback--------------------")
    print(send_command(ser, bytearray([0xFF, 0xFE, id_byte, 0x02, 0xA7]), 15))
    print("--------------------Controller Feedback--------------------")
    print(send_command(ser, bytearray([0xFF, 0xFE, id_byte, 0x02, 0xA4]), 15))
    
def main(stdscr):
    try:
        ser = serial.Serial(
            port='/dev/ttyACM0',
            baudrate=115200,
            parity=serial.PARITY_NONE,
            stopbits=serial.STOPBITS_ONE,
            bytesize=serial.EIGHTBITS,
            timeout=1
        )
        print(ser)
        
        linear_value = 0x00
        left_angular_value = 0x00
        right_angular_value = 0x00
        
        stdscr.nodelay(True)
        stdscr.clear()
        stdscr.addstr(0, 0, "Press 'w' to move forward, 's' to move backward, 'q' to quit.")
        while True:
            key = stdscr.getch()
            if key == ord('w'):
                stdscr.addstr(1, 0, str(linear_value))
                linear_value += 10
                if (linear_value >= 190): linear_value = 190
                opm(ser, 'left', linear_value)
                opm(ser, 'right', linear_value)
            elif key == ord('s'):
                stdscr.addstr(1, 0, "STOP")
                linear_value = 0
                left_angular_value = 0
                right_angular_value = 0
                opm(ser, 'left', linear_value)
                opm(ser, 'right', linear_value)
            elif key == ord('a'):
                stdscr.addstr(1, 0, str(left_angular_value))
                left_angular_value += 10
                if (left_angular_value >= 190): left_angular_value = 190
                opm(ser, 'left', left_angular_value)
                opm(ser, 'right', linear_value)
            elif key == ord('d'):
                stdscr.addstr(1, 0, str(right_angular_value))
                right_angular_value += 10
                if (right_angular_value >= 190): right_angular_value = 190
                opm(ser, 'left', linear_value)
                opm(ser, 'right', right_angular_value)
            elif key == ord('x'):
                stdscr.addstr(1, 0, str(linear_value))
                linear_value += 10
                if (linear_value >= 190): linear_value = 190
                opm(ser, 'back_left', linear_value)
                opm(ser, 'back_right', linear_value)
            elif key == ord('q'):
                stdscr.addstr(1, 0, "Exiting...")
                opm(ser, 'left', 0)
                opm(ser, 'right', 0)
                break
            time.sleep(0.1)
        
        ser.close()
        ser.close()
    except serial.SerialException as e:
        print(f"Serial error: {e}")
    finally:
        pass
if __name__ == "__main__":
    curses.wrapper(main)

