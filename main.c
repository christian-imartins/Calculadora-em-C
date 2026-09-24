#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int opcao;
    float num1, num2;
    float resultado;
    printf("===============CALCULADORA EM C===============\n");
    printf("1 - Adicao | 2 - Subtracao | 3 - Multiplicacao | 4 - Divisao | 0 - Sair\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao);
    
    while((opcao < 0) || (opcao > 4)) {
        printf("Opcao invalida! Digite uma opcao valida:(1 - Adicao | 2 - Subtracao | 3 - Multiplicacao | 4 - Divisao | 0 - Sair):\n");
        printf("Digite a opcao: ");
        scanf("%d", &opcao);
    }
    
    if(opcao == 0) {
        printf("==SAINDO DO PROGRAMA..==\n");
        return 0;
    } 
    
    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite outro numero: ");
    scanf("%f", &num2);
    
    if(opcao == 1) {
        printf("--ADICAO--\n");
        resultado = num1 + num2;
    } else if(opcao == 2) {
        printf("==SUBTRACAO==\n");
        resultado = num1 - num2;
    } else if(opcao == 3) {
        printf("==MULTIPLICACAO==\n");
        resultado = num1 * num2;
    } else {
        printf("==DIVISAO==\n");
        resultado = num1 / num2;
    }

    printf("Resultado: %.3f\n", resultado);
    return 0;
}