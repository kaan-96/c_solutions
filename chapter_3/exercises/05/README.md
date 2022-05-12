## Exercise 5
Suppose that we call `scanf` as follows:

`scanf("%f%d%f", &x, &i, &y);`

If the user enters

12.3 45.6 789

what will be the values of `x`, `i`, and `y` after the call? (Assume that `x` and `y` are `float` variables and `i` is an `int` variable.)

### Solution
`x` = 12.3
`i` = 45
`y` = 0.600000

`scanf` will first look for an floating-point number in the input (12.3), which it stores in the variable `x`. The following space causes `scanf` to move on to the next conversion specification, storing 45 in `i`. Since the following period is not a permitted integer input, `scanf` moves on to the next conversion specification, saving the last input in case it is compatible with the next. Since the following variable is a `float`, the saved period is stored into `y` along with valid subsequent inputs (6). `scanf`is out of variables to match inputs with after the inputted space before 789, resulting in it not getting stored in any variable.