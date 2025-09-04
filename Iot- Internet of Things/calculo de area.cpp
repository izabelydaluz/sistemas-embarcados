/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdio.h>
#define PI 3.14159
int main()
{
    printf("informe o valor do raio: ");// peço ovalor do raio


    //calculo da area
    float area, raio;
    scanf ("%f", &raio)//recebo a resposta
    area = PI * raio *raio; //calculo
    printf("Area = %f",  area);//informo o valor final
    return 0;
}

