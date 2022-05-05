## Exercise 2
Consider the following program:
```
#include <stdio.h>
int main(void)
{
    printf("Parkinson's Law:\nWork expands so as to ");
    printf("fill the time\n");
    printf("available for its completion.\n");
    return 0;
}
```
(a) Identify the directives and statements in this program.</br>
(b) What output does the program produce?

### Solution
(a) Directives specify how the compiler should process its input. The directive in the code above is `#include <stdioh.>`, which calls the standard input/output library functions. Statements are commands given to the computer to take a specific action, such as display to the screen, or collect input. Each line of `printf` along with `return 0;` in the code above is a statement.</br>
(b) The program produces the following output:
```
Parkinson's Law:
Work expands so as to fill the time
available for its completion.
```