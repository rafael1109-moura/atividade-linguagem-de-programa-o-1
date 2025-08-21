/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    
    printf("digite um número maior do que zero ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++){
        printf("%d \n",i);
    }
    
    
   

    return 0;
}

/* Impressão de Números de 1 a N: Escreva um programa que leia 
um número inteiro positivo N e imprima todos os números de 1 até N.   */