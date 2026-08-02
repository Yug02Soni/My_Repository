import random
import tkinter as tk
from tkinter import messagebox


class NumberGuessingGame:

    def __init__(self, root):
        self.root = root
        self.root.title("Advanced Guessing Game")
        self.root.geometry("400x350")
        self.root.resizable(False, False)
        self.root.configure(bg="#2c3e50")

        # Game variables
        self.secret_number = 0
        self.tries_left = 3

        self.create_widgets()
        self.reset_game()

    def create_widgets(self):
        # Title Label
        self.title_label = tk.Label(
            self.root,
            text="Guess the Number!",
            font=("Arial", 20, "bold"),
            bg="#2c3e50",
            fg="#ecf0f1",
        )
        self.title_label.pack(pady=15)

        # Instructions Label
        self.instructions_label = tk.Label(
            self.root,
            text="I'm thinking of a number between 1 and 10.",
            font=("Arial", 12),
            bg="#2c3e50",
            fg="#bdc3c7",
        )
        self.instructions_label.pack(pady=5)

        # Tries Left Label
        self.tries_label = tk.Label(
            self.root,
            text=f"Tries left: {self.tries_left}",
            font=("Arial", 12, "bold"),
            bg="#2c3e50",
            fg="#e74c3c",
        )
        self.tries_label.pack(pady=5)

        # Entry Input
        self.entry_guess = tk.Entry(
            self.root,
            font=("Arial", 16),
            width=10,
            justify="center",
            bd=3,
            relief="groove",
        )
        self.entry_guess.pack(pady=15)
        self.entry_guess.bind("<Return>", lambda event: self.check_guess())

        # Submit Button
        self.submit_button = tk.Button(
            self.root,
            text="Submit Guess",
            font=("Arial", 12, "bold"),
            bg="#2ecc71",
            fg="white",
            activebackground="#27ae60",
            activeforeground="white",
            width=15,
            command=self.check_guess,
        )
        self.submit_button.pack(pady=5)

        # Feedback Label
        self.feedback_label = tk.Label(
            self.root,
            text="",
            font=("Arial", 12, "italic"),
            bg="#2c3e50",
            fg="#f1c40f",
        )
        self.feedback_label.pack(pady=15)

    def reset_game(self):
        self.secret_number = random.randint(1, 10)
        self.tries_left = 3
        self.tries_label.config(text=f"Tries left: {self.tries_left}")
        self.feedback_label.config(text="Enter a number and click Submit!")
        self.entry_guess.delete(0, tk.END)
        self.entry_guess.config(state="normal")
        self.submit_button.config(state="normal")
        self.entry_guess.focus()

    def check_guess(self):
        user_input = self.entry_guess.get().strip()

        # Input Validation
        if not user_input.isdigit():
            messagebox.showwarning("Invalid Input", "Please enter a valid whole number!")
            return

        guess = int(user_input)

        if guess < 1 or guess > 10:
            messagebox.showwarning("Out of Range", "Please guess a number between 1 and 10!")
            return

        self.tries_left -= 1
        self.tries_label.config(text=f"Tries left: {self.tries_left}")

        # Win condition
        if guess == self.secret_number:
            self.end_game(True)
            return

        # Lose condition
        if self.tries_left == 0:
            self.end_game(False)
            return

        # Hints for remaining tries
        if guess < self.secret_number:
            self.feedback_label.config(text="Too low! Try a higher number.")
        else:
            self.feedback_label.config(text="Too high! Try a lower number.")

        self.entry_guess.delete(0, tk.END)

    def end_game(self, won):
        self.entry_guess.config(state="disabled")
        self.submit_button.config(state="disabled")

        if won:
            self.feedback_label.config(text="🎉 Correct! You won! 🎉")
            message_text = f"Congratulations! You guessed the number {self.secret_number} correctly!"
        else:
            self.feedback_label.config(text="💥 Game Over! 💥")
            message_text = f"Game Over! The correct number was {self.secret_number}."

        # Play Again Dialog
        play_again = messagebox.askyesno("Game Over", f"{message_text}\n\nDo you want to play again?")
        
        if play_again:
            self.reset_game()
        else:
            self.root.destroy()


if __name__ == "__main__":
    root = tk.Tk()
    game = NumberGuessingGame(root)
    root.mainloop()
