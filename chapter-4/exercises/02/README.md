## Exercise 2
If `i` and `j` are positive integers, does `(-i / j)` always have the same value as `- (i / j)`? Justify your answer.

### Solution
Depends on which version/standard of C your compiler is running. In C89 (and possibly earlier iterations), negative integer division isn't always truncated, but can rather be rounded either up or down (meaning the first expression could produce two different values, unlike the second which is always truncated towards zero). In C99, division is always truncated towards zero. For my use case, running C99, the expressions above always have the same value.