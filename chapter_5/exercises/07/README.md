## Exercise 7
What does the following statement print if `i` has the value 7? What does it print if `i` has the value -17?
```
printf("%d\n", i >= 0 ? i : -i);
```

### Solution
The expression first checks if `i >= 0`, returning either true (1) or false (0). If true, `i` is printed, else `-i` is printed. As a result, `i >= 0` prints `i`, and `i < 0` prints `i` without a negative sign. `i = 7` returns 7 and `i = -17` returns 17.