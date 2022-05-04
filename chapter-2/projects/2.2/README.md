## Project 2.2
Write a program that computes the volume of a sphere with a 10-meter radius, using the formula *v* = 3/4π*r*³. Write the fraction 4/3 as `4.0f/3.0f`. (Try writing it as `4/3`. What happens?) *Hint:* C doesn't have an exponentiation operator, so you'll need to multiply *r* by itself twice to compute *r*³.
### Solution
See `2.2.c`.
Writing the fraction as `4/3` causes truncation despite *v* being declared a float. Hence, `4/3` is shortened from 1.333... to 1.