import random

secretNumber = random.randint(1, 100)
number = -1
while True:
    number = int(input("Guess a number: "))
    if number == secretNumber:
        print("Congratulations!")
        break
    elif number < secretNumber:
        print("Too small!")
    else:
        print("Too big!")

