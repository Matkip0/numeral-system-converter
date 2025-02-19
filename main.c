#include <stdio.h>
#include <string.h>

void convertDecimalToBinary(int);
void convertDecimalToHex(int);
void convertDecimal();
void convertBinaryToDecimal(char binary[]);
void convertBinaryToHexa(char binary[]);

int main(void) {
    char userString[64] = {0};
    printf("Enter a binary number\n");
    scanf("%s", userString);
    convertBinaryToDecimal(userString);
    //printf(userString);

    convertDecimal();
    return 0;
}

void convertDecimal() {
    printf("Enter a decimal number\n");
    int userValue;
    scanf("%d", &userValue);
    printf("%i in binary is ", userValue);
    convertDecimalToBinary(userValue);
    printf("\n");
    printf("%i in hexadecimal is ", userValue);
    convertDecimalToHex(userValue);
    printf("\n");
}

void convertDecimalToBinary(int decimal) {
    if (decimal == 0) {
        return;
    }
    convertDecimalToBinary(decimal / 2);
    printf("%i", decimal % 2);
}

void convertDecimalToHex(int decimal) {
    if (decimal == 0) {
        return;
    }
    convertDecimalToHex(decimal / 16);
    if (decimal % 16 < 10) {
        printf("%i", decimal % 16);
    }
    else {
        printf("%c", 'A' + (decimal % 16 - 10));
    }
}

void convertBinaryToDecimal(char binary[]) {
    int binaryLength = strlen(binary);

    int totalInDecimal = 0;
    int multiplication = 1;

    for (int i = binaryLength - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            totalInDecimal += multiplication;
        }
        multiplication *= 2;
    }
    printf("%d", totalInDecimal);
    printf("\n");
}
void convertBinaryToHexa(char binary[]) {
    int binaryLength = strlen(binary);
    char totalInHexa[64];
    char currentHexa = 0;
    int counter = 1;

    for (int i = binaryLength - 1; i >= 0; i--) {

        if (binary[i] == '1') {

        }
    }
}