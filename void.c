#include<stdio.h>

#define vazio "\e[H\e[2J"

int main()
{
here:
    printf(vazio);
    goto here;
}
