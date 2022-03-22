import random
import time
import pysimpleGUI

# global objects
solve_time_storage = []
total_problems_solved = 0


# launch functions
def operation_select():
    print("Operation Selection!")
    print("(1) - Addition[+]")
    print("(2) - Subtraction[-]")
    print("(3) - Multiplication[x]")
    print("(4) - Division[/]")
    user_operation_input = input(int("Input your selection: "))
    operation_list = ["null", "+", "-", "*", "/"]
    return operation_list[user_operation_input]


def difficulty_selection():
    print("Difficulty Selection!")
    print("(1) - Easy")
    print("(2) - Medium")
    print("(3) - Hard")
    print("(4) - Expert")
    difficulty = input(int("Input your selection: "))
    return difficulty


def loop_selection():
    user_loop_input = None
    while user_loop_input != "Y" or user_loop_input != "N":
        user_loop_input = str(
            input("Would you like to loop through problems? [Y/N]"))

    if user_loop_input == "Y":
        loop = True
    else:
        loop = False

    return loop


# time functions
def start_time():
    starting_time = time.time()
    return starting_time


def end_time():
    ending_time = time.time()
    return ending_time


def time_to_solve(a, b):
    # given starting_time (a) and ending_time (b)
    solving_time = b - a
    solve_time_storage.append(solving_time)
    return solving_time


# logic functions
def problemGeneration(a, b):
    # given operation (a) and difficulty (b)
    # requires error checking so that obscenely difficult problems
    # aren't given to diff < 3

    if b <= 3:
