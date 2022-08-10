from random import randint

class Die:
    # edit num sides for Dx die, currently rolling D6
    def __init__(self, num_sides=6):
        self.num_sides = num_sides

    def roll(self):
        return randint(1, self.num_sides)
