Logic

1. Input a number → num.

2. Count the number of digits (count).

3. For each digit:

- Find remainder → remainder = num % 10.

- Compute remainder^count using a loop.

- Add to sum.

- Reduce number → num = num / 10.

4. If sum == originalNum, it’s an Armstrong number.