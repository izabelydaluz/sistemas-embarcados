/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{   float salario;

    printf("informe seu salario por favor:");//peço o salario
    scanf("%f",&salario);//recebo a respota
    
    if (salario <= 600){//se for menor que ou igual a 600
        printf("voce não paga nada de INSS");//a pessoa não pga
    }
    if (salario <= 1200){//se for menos ou igual a 1200
        salario = salario-salario*20/100;//calculo 20% de desconto
        printf("seu salario com desconto é de: = %.2f",salario);//informo a respota
    }
    if (salario<= 2000){//se for menos ou igual a 2000
        salario = salario -salario*25/100;//calculo 25% de desconto
        printf("seu salario com desconto é de: = %.2f",salario);//informo a respota
    }
    if (salario >= 2000){//se for maior ou igual a 2000
        salario = salario-salario*30/100;//calculo 30% de desconto
        printf("seu salario com desconto é de: = %.2f",salario);//informo a respota
    }

    return 0;
}