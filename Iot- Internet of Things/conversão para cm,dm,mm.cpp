/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <stdio.h>
#define PI 3.14159


int main()
{
    
     printf("insira o valor em metros: ");//peço o valor em metros
    
    
    //calculo os valores
    float decimetro, metro, centimetro, milimetro;
    scanf ("%f", &metro);//retiro a informação dada
    
    centimetro = metro*100;//calculo centimetro,decimetro e milimetro
    decimetro = metro*10;
    milimetro = metro*1000;
    
    printf("\nos valores em decimetro= %f",  decimetro );//informo a respota
    printf("\nos valores em milimetro= %f",  milimetro);
    printf("\nos valores em centimetro= %f",centimetro);
    return 0;
    
}