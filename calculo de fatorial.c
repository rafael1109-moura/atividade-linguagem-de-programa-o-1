/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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