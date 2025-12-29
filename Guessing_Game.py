import random

def guess_the_number():
    print("--- Welcome to the Number Guessing Game! ---")
    secret_number = random.randint(1, 100)
    attempts = 0
    
    print("I am thinking of a number between 1 and 100.")

    while True:
        guess = int(input("Enter your guess: "))
        attempts += 1

        if guess < secret_number:
            print("Too low! Try again.")
        elif guess > secret_number:
            print("Too high! Try again.")
        else:
            print(f"Congratulations! You found the number in {attempts} attempts.")
            break

guess_the_number()
