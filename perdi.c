#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main(void)
{
    char g[19][166]=
    {  /*          1         2         3         4         5*/
        /*123456789012345678901234567890123456789012345678901*/
        {" PPPPPPPPPPPPPPP EEEEEEEEEEEEEEE RRRRRRRRRRRRRRR DDDDDDDDDDDDDDD       IIIIIIIIIIIIIII  \0"},/*0*/
        {" PPPPPPPPPPPPPPP EEEEEEEEEEEEEEE RRRRRRRRRRRRRRR DDDDDDDDDDDDDDD       IIIIIIIIIIIIIII  \0"},/*1*/
        {" PPP        PPPP EEE             RRR        RRRR DDD        DDDDD           IIIII       \0"},/*2*/
        {" PPP        PPPP EEE             RRR        RRRR DDD          DDDD          IIIII       \0"},/*3*/
        {" PPP        PPPP EEE             RRR        RRRR DDD           DDDD         IIIII       \0"},/*4*/
        {" PPP        PPPP EEE             RRR        RRRR DDD            DDDD        IIIII       \0"},/*5*/
        {" PPP        PPPP EEE             RRR        RRRR DDD             DDDD       IIIII       \0"},/*6*/
        {" PPP        PPPP EEE             RRR        RRRR DDD              DDDD      IIIII       \0"},/*7*/
        {" PPP        PPPP EEEEEEEEEE      RRRRRRRRRRRRRRR DDD              DDDD      IIIII       \0"},/*8*/
        {" PPPPPPPPPPPPPPP EEEEEEEEEE      RRRRRRRRRRRRRRR DDD              DDDD      IIIII       \0"},/*9*/
        {" PPPPPPPPPPPPPPP EEEEEEEEEE      RRRRRRRR        DDD              DDDD      IIIII       \0"},/*0*/
        {" PPP             EEE             RRR RRRR        DDD             DDDD       IIIII       \0"},/*1*/
        {" PPP             EEE             RRR  RRRR       DDD             DDDD       IIIII       \0"},/*2*/
        {" PPP             EEE             RRR   RRRR      DDD            DDDD        IIIII       \0"},/*3*/
        {" PPP             EEE             RRR    RRRR     DDD           DDDD         IIIII       \0"},/*4*/
        {" PPP             EEE             RRR     RRRR    DDD          DDDD          IIIII       \0"},/*5*/ 
        {" PPP             EEE             RRR      RRRR   DDD        DDDDD           IIIII       \0"},/*6*/
        {" PPP             EEEEEEEEEEEEEEE RRR       RRRR  DDDDDDDDDDDDDDD       IIIIIIIIIIIIIII  \0"},/*7*/
        {" PPP             EEEEEEEEEEEEEEE RRR        RRRR DDDDDDDDDDDDDDD       IIIIIIIIIIIIIII  \0"} /*8*/
    };
    int a;
    while(1)
    {
        for(a=0;a<20;a++)
        {
           printf(ANSI_COLOR_YELLOW"%s",g[a]);
           printf("\n");
        }
        usleep(100000);
    }
    return 0;
}

