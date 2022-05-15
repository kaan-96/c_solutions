## Exercise 5
Is the following `if` statement legal?
```
if (n >= 1 <= 10)
    printf("n is between 1 and 10\n");
```
If so, what does it to when `n` is equal to 0?

### Solution
The statement is syntactically legal, but doesn't have the likely intended effect. The expression first checks `n >= 1`, returning either true (1) or false (0). This binary value is then checked against `<= 10` (which it is naturally always less than, meaning the `if` statement always executes). Thus the statement will print "`n is between 1 and 10`" when `n` is equal to 0, or any other value for that matter.

The correct way of checking whether `n` is between (and including) 1 and 10 would be with the `&&` operator: `if (n >= 1 && n <= 10)`.