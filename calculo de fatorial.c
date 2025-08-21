#include <stdio.h>

int fatorial (int n){
    if (n == 0){
        return 1;
    }
    else{
        return n * fatorial(n - 1); 
    }
}

int main()
{
    int n;
    
    int result;
    
    printf("digite um número: ");
    scanf("%d", &n);
    
    result = fatorial(n);
    
    printf("O resultado é: %d\n", result);
    
    

    return 0;
}

/*Cálculo de Fatorial: Crie um programa que calcule e imprima o 
fatorial de um número inteiro fornecido pelo usuário.
*/
