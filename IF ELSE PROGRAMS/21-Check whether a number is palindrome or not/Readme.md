Logic

1. Input an integer → num.

2. Store its value in another variable → originalNum.

3. Reverse the number:

- Extract the last digit using num % 10.

- Append it to reversedNum = reversedNum * 10 + remainder.

- Remove the last digit from num using num / 10.

4. Compare:

- If originalNum == reversedNum → Palindrome.

- Else → Not a palindrome.