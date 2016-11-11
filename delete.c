/* ************************************************************************ *
 *    Apagar errors.err quando vazio, VERSION 1.0                           *
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
 *    Webpage: http://www.poli.com                                          *
 *    Phone: +55 (81) 99345-0341                                            *
 * ************************************************************************ *
 * 
 */

#include <stdio.h> /* Standard I/O functions */
#include <stdlib.h> /* Miscellaneous functions (rand, malloc, srand)*/
#include <getopt.h> /* get options from system argc/argv */

/* --------------------------------------------------------------------------*/
/**
 * \brief 
 *
 * \param argc
 * \param argv[]
 *
 * \return 
 */
int remover(void);

int main(int argc, char *argv[])
{
    FILE *dados= NULL;
    char tem;
    int opt, f=0;

    /* getopt() configured options:
     *        -f  forcado
     */
    opterr = 0;
    while((opt = getopt(argc, argv, "f")) != EOF)
        switch(opt)
        {
            case 'f':
                f = 1; 
                break;
            case '?':
            default:
                printf("Type\n\t$man %s\nor\n\t$%s -h\nfor help.\n\n", argv[0], argv[0]);
                return EXIT_FAILURE;
        }


    dados=fopen("errors.err","r");

    if(dados!=NULL)
    {
        if(f)
            remover();
        else
        {
            if(fscanf(dados, "%c", &tem) == EOF)
            {
                printf("Sem conteudo\n");
                remover();
            }
            else
                printf("Com conteudo\n");
        }
    }
    else
        printf("Arquivo nao encontrado\n");

    return EXIT_SUCCESS;
}

int remover(void)
{
    int st;

    st = remove("errors.err");
    if(!st)
        printf("Excluido com sucesso!\n");
    else
        printf("Falha na exclussao\n");

    return st;
}

