/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void primo(int n){
    int count = 0;
    
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            count += 1;
            
        }
    }
    if (count == 2 || n ==1){
        printf("o número %d é primo", n);
    }
    else {
        printf("o número %d não é primo", n);
    }
}

int main()
{
    int n;
   
   
    printf("digite um número");
    scanf("%d", &n);
    
    primo(n);

    return 0;
}







