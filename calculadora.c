#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    // Solicitar ao usuário que insira um número
    printf("Digite um numero: ");
    scanf("%lf", &num1);
    // Solicitar ao usuário que insira a operação
    printf("Digite uma operacao (+, -, *, /): ");
    scanf(" %c", &operator);
    // Solicitar ao usuário que insira outro número
    printf("Digite o outro numero: ");
    scanf("%lf", &num2);

    // Realizar a operação e exibir o resultado
    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Erro: Divisao por zero nao permitida.\n");
            }
            break;
        default:
            printf("Operacao invalida.\n");
    }

    return 0;
}
