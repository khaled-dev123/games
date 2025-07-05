## A simple number guessing game where the user has to guess a randomly generated number within a specified range.
import random

lower_number = 1
upper_number = 100
answer = random.randint(lower_number, upper_number)

print(f"Welcome to the number guessing game! Guess a number between {lower_number} and {upper_number}.")

while True:
    try:
        guess = int(input("Enter your guess: "))
        
        if guess < lower_number or guess > upper_number:
            print(f"Please enter a number between {lower_number} and {upper_number}.")
            continue

        if guess < answer:
            print("Too low! Try again.")
        elif guess > answer:
            print("Too high! Try again.")
        else:
            print("Congratulations! You've guessed the number!")
            break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")
print("Thank you for playing the number guessing game!")

