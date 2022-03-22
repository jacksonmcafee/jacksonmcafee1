# ====================== #
# Jackson McAfee
# 11.09.2021
# The code below is a simple Latin Square generator in Python 3.9
# It works by creating a deque (double-ended queue) and rotating it
# functions for all natural numbers

# Does not support error checking
# ====================== #

# deque includes rotate()
from collections import deque

# declares new deque "mainList"
mainList = deque([])

# take user input for "initVal" and "squareOrder"
squareOrder = int(input("Please enter the order of the square: "))
initVal = int(input("Please enter the starting value of the square: "))
print('\n')

# adds range "initVal -> squareOrder" and "squareOrder" into deque "mainList"
mainList.extend(list(range(initVal, squareOrder, 1)))
mainList.append(squareOrder)

# declares required variable "loopCounter"
loopCounter = initVal - 1

# while loop for printing "mainList"
while(loopCounter < squareOrder):
    print(*mainList, sep=" ")
    mainList.rotate(-1)
    loopCounter += 1

# end of function
