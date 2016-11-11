#include<stdio.h>

#define COLORRED     "\x1b[31m"
#define COLORGREEN   "\x1b[32m"
#define COLORYELLOW  "\x1b[33m"
#define COLORBLUE    "\x1b[34m"
#define COLORMAGENTA "\x1b[35m"
#define COLORCYAN    "\x1b[36m"
#define COLOR_RESET  "\x1b[0m"

int main(void)
{
    char j;
    
    part1:
    printf(COLORRED"%x", j);
    printf(COLORGREEN"%c", j);
    printf(COLORMAGENTA"%o", j);
    j++;
    goto part1;
    return 0;
}
