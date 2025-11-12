Logic

Step 1:
Start the program.

Step 2:
Initialize variables:
balance 1000.0 (initial balance)
choice, amount

Step 3:
Display the ATM Menu inside a do-while loop:
markdown
Copy code
1. Deposit
2. Withdraw
3. Check Balance
4. Exit

Step 4:
Ask the user to enter their choice → store it in choice.

Step 5:
Use a switch statement to perform operations based on choice:

Case 1: Deposit
1. Ask the user to enter the amount.
2. If amount > 0, then
    → balance = balance + amount
    → Display "Amount deposited successfully."
    → Display updated balance.
3. Else
    → Display "Invalid amount."


Case 2: Withdraw
1. Ask the user to enter the amount.
2. If amount > 0 and amount <= balance, then
    → balance = balance amount
    → Display "Amount withdrawn successfully."
    → Display updated balance.
3. Else if amount > balance, then
    → Display "Insufficient balance."
4. Else
    → Display "Invalid amount."


Case 3: Check Balance
    → Display the current balance


Case 4: Exit
    → Display "Exiting program. Thank you!"
    → End the loop.


Default Case
    → Display "Invalid choice! Please select between 1-4."


Step 6:
Repeat Steps 3-5 until choice == 4


Step 7:
Stop the program.