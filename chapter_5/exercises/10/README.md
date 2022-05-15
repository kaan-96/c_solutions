## Exercise 10
What output does the following program fragment produce? (Assume that `i` is an integer variable.)
```
i = 1;
switch (i % 3) {
    case 0: printf("zero");
    case 1: printf("one");
    case 2: printf("two");
}
```

### Solution
This `switch` statement performs remainder arithmetic on `i` with division by 3. It lists the possible remainder values as cases (which are 0, 1 and 2), printing in words the corresponding remainder value.