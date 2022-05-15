## Exercise 6
Is the following `if` statement legal?
```
if (n == 1-10)
    printf("n is between 1 and 10\n");
```
If so, what does it do when `n` is equal to 5?

### Solution
The statement is syntactically legal, but doesn't have the likely intended effect. The expression checks if `n` is exactly equal to -9 (1-10). If it is, it prints "`n is between 1 and 10`". If not, it does nothing.