# System Programming Assignment


## Assignments

1. Debug the following code by compiling it for debugging and executing it within a
debugger. At which line of code does the program crash? Why does it crash there?

```c
/* This code has a compile-time error, and at
** least one run-time error. */
#include <stdio.h>
#include <math.h>
main(int argc,char *argv[])
{
int
n,i;
int
d2,count,
double d1;
while (1)
{
printf("Enter a number (0 to quit): ");
scanf("%d",&n);
if (n == 0)
break;
count=0;
for (i=0; i<n; i++)
{
d1=(double)n/(double)i;
d2=n/i;
if (fabs(d1-(double)d2) < 0.00001)
count++;
}
if (count == 2)
printf("%d is prime\n",n);
else
printf("%d is not prime\n",n);
}
}
```

2. Write a program that prompts the user for a positive integer and then reports the
closest integer having a whole number square root. For example, if the user enters
8, then the program reports 9. If the user enters 18, then the program reports 16.
The program should work for any number having one to seven digits.

3. Write a program that prompts the user for a positive integer and then computes
the sum of all the digits of the number. For example, if the user enters 2784, then
the program reports 21. If the user enters 59, then the program reports 14. The
program should work for any number having one to ten digits.

4. You are tasked with writing a program that manages contact information for
a group of people. The program should save the ﬁrst name, last name, and
telephone number for up to 12 people. The program should have options to
add a person, delete a person, update the information for a person, and display
all information for all current entries. How could you go about breaking up
the programming work into a set of subproblems that could be implemented
separately? Describe the subproblems, the order in which you would work on
them, and any testing you would do for each subproblem before proceeding to
the next.

## Authors

- **@waltertaya**
- **@clint171**
- **@lewmas**
- **@chegebb**
- **@baruk_netizen**
- **@brandon_datch**
- 