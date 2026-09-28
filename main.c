#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    
    int opcao ;
    float num1, num2;

    printf("===============CALCULADORA EM C===============\n");

    printf("1 - Adicao | 2 - Subtracao | 3 - Multiplicacao | 4 - Divisao | 0 - Sair\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao);
       while((opcao < 0) || (opcao > 4)) {
        printf("Opcao invalida! Digite uma opcao valida:(1 - Adicao | 2 - Subtracao | 3 - Multiplicacao | 4 - Divisao | 0 - Sair):\n");
        printf("Digite a opcao: ");
        scanf("%d", &opcao);
    }

    while(opcao != 0) {
    
    if(opcao == 1) {
        printf("--ADICAO--\n");
        printf("Digite a primeira parcela: ");
        scanf("%f", &num1);
        printf("Digite a segunda parcela: ");
        scanf("%f", &num2);
        printf("Soma: %g + %g = %g\n", num1, num2, num1 + num2);

    } else if(opcao == 2) {
        printf("==SUBTRACAO==\n");
        printf("Digite o minuendo: ");
        scanf("%f", &num1);
        printf("Digite o subtraendo: ");
        scanf("%f", &num2);
        printf("Diferenca: %g - %g = %g\n", num1, num2, num1 - num2);

    } else if(opcao == 3) {
        printf("==MULTIPLICACAO==\n");
        printf("Digite o multiplicando: ");
        scanf("%f", &num1);
        printf("Digite o multiplicador: ");
        scanf("%f", &num2);
        printf("Produto: %g * %g = %g\n", num1, num2, num1 * num2);
        
    } else {
        printf("==DIVISAO==\n");
        printf("Digite o dividendo: ");
        scanf("%f", &num1);
        printf("Digite o divisor: ");
        scanf("%f", &num2);
        while(num2 == 0) {
            printf("O divisor não pode ser zero! Digite um nUmero diferente: ");
            scanf("%f", &num2);
        }
        printf("Quociente: %g / %g = %g\n", num1, num2, num1 / num2);  
    }

    printf("1 - Adicao | 2 - Subtracao | 3 - Multiplicacao | 4 - Divisao | 0 - Sair\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao);
    
    while((opcao < 0) || (opcao > 4)) {
        printf("Opcao invalida! Digite uma opcao valida:(1 - Adicao | 2 - Subtracao | 3 - Multiplicacao | 4 - Divisao | 0 - Sair):\n");
        printf("Digite a opcao: ");
        scanf("%d", &opcao);
    }
}
    printf("==SAINDO..==\n");
    while (getchar() != '\n' && getchar() != EOF);
    printf("Digite ENTER para fechar o programa\n");
    getchar();

    return 0;
}