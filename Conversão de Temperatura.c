/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void cel (float n){
    float conv;
    
    conv = (n - 32) * (5/9);
    //fah para cel
    
    printf("o novo valor é: %.2f", conv);
}

void fah (float n){
    float conv;
    
    conv = (n * 9/5) + 32 ;
    //cel para fah
    
    printf("o novo valor é: %.2f", conv);
}

int main(){
    
    float n;
    int menu;

    printf("digite uma temperatura:");
    scanf("%f", &n);
    
    printf("menu \n");
    printf("digite 1 para converter de Celsius para Fahrenhei \n");
    printf ("digite 2 para conveter de Fahrenheit para Celsius \n");
    
    scanf("%d", &menu);
    
    while (menu != 1 || menu != 2){
        if (menu == 1){
            fah (n);
            break;
        }
        if (menu == 2){
            cel (n);
            break;
        }
        else {
            printf("número invalido");
        }    
    }
            
        
    
    
    
    return 0;
}

/*  Conversão de Temperatura: Escreva um programa que converta uma temperatura 
fornecida em graus Celsius para Fahrenheit e vice-versa. */




