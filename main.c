/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//código calcular idade
//*Aluna: Júlia Barroso Vieira
int main()
{
    int anoNasc;
    int anoAtual=2024;
    int idade;
    printf("Qual seu ano de nascimento? ");
    scanf("%d", &anoNasc);
    idade=anoAtual-anoNasc;
    printf("Sua idade é:%d", idade);

    return 0;
}
