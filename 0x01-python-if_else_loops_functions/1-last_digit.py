#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
last_digit = number % 10
if number < 0 and last_digit > 0:
    last_digit = -1 * (10 - last_digit)

if last_digit > 5:
    print("Last digit of {} is {}\
 and is geater than 5".format(number, last_digit))
elif last_digit == 0:
    print("Last digit of {} is 0 and is 0".format(number))
else:
    print("Last digit of {} is {}\
 and is less than 6 but not 0".format(number, last_digit))