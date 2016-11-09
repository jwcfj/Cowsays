/* ************************************************************************ *
 *    THE GAME, VERSION                                                     *
 *    BRIEF_DESCRIPTION                                                     *
 *                                                                          *
 *    Copyright (C) 2016 by Daniel de Oliveira Silva                        *
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
 *    Daniel de Oliveira Silva <dnl.oliveira11@gmail.com>                   *
 *    Webpage: http://www.poli.br                                           *
 *    Phone: +55 (81) 99890-9860                                            *
 * ************************************************************************ *
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n, x, limite_inferior, limite_superior, acertou, tentativas;

    srand(time(NULL));

    acertou = 0;            
    tentativas = 0;         
    limite_inferior = 0;    
    limite_superior = 100;  
    n = (rand() % 100) + 1; 
    do 
    {
        printf("Bem-vindo ao The Game, va' tentando enquanto pode\n");
        printf("Total de tentativas: %d\n", tentativas);
        printf("Digite um numero(Esta entre %d e %d): ", limite_inferior, limite_superior);
        scanf("%d", &x);
        tentativas++;
        if(x > n)
            limite_superior = x;
        else if(x < n) 
            limite_inferior = x;
        else 
            acertou = 1;
    }while(!acertou);

    printf("\nParabens, o numero eh: %d", n);
    printf("\nTotal de tentativas: %d\n", tentativas);

    return 0;
}
