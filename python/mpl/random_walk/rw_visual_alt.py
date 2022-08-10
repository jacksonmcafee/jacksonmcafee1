import matplotlib.pyplot as plt

from random_walk import RandomWalk

while True:
    rw = RandomWalk(5000)
    rw.fill_walk()

    plt.style.use('seaborn')
    # figsize takes tuple param and takes x,y dimensions as inches
    fig, ax = plt.subplots(figsize=(15,9), dpi=128)

    point_numbers = range(rw.num_points)
    ax.plot(rw.x_values, rw.y_values, linewidth=1)

    # removes axes
    ax.get_xaxis().set_visible(False)
    ax.get_yaxis().set_visible(False)

    plt.show()

    # controls while loop
    keep_running = input("Make a new walk? (y/n): ")
    if keep_running == 'n':
        break
