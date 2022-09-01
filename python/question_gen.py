# ====================== #
# Jackson McAfee
# 11.22.2021
# The code below is a math practice problem generator for Python 3.9
# It generates practice problems based on difficulty (size of numbers being generated)
# And times the user to see how long they took to solve

# WIP

# Planning on adding average time for solves, challenge mode (locked in for multiple solves), and
# a continuous practice mode so that the user doesn't have to use the diff. menu each time

# Need to reorganize problemCheck so that it returns multiple items instead of just solveTime
# ====================== #

# importing libraries

import time
import random

# timer functions
def startTimer():
    initialTime = time.clock_gettime(0)
    return initialTime
    
def stopTimer():
    finalTime = time.clock_gettime(0)
    return finalTime
    
def netTimer(a, b):
    solveTime = b - a
    return solveTime

# operation selection
def operationSelect():
    print("Operation Selection")
    print("Type '1' for addition.")
    print("Type '2' for subtraction.")
    print("Type '3' for multiplication.")
    print("Type '4' for division.")
    
    operation = int(input("Pick an operation to practice: "))
    return operation
    
# difficulty selection
def difficultySelect():
    print("Difficulty Selection!")
    print("Type '1' for easy practice.")
    print("Type '2' for medium practice.")
    print("Type '3' for hard practice.")
    
    difficulty = int(input("Pick a difficulty level: "))
    return difficulty

# practice problem generators (maybe add simple vers for speed)
def easyPractice(operation):
    # single digit x single digit
    firstNum = random.randint(1,9)
    secondNum = random.randint(1,9)
    product = firstNum * secondNum
    return [firstNum, secondNum, product]
    
def mediumPractice(operation):
    # single digit x double digit
    firstNum = random.randint(1,9)
    secondNum = random.randint(10, 99)
    product = firstNum * secondNum
    return [firstNum, secondNum, product]
    
def hardPractice(operation):
    # double digit x double digit
    firstNum = random.randint(10, 99)
    secondNum = random.randint(10, 99)
    product = firstNum * secondNum
    return [firstNum, secondNum, product]
    
# problem checking function
def problemCheck(firstNum, secondNum, product):
    firstNumStr = str(firstNum)
    secondNumStr = str(secondNum)
    
    initialTime = startTimer()
    userInput = int(input("What is " + firstNumStr + " x " + secondNumStr + "?: "))
    
    finalTime = stopTimer()
    solveTime = round(netTimer(initialTime, finalTime), 3)
    solveTimeStr = str(solveTime)

    if(userInput == product):
        print("Correct!")
        print("Time to solve was: " + solveTimeStr + " seconds!")
    else:
        productStr = str(product)
        userInputStr = str(userInput)
        print("The correct answer was " + productStr + ".")
        print("You answered " + userInputStr + ".")
        
    return solveTime
    
def main():
    print("Welcome to the math practice tool!")
    operation = operationSelect()
    difficulty = difficultySelect()
    
    # switch to determine difficulty selected
    if (difficulty == 1):
        easyList = easyPractice()
        easyA = easyList[0]
        easyB = easyList[1]
        easyC = easyList[2]
        t = problemCheck(easyA, easyB, easyC)
        
    elif (difficulty == 2):
        mediumList = mediumPractice()
        mediumA = mediumList[0]
        mediumB = mediumList[1]
        mediumC = mediumList[2]
        t = problemCheck(mediumA, mediumB, mediumC)
        
    else:
        hardList = hardPractice()
        hardA = hardList[0]
        hardB = hardList[1]
        hardC = hardList[2]
        t = problemCheck(hardA, hardB, hardC)
        
    return t

if __name__ == "__main__":
    solveAgain = True
    solveTotal = 0
    solveTimeTotal = 0
    
    while solveAgain == True:
        solveTimeTotal += main()
        solveTotal += 1
        
        print("Would you like to try another problem?")
        userContinue = input("Input 'Y' for 'yes' and 'N' for 'no': ")
        if userContinue == "Y" or userContinue == 'y':
            solveAgain = True
            print("Your average solve time is " + str(round((solveTimeTotal/solveTotal), 3)) + " with " + str(solveTotal) + " solves.")
        else:
            solveAgain = False
            print("Your average solve time is " + str(round((solveTimeTotal/solveTotal), 3)) + " with " + str(solveTotal) + " solves.")

    print("Thank you for using the math practice tool!")
    
