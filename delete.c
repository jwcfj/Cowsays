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

#include <stdio.h>
#include <stdlib.h> /* Miscellaneous functions (rand, malloc, srand)*/

/* --------------------------------------------------------------------------*/
/**
 * \brief 
 *
 * \param argc
 * \param argv[]
 *
 * \return 
 */
int main(void)
{
    FILE *dados= NULL;
    char tem;
    int st;

    dados=fopen("errors.err","r");

    if(dados!=NULL)
    {
        if(fscanf(dados, "%c", &tem) == EOF)
        {
            printf("Sem conteudo\n");
            st = remove("errors.err");
            if(!st)
                printf("Excluido com sucesso!\n");
            else
                printf("Falha na exclussao\n");
        }
        else
            printf("Com conteudo\n");
    }
    else
        printf("Arquivo nao encontrado\n");

    return EXIT_SUCCESS;
}
