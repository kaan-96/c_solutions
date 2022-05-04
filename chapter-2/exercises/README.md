### Exercise
Create and run Kernighan and Ritchie's famous "hello, world" program:
```
int main(void)
{
    printf("hello, world\n");
}
```
Do you get a warning message from the compiler? If so, what's needed to make it go away?
### Solution
No error is given using gcc version 11.3.0. Adding `return 0;` at the end of the function would presumably remedy potential errors in older compilers.