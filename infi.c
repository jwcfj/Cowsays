#include<stdio.h>

int main(void)
{
    char j;
part1:
    printf("%x", j);
    printf("%c", j);
    printf("%o", j);
    j++;
    goto part1;
    return 0;
}
