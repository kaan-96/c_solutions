## Exercise 7
What does the following statement print if `i` has the value 7? What does it print if `i` has the value -17?
```
printf("%d\n", i >= 0 ? i : -i);
```

### Solution
The expression first checks if `i >= 0`, returning either true (1) or false (0). If true, `i` is printed, else `-i` is printed. In other words, if `i >= 0`, `i` is printed. If `i < 0`, `i` is printed without its negative sign. `i = 7` returns 7, `i = -17` returns 17.