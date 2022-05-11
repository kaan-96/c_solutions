## Exercise 13
Only one of the expressions `++i` and `i++` is exactly the same as `(i += 1)`; which is it? Justify your answer.

### Solution
Only `++i` is equivalent with the expression `(1 += 1)`, reason being both expressions manipulate `i` (adds 1) before its value is called. `i++` on the other hand manipulates `i` *after* it is has first been called.