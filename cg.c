#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char g[19][51]=
    {  /*          1         2         3         4         5*/
        /*123456789012345678901234567890123456789012345678901*/
        {"                   __---__                        \0"},/*0*/
        {"                 _-       /--______               \0"},/*1*/
        {"              __--( /     | )XXXXXXXXXXX|v.       \0"},/*2*/
        {"            .-XXX(   O   O  )XXXXXXXXXXXXXXX-     \0"},/*3*/
        {"           /XXX(       U     )        XXXXXXX|    \0"},/*4*/
        {"         /XXXXX(              )--_  XXXXXXXXXXX|  \0"},/*5*/
        {"        /XXXXX/ (      O     )   XXXXXX   |XXXXX| \0"},/*6*/
        {"        XXXXX/   /            XXXXXX   |__ |XXXXX \0"},/*7*/
        {"        XXXXXX__/          XXXXXX         |__---->\0"},/*8*/
        {"---___  XXX__/          XXXXXX      |__         / \0"},/*9*/
        {"  |-  --__/   ___/|  XXXXXX            /  ___--/= \0"},/*0*/
        {"   |-|    ___/    XXXXXX              '--- XXXXXX \0"},/*1*/
        {"      |-|/XXX| XXXXXX                      /XXXXX \0"},/*2*/
        {"        |XXXXXXXXX   |                    /XXXXX/ \0"},/*3*/
        {"         |XXXXXX      >                 _/XXXXX/  \0"},/*4*/
        {"            |XXXXX--__/              __-- XXXX/   \0"},/*5*/
        {"             -XXXXXXXX---------------  XXXXXX-    \0"},/*6*/
        {"                |XXXXXXXXXXXXXXXXXXXXXXXXXX/      \0"},/*7*/
        {"                    VXXXXXXXXXXXXXXXXXXV          \0"} /*8*/
    }
    int a;
    while(1)
    {
        for(a=0;a<20;a++)
        {
           printf("%s  %s  %s",g[a], g[a], g[a]);
           printf("\n");
        }
    }
    return 0;
}

