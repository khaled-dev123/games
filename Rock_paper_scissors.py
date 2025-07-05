## Rock, Paper, Scissors Game
import random

options = ("rock", "paper", "scissors")

player_choice = input("Enter your choice (rock, paper, scissors): ").lower()
computer_choice = random.choice(options)
if player_choice not in options:
    print("Invalid choice. Please choose between (rock, paper, or scissors.)")
else: 
    print(f"Computer chose: {computer_choice}")
    
    if player_choice == computer_choice:
        print("It's a tie!")
    elif (player_choice == "rock" and computer_choice == "scissors") or \
         (player_choice == "paper" and computer_choice == "rock") or \
         (player_choice == "scissors" and computer_choice == "paper"):
        print("You win!")
    else:
        print("You lose!")


