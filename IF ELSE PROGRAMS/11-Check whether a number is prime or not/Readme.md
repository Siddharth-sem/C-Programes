Logic
1. Read an integer input from the user.

2. Numbers less than 2 are not prime.

3. Assume the number is prime initially.

4. Use a loop from 2 to num/2:

   - If the number is divisible by any value in this range (num % i == 0),it is not prime.

5. After the loop:

   - If no divisor is found → number is prime.