#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void limpar_tela() {
    system("cls");
}

float somar(float a, float b)       { return a + b; }
float subtrair(float a, float b)    { return a - b; }
float multiplicar(float a, float b) { return a * b; }

float dividir(float a, float b) {
    if (b == 0) {
        printf("\n  ERRO: Divisao por zero nao e permitida!\n");
        return 0;
    }
    return a / b;
}

float potencia(float base, float exp) { return pow(base, exp); }

float raiz(float a) {
    if (a < 0) {
        printf("\n  ERRO: Raiz de numero negativo nao e permitida!\n");
        return 0;
    }
    return sqrt(a);
}

void exibir_historico(char historico[][100], int total) {
    printf("\n==========================\n");
    printf("       HISTORICO          \n");
    printf("==========================\n");
    if (total == 0) {
        printf("  Nenhum calculo ainda.\n");
    } else {
        for (int i = 0; i < total; i++) {
            printf("  %d. %s\n", i + 1, historico[i]);
        }
    }
    printf("==========================\n");
    printf("\nPressione Enter para voltar...");
    getchar();
    getchar();
}

int main() {
    int opcao;
    float num1, num2, resultado;
    char continuar;
    char historico[50][100];
    int total = 0;

    do {
        limpar_tela();
        printf("==========================\n");
        printf("      CALCULADORA C       \n");
        printf("==========================\n");
        printf("  1. Somar                \n");
        printf("  2. Subtrair             \n");
        printf("  3. Multiplicar          \n");
        printf("  4. Dividir              \n");
        printf("  5. Potencia             \n");
        printf("  6. Raiz Quadrada        \n");
        printf("  7. Ver Historico        \n");
        printf("  0. Sair                 \n");
        printf("==========================\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("\nAte mais!\n");
            break;
        }

        if (opcao == 7) {
            exibir_historico(historico, total);
            continue;
        }

        if (opcao < 1 || opcao > 6) {
            printf("\nOpcao invalida! Pressione Enter...");
            getchar(); getchar();
            continue;
        }

        if (opcao == 6) {
            printf("\nDigite o numero: ");
            scanf("%f", &num1);
            resultado = raiz(num1);
            if (num1 >= 0) {
                printf("\nResultado: raiz(%.2f) = %.2f\n", num1, resultado);
                if (total < 50)
                    sprintf(historico[total++], "raiz(%.2f) = %.2f", num1, resultado);
            }
        } else {
            printf("\nDigite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero:  ");
            scanf("%f", &num2);

            switch (opcao) {
                case 1:
                    resultado = somar(num1, num2);
                    printf("\nResultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
                    if (total < 50) sprintf(historico[total++], "%.2f + %.2f = %.2f", num1, num2, resultado);
                    break;
                case 2:
                    resultado = subtrair(num1, num2);
                    printf("\nResultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
                    if (total < 50) sprintf(historico[total++], "%.2f - %.2f = %.2f", num1, num2, resultado);
                    break;
                case 3:
                    resultado = multiplicar(num1, num2);
                    printf("\nResultado: %.2f x %.2f = %.2f\n", num1, num2, resultado);
                    if (total < 50) sprintf(historico[total++], "%.2f x %.2f = %.2f", num1, num2, resultado);
                    break;
                case 4:
                    resultado = dividir(num1, num2);
                    if (num2 != 0) {
                        printf("\nResultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
                        if (total < 50) sprintf(historico[total++], "%.2f / %.2f = %.2f", num1, num2, resultado);
                    }
                    break;
                case 5:
                    resultado = potencia(num1, num2);
                    printf("\nResultado: %.2f ^ %.2f = %.2f\n", num1, num2, resultado);
                    if (total < 50) sprintf(historico[total++], "%.2f ^ %.2f = %.2f", num1, num2, resultado);
                    break;
            }
        }

        printf("\nCalcular novamente? (s/n): ");
        getchar();
        scanf("%c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    return 0;
}