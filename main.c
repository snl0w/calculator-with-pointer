#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

float soma(float *p_num1, float *p_num2);
float sub(float *p_num1, float *p_num2);
float mult(float *p_num1, float *p_num2);
float divi(float *p_num1, float *p_num2);

int main(void)
{

    setlocale(LC_ALL, "Portuguese");
    char op; // Opção
    float num1, num2, result;

    printf("Escolha uma operacao: '+' '-' '*' '/'\n");
    scanf("%c", &op);

    printf("Primeiro numero: ");
    scanf("%f", &num1);
    printf("\nSegundo numero: ");
    scanf("%f", &num2);

    float *p_num1 = &num1;
    float *p_num2 = &num2;

    switch (op)
    {
    case '+':
        result = soma(p_num1, p_num2);
        break;
    case '-':
        result = sub(p_num1, p_num2);
        break;
    case '*':
        result = mult(p_num1, p_num2);
        break;
    case '/':
        result = divi(p_num1, p_num2);
        break;
    default:
        printf("\nComando invalido!");
        return 0;
    }

    printf("\nResultado: %2.f", result);

    return 0;
}

float soma(float *a, float *b)
{
    return (*a) + (*b);
}
float sub(float *a, float *b)
{
    return (*a) - (*b);
}
float mult(float *a, float *b)
{
    return (*a) * (*b);
}
float divi(float *a, float *b)
{
    if (*b != 0)
    {
        return (*a) / (*b);
    }
    else
    {
        printf("\nErro! Divisao por zero.");
    }
}