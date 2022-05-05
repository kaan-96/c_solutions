## Exercise 3
For each of the following pairs of `scanf` format strings, indicate whether or not the two strings are equivalent. If they're not, show how they can be distinguished.

(a) `"%d"` versus `" %d"`</br>
(b) `"%d-%d-%d"` versus `"%d -%d -%d"`</br>
(c) `"%f"` versus `"%f "`</br>
(d) `"%f,%f"` versus `"%f, %f"`

### Solution
(a) Equivalent since lone spaces around conversion specifications are skipped in `scanf`.</br>
(b) Not equivalent since the first requires a matching hyphen immediately before the second and third integer input, while the second will accept any number of spaces between the integer inputs (as long as a hyphen immediately precedes the second and third integer input).</br>
(c) Equivalent for the same reason as (a).</br>
(d) Equivalent since all characters match (the comma immediately following the first integer input). Lone spaces around conversion specifications are skipped in `scanf`.