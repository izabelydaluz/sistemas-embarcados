/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
    int cargo;
    float salario;
    printf("1- auxiliar de escritorio\n2-secretario\n3-cozinheiro\n4-entregador");//dou as opções
    printf("informe seu cargo:");//peço o cargo
    scanf("%i",&cargo);//recebo a resposta
    printf("informe seu salario:");//peço o salario
    scanf("%F",&salario);//recebo a resposta
    
    switch (cargo){//em relação ao cargo
        case 1://se for 1
            salario = salario+salario*7/100;//calculo com 7% de acrescimo
            printf("seu salario final é de: =%.2f", salario);//informo o resultado
            break;//programa encerra
        
        case 2 ://se for 2
            salario = salario+salario*9/100;//calculo com 9% de acrescimo
            printf("seu salario final é de: =%.2f", salario));//informo o resultado
            break;//programa encerra
        
        case 3 ://se for 3
            salario = salario+salario*5/100;//calculo com 5% de acrescimo
            printf("seu salario final é de: =%.2f", salario) ;//informo o resultado
            break;//programa encerra
        
        case 4://se for 4
            salario = salario+salario*12/100;//calculo com 12% de acrescimo
            printf("seu salario final é de: =%.2f", salario) ;//informo o resultado
            break;//programa encerra
        
    default:
    printf("informe um argo existente");
        break;//programa encerra
    }

    return 0;
}