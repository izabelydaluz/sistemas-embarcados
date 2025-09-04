/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{   
    int num;
    printf("informe um numero:");//peço o numero
    scanf("%i",&num);//recebo ele
    
    if (num % 3 == 0){//se for impar
        num += 1;//adiciono 1
        printf("seu numero ficou = %i", num);//mostro o resultado final
    }else{//se for par
        num -= 1;//diminuio 1
        printf("seu numero ficou = %i", num);//informo o valor final
    }
    return 0;
}