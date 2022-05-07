## Exercise 8
Would the `upc.c` program still work if the expression `9 - (total - 1) % 10` were replaced by `(10 - (total % 10)) % 10`?

### Solution
As established in Exercise 7, `9 - (total - 1) % 10` equals `10 - (total % 10)` whenever `(total - 1) % 10` is exactly 1 less than `total % 10`, which is the case whenever `total % 10 != 0`.

If `total % 10 == 0`, the addition of `% 10` in the proposed second expression would produce `10 % 10 == 0`, which is the same result as the first expression would produce.

Whenever `total % 10 != 0`, the addition of the `% 10` in the second expression has no effect on the result - the maximum value of `10 - total % 10` is 10 after all (assuming no negative digits).

Thus the second expression manages to produce the same result as the first when `total % 10 == 0` and `total % 10 != 0`. The two are equivalent.