## Exercise 5
What is the value of each of the following expressions in C89? (Give all possible values if an expression may have more than one value.)

(a) `8 % 5`</br>
(b) `-8 % 5`</br>
(c) `8 % -5`</br>
(d) `-8 % -5`

### Solution
C defines the `%` operation for `a % b` as `a == (a / b * b) + a % b`. If either `a` or `b` is negative, this means `a % b` can produce two different values in C89 (since `a / b` can be rounded either up or down).

(a) 3</br>
(b) -8 / 5 = -1 or -2, giving us either -8 - (-1 * 5) = -3 **_or_** -8 - (-2 * 5) = 2.</br>
(c) 8 / -5 = -1 or -2, giving us either 8 - (-1 * -5) = 3 **_or_** 8 - (-2 * -5) = -2.</br>
(d) -8 / -5 = 1 or 2, giving us either -8 - (1 * -5) = -3 **_or_** -8 - (2 * -5) = 2.