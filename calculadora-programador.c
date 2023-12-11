#include <stdio.h>
#include <stdlib.h>

long long convertToDecimal(char num[], int base) {
    long long decimalNumber = 0;
    int i = 0, digit, weight = 1;

    // Loop reverso para obter dígitos da direita para a esquerda
    for (i = strlen(num) - 1; i >= 0; i--) {
        if (num[i] >= '0' && num[i] <= '9') {
            digit = num[i] - '0';
        } else if (num[i] >= 'A' && num[i] <= 'F') {
            digit = num[i] - 'A' + 10;
        } else if (num[i] >= 'a' && num[i] <= 'f') {
            digit = num[i] - 'a' + 10;
        } else {
            printf("Caractere invalido na entrada.\n");
            exit(1);
        }

        decimalNumber += digit * weight;
        weight *= base;
    }

    return decimalNumber;
}

void decimalToOtherBases(long long decimalNumber) {
    printf("Decimal: %lld\n", decimalNumber);
    printf("Binario: %lld\n", decimalNumber);
    printf("Octal: %llo\n", decimalNumber);
    printf("Hexadecimal: %llx\n", decimalNumber);
}

int main() {
    char num[100];
    int base;

    printf("Digite um numero: ");
    scanf("%s", num);

    printf("Digite a base do numero (2, 8, 10, ou 16): ");
    scanf("%d", &base);

    if (base != 2 && base != 8 && base != 10 && base != 16) {
        printf("Base invalida.\n");
        return 1;
    }

    // Converter para decimal
    long long decimalNumber = convertToDecimal(num, base);

    // Exibir o número nas outras bases
    decimalToOtherBases(decimalNumber);

    return 0;
}
