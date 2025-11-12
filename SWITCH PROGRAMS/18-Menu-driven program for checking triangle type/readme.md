Logic

1. Start the program.

2. Declare variables choice, side1, side2, side3.

3. Use a do-while loop to repeatedly show a menu:

- Option 1: Check Triangle Type
- Option 2: Exit

4. Take the user’s choice as input.

5. Use a switch-case to perform actions:

- Case 1:
         - Ask the user to input three sides.
         - Validate sides (must be positive).
         - Check if the sides satisfy the triangle inequality theorem:
             (a+b>c) and (b+c>a) and (a+c>b)

- If valid:

       - All sides equal → Equilateral

       - Two sides equal → Isosceles

       - All sides different → Scalene

- Else: Print invalid triangle message.

- Case 2: Exit program.

        - Default: Invalid choice.

6. Continue until the user selects Exit.

7. Stop the program.