import pyfirmata  # mandatory
import time

board = pyfirmata.Arduino('/dev/cu.usbmodem1101')
it = pyfirmata.util.Iterator(board)
it.start()
redPin = 13
red = board.get_pin('d:13:o')
green = board.get_pin('d:8:o')
blue = board.get_pin('d:2:o')


def red_blink():
    '''code for blinking red led light'''

    red.write(1)  # led on
    time.sleep(0.8)
    red.write(0)  # led off
    time.sleep(0.8)


def green_blink():
    '''code for blinking green led light'''
    green.write(1)
    time.sleep(0.8)
    green.write(0)
    time.sleep(0.8)


def blue_blink():
    '''code for blinking blue led light'''
    blue.write(1)
    time.sleep(0.8)
    blue.write(0)
    time.sleep(0.8)


while True:
    red_blink()
    red_blink()
    red_blink()
    red_blink()

    green_blink()
    green_blink()
    green_blink()
    green_blink()

    blue_blink()
    blue_blink()
    blue_blink()
    blue_blink()
    blue_blink()
