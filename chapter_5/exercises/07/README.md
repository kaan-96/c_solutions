## Exercise 7
What does the following statement print if `i` has the value 7? What does it print if `i` has the value -17?
```
printf("%d\n", i >= 0 ? i : -i);
```

### Solution
The expression first checks if `i >= 0`, returning either true (1) or false (0). If true, `i` is printed, else `-i` is printed. As a result, `i` is printed if `i >= 0`, and `i` is printed without a negative sign if `i < 0`. `i = 7` returns 7, `i = -17` returns 17.