## Exercise 4
Suppose we call `scanf` as follows:

`scanf("%d%f%d", &i, &x, &j);`

If the user enters

10.3 5 6

what will be the values of `i`, `x`, and `j` after the call? (Assume that `i` and `j` are `int` variables and `x` is a `float` variable.)

### Solution
`i` = 10</br>
`x` = 0.300000</br>
`j` = 5</br>

`scanf` will first look for an integer in the input (10), which it stores in the variable `i`. Since the following period is not a permitted integer input, `scanf` moves on to the next conversion specification, saving the last input in case it is compatible with the next. Since the following variable is a `float`, the saved period is stored into `x` along with valid subsequent inputs (3). The following space causes `scanf` to move on to the next conversion specification, storing 5 in `j`. `scanf` is out of conversion specifications to match inputs with after the inputted space before the 6, resulting in it not getting stored in any variable.