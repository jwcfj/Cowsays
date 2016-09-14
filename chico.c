#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char g[7][17]=
    {   /*12345678901234567*/
        {"                "},
        {"            _/  "},       
        {"          /00 -_"},
        {"   ______/ ----/"},
        {" /(       /     "},
        {"/ ||----||      "},
        {"  ||    ||      "}
};
    int a;
    while(1)
    {
        for(a=0;a<8;a++)
        {
           printf("%s  %s  %s  %s  %s  %s  %s  %s  %s", g[a], g[a],g[a],g[a],g[a],g[a],g[a],g[a],g[a]);
           printf("\n");
        }
    }
    return 0;
}

