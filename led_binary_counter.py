import pyfirmata  # mandatory
import time

board = pyfirmata.Arduino('/dev/cu.usbmodem1101')
it = pyfirmata.util.Iterator(board)
it.start()
redPin = 13
led1 = board.get_pin('d:13:o')
led2 = board.get_pin('d:8:o')
led3 = board.get_pin('d:4:o')
led4 = board.get_pin('d:2:o')


def dec_binary():
    '''code for blinking red led light'''

    led1.write(0)
    led2.write(0)
    led3.write(0)
    led4.write(0)
    time.sleep(1)  # delay 1second delay


def dec_one():
    led1.write(0)
    led2.write(0)
    led3.write(0)
    led4.write(1)
    time.sleep(1)


def dec_two():
    led1.write(0)
    led2.write(0)
    led3.write(1)
    led4.write(0)
    time.sleep(1)


def dec_three():
    led1.write(0)
    led2.write(0)
    led3.write(1)
    led4.write(1)
    time.sleep(1)


def dec_four():
    led1.write(0)
    led2.write(1)
    led3.write(0)
    led4.write(0)
    time.sleep(1)


def dec_five():
    led1.write(0)
    led2.write(1)
    led3.write(0)
    led4.write(1)
    time.sleep(1)


def dec_six():
    led1.write(0)
    led2.write(1)
    led3.write(1)
    led4.write(0)
    time.sleep(1)


def dec_seven():
    led1.write(0)
    led2.write(1)
    led3.write(1)
    led4.write(1)
    time.sleep(1)


def dec_eight():
    led1.write(1)
    led2.write(0)
    led3.write(0)
    led4.write(0)
    time.sleep(1)


def dec_nine():
    led1.write(1)
    led2.write(0)
    led3.write(0)
    led4.write(1)
    time.sleep(1)


def dec_ten():
    led1.write(1)
    led2.write(0)
    led3.write(1)
    led4.write(1)
    time.sleep(1)


while True:
    dec_binary()
    dec_one()
    dec_two()
    dec_three()
    dec_four()
    dec_five()
    dec_six()
    dec_seven()
    dec_eight()
    dec_nine()
    dec_ten()
    dec_binary()
