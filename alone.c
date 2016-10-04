/* ************************************************************************ *
 *    FOREVER ALONE, 1.0                                                    *
 *    Divirta-se alone                                                      *
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

#include<stdio.h>

void oi(void);
void tudo_bem(void);
void familia(void);
void sair(void);

int main(void)
{
    int continuar=1;

    do
    {
        printf("\n\tChat Foreve Alone\n\n");
        printf("1. Oi\n");
        printf("2. Tudo bem?\n");
        printf("3. Como vai a familia?\n");
        printf("0. Sair\n");

        scanf("%d", &continuar);
        /*system("cls || clear");*/

        switch(continuar)
        {
            case 1:
                oi();
                break;

            case 2:
                tudo_bem();
                break;

            case 3:
                familia();
                break;

            case 0:
                sair();
                break;

            default:
                printf("Digite uma opcao valida\n");
        }
    } while(continuar);

    return 0;
}


void oi(void)
{
    printf("\nOi!\n");
    return;
}

void tudo_bem(void)
{
    printf("\nTudo otimo, e com voce?\n");
    putchar('\n');    
    printf("1. Uma bosta\n");
    printf("2. Tudo bem\n");
    while(getchar()=='\n');
    return;
}

void familia(void)
{
    printf("\nMeus bits...digo, minha familia vai bem!\n");
    return;
}

void sair(void)
{
    printf("\nJa vai??? Nao! Nao! Espere! Naa...\n");
    return;
}
