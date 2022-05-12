## Exercise 7
The algorithm for computing the UPC check digit ends with the following steps:

Subtract 1 from the total.</br>
Compute the remainder when the adjusted total is divided by 10.</br>
Subtract the remainder from 9.

It's tempting to try to simplify the algorithm by using these steps instead:

Compute the remainder when the total is divided by 10.</br>
Subtract the remainder from 10.

Why doesn't this technique work?

### Solution
The two algorithms will produce the same result whenever `(total - 1) % 10` is exactly 1 less than `total % 10`. This isn't always the case however, since integer division by 10 will always produce a remainder that ranges from 0 to 9. Whenever `total % 10 == 0`, the first algorithm produces a remainder of 9, and the second produces a remainder of 0. They are still within one "increment" of each other, but ultimately the first algorithm produces a remainder that is 9 **_greater_** than the second one.

Regardless, check digits must presumably be limited to a single digit (it should be noted though that the first algorithm can produce a double-digit if `total == 0`, with more variations if negative UPC digits were permitted.)