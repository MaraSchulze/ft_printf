# ft_printf
This function recodes a simple version of printf.  
The detailed project description is in the pdf file.  

## Format Specifiers
d, i, u, x, X, c, s, p, %  

## Usage
This project was written for and compiled on a Mac.  
```
make
```
This yields ftprintf.a.  
<br>
Then include ft_printf.h in your code:
```
#include "ft_printf.h"
```
and inform the compiler of the library:
```
gcc -L<path to ftprintf.a> -lftprintf main.c
```

## Caveats
This project was a 42School project, we had to program according to a strict norm, for instance using only while loops, having only 25 lines per function, using no inline comments etc.  
Also the projects have other restrictions like using only given functions or doing things a certain way.  
