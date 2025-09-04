/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
    int idade;
    
    printf("informe sua idade:");//peço a idade
    scanf("%i",&idade);//recebo a idade
    
    if (idade < 18){//se for menos que 18
        printf("voce ainda é criança");//ela ainda é criança
    }
    if (idade < 65){//se for menos de 65
        printf("voce ja é adulto");//é adulto
    }
    if (idade >= 65){//se for mais de 65 ou mais
        printf("voe ja é idoso");//idoso
    }


    return 0;
}