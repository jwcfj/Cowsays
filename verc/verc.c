/* ************************************************************************ *
 *    Escolhe uma linha de um arquivo e a inprime, VERSION 2.0              *
 *    BRIEF_DESCRIPTION                                                     *
 *                                                                          *
 *    Copyright (C) 2016 by Rafael Santos Pereira da Silva                  *
 *                                                                          *
 *    This program is free software; you can redistribute it and/or modify  *
 *    it under the terms of the GNU General Public License as published by  *
 *    the Free Software Foundation; either version 2 of the License, or     *
 *    (at your option) any later version.                                   *
 *                                                                          *
 *    This program is distributed in the hope that it will be useful,       *
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *    GNU General Public License for more details.                          *
 *                                                                          *
 *    You should have received a copy of the GNU General Public License     *
 *    along with this program; if not, write to the                         *
 *    Free Software Foundation, Inc.,                                       *
 *    59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                          *
 *    To contact the author, please write to:                               *
 *    Rafael Santos Pereira da Silva <rafappr99@gmail.com>                  *
 *    Webpage: http://www.poli.br                                           *
 *    Phone: +55 (81) 99345-0341                                            *
 * ************************************************************************ *
 * 
 */

#include <stdio.h> /* Standard I/O functions */
#include <stdlib.h> /* Miscellaneous functions (rand, malloc, srand)*/
#include <getopt.h> /* get options from system argc/argv */
#include <string.h>  /* Strings functions definitions */
#include <time.h>  /* Time and date functions */

typedef struct st_nada
{
    FILE *dados;
    char tem;
    char url[2][200];
    int i,j;
}t_ver;

void card(t_ver v);
int num(t_ver);

/* --------------------------------------------------------------------------*/
/**
 * \brief 
 *
 * \param argc
 * \param argv[]
 *
 * \return 
 */
int main(int argc, char *argv[])
{  
    int opt, i, k=0;
    t_ver v;
    v.i=0;
    srand(time(NULL));

    opterr = 0;
    while((opt = getopt(argc, argv, "ps")) != EOF)
        switch(opt)
        {
            case 'p':
                strcpy(v.url[k], "./banco_ver/prov.txt");
                k++;
                break;
            case 's':
                strcpy(v.url[k], "./banco_ver/salmo.txt");
                k++;
                break;
        }
    if(k==0)
    {
        strcpy(v.url[0], "./banco_ver/salmo.txt");
        strcpy(v.url[1], "./banco_ver/prov.txt");
        k=2;
    }
    
    for(v.i=0; v.i<k; v.i++)
    {
        v.dados=fopen(v.url[v.i],"r");

        i = num(v);
 
        if(v.dados!=NULL)
        {
            v.j = rand()%i;
            card(v);
        }
        else
            printf("Arquivo nao encontrado\n");
    }

    return EXIT_SUCCESS;
}

void card(t_ver v)
{
    int i;
    char info[250];
    FILE *arq;

    arq = v.dados;

    for(i=0; i<v.j; i++)
        fgets(info, sizeof(info), arq);

    printf("%s", info);

    fclose(arq);

    return;
}

int num(t_ver v)
{
    char ch;
    int num=0;
    FILE *arq;

    arq = fopen(v.url[v.i], "r");
    if(arq == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
    else
        while( (ch=fgetc(arq))!= EOF )
            if(ch == '\n')
                num++;

    /*printf("Existem %d linhas no arquivo\n", num);*/
    fclose(arq);

    return num;

}
