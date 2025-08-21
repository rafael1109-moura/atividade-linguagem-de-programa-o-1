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
