#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int digit;

    printf("Введите цифры от 0 до 9 (для выхода введите любой другой символ):\n");

    while (1) {
        printf("Введите цифру: ");


        if (scanf("%d", &digit) != 1) {
            break;
        }


        if (digit < 0 || digit > 9) {
            printf("Ошибка: введите цифру от 0 до 9\n");
            continue;
        }

  
        switch (digit) {
        case 0:
            printf("0 - zero\n");
            break;
        case 1:
            printf("1 - one\n");
            break;
        case 2:
            printf("2 - two\n");
            break;
        case 3:
            printf("3 - three\n");
            break;
        case 4:
            printf("4 - four\n");
            break;
        case 5:
            printf("5 - five\n");
            break;
        case 6:
            printf("6 - six\n");
            break;
        case 7:
            printf("7 - seven\n");
            break;
        case 8:
            printf("8 - eight\n");
            break;
        case 9:
            printf("9 - nine\n");
            break;
        }
    }

    printf("Программа завершена.\n");
    return 0;
}