## Exercise 14
Supply parentheses to show how a C compiler would interpret each of the following expressions.

(a) `a * b - c * d + e`</br>
(b) `a / b % c / d`</br>
(c) `- a - b + c - + d`</br>
(d) `a * - b / c - d`

### Solution
(a) `(((a * b) - (c * d)) + e)`</br>
(b) `(((a / b) % c) / d)`</br>
(c) `((((- a) - b) + c) - (+ d))`</br>
(d) `(((a * (- b)) / c) - d)`