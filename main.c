#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    
    int opcao ;
    float num1, num2;

    printf("===============CALCULADORA EM C===============\n");

    printf("1 - Adicao | 2 - Subtracao | 3 - Multiplicacao | 4 - Divisao | 5 - Potenciacao | 6 - Raiz Quadrada | 7 - Fatorial |0 - Sair\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao);
       while((opcao < 0) || (opcao > 7)) {
        printf("Opcao invalida! Digite uma opcao valida:(1 - Adicao | 2 - Subtracao | 3 - Multiplicacao | 4 - Divisao | 5 - Potenciacao | 6 - Raiz Quadrada | 7 - Fatorial | 0 - Sair):\n");
        printf("Digite a opcao: ");
        scanf("%d", &opcao);
    }

    while(opcao != 0) {
    
    if(opcao == 1) {
        printf("\n--ADICAO--\n");
        printf("Digite a primeira parcela: ");
        scanf("%f", &num1);
        printf("Digite a segunda parcela: ");
        scanf("%f", &num2);
        printf("Soma: %g + %g = %g\n", num1, num2, num1 + num2);

    } else if(opcao == 2) {
        printf("\n==SUBTRACAO==\n");
        printf("Digite o minuendo: ");
        scanf("%f", &num1);
        printf("Digite o subtraendo: ");
        scanf("%f", &num2);
        printf("Diferenca: %g - %g = %g\n", num1, num2, num1 - num2);

    } else if(opcao == 3) {
        printf("\n==MULTIPLICACAO==\n");
        printf("Digite o multiplicando: ");
        scanf("%f", &num1);
        printf("Digite o multiplicador: ");
        scanf("%f", &num2);
        printf("Produto: %g * %g = %g\n", num1, num2, num1 * num2);
        
    } else if(opcao == 4) {
        printf("\n==DIVISAO==\n");
        printf("Digite o dividendo: ");
        scanf("%f", &num1);
        printf("Digite o divisor: ");
        scanf("%f", &num2);
        while(num2 == 0) {
            printf("O divisor não pode ser zero! Digite um numero diferente: ");
            scanf("%f", &num2);
        }
        printf("Quociente: %g / %g = %g\n", num1, num2, num1 / num2);

    } else if(opcao == 5) {
        printf("\n==POTENCIACAO==\n");
        printf("Digite a base: ");
        scanf("%f", &num1);
        printf("Digite o expoente: ");
        scanf("%f", &num2);
        printf("Potencia: %g ^ %g = %g\n", num1, num2, pow(num1, num2));
        
    } else if(opcao == 6) {
        printf("\n==RAIZ QUADRADA==\n");
        printf("Digite o radicando: ");
        scanf("%f", &num1);
        printf("Raiz Quadrada: %g * %g = %g\n", num1, num1, num1 * num1);

    } else {
        printf("\n==FATORIAL==\n");
        int cont = 0, base;
        unsigned long long fator = 1;
        printf("Digite a base: ");
        scanf("%d", &base);
        while(base < 0) {
            printf("A base nao pode ser negativa! Digite novamente: ");
            scanf("%d", &base);
        }
        if(base > 0) {
        while(cont < base) {
            cont++;
            fator = fator * cont;
        }
        } else {
            fator = 1;
        }
        printf("Fatorial: %d! = %llu\n", base, fator);
    }

    printf("\n1 - Adicao | 2 - Subtracao | 3 - Multiplicacao | 4 - Divisao | 5 - Potenciacao | 6 - Raiz Quadrada | 7 - Fatorial | 0 - Sair\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao);
    
    while((opcao < 0) || (opcao > 7)) {
        printf("Opcao invalida! Digite uma opcao valida:(1 - Adicao | 2 - Subtracao | 3 - Multiplicacao | 4 - Divisao | 5 - Potenciacao | 6 - Raiz Quadrada | 7 - Fatorial | 0 - Sair):\n");
        printf("Digite a opcao: ");
        scanf("%d", &opcao);
    }
}
    printf("\n==SAINDO..==\n");
    while (getchar() != '\n' && getchar() != EOF);
    printf("Digite ENTER para fechar o programa\n");
    getchar();

    return 0;
}