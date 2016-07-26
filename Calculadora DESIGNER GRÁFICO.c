#include <stdio.h>
#include <stdlib.h>

int main()

{
int opcao;
float qpz=30.0, qpu=35.0, qpq=60.0, impressao, porcimpr, conducao = 10, subtotal, total, lucro;

system("color 0a");
printf("               :::::::::: CALCULADORA DO DESIGNER GRAFICO ::::::::::\n\n");
printf("                                  Ol\xA0, Leticia!           \n\n\n\n");
printf("Qual \x82 o custo da impress\xC6o? R$ ");
scanf("%f", &impressao);
printf("\n\nQual \x82 o formato de cores da arte?\n\n");
printf("Digite o n\xA3mero correspondente a sua op\x87\xC6o:\n");
printf("4x0 = 0\n4x1 = 1\n4x4 = 4\n\n");
printf("op\x87\xC6o: 4x");
scanf("%d", &opcao);
if(opcao==0)
    {
    porcimpr=(impressao/100)*20;
    subtotal=qpz+porcimpr+impressao;
    total=subtotal + conducao;
    lucro=total-impressao;
    printf("O valor a ser cobrado \x82 de R$ %f\n\n", total);
    printf("Seu lucro ser\xA0 de R$ %f\n\n\n\n\n", lucro);
    system("pause");
    system("cls");
    return main();
    }
if(opcao==1)
    {
    porcimpr=(impressao/100)*20;
    subtotal=qpu+porcimpr+impressao;
    total=subtotal + conducao;
    lucro=total-impressao;
    printf("O valor a ser cobrado \x82 de R$ %f\n\n", total);
    printf("Seu lucro ser\xA0 de R$ %f\n\n\n\n\n", lucro);
    system("pause");
    system("cls");
    return main();
    }
if(opcao==4)
    {
    porcimpr=(impressao/100)*20;
    subtotal=qpq+porcimpr+impressao;
    total=subtotal + conducao;
    lucro=total-impressao;
    printf("O valor a ser cobrado \x82 de R$ %f\n\n", total);
    printf("Seu lucro ser\xA0 de R$ %f\n\n\n\n\n", lucro);
    system("pause");
    system("cls");
    return main();
    }
if(opcao!=0 || opcao!=1 || opcao!=4)
    {
    printf("op\x87\xC6o inv\xA0lida!\n\n\n\n\n");
    system("pause");
    system("cls");
    return main();
    }
}
