#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int task1() {
    char c;

    printf("Введите символ: ");
    scanf("%c", &c);

    switch (c)
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf("Это цифра\n");
        break;
    case 'a':
    case 'b':
        printf("Это буква\n");
        break;

    default:
        printf("Неизвестный символ\n");
    }

    return 0;
}

task2() {
    float x, y;
    char c;
    printf("Введите выражение: (например 5 + 4, дробную часть через запятую))\n");
    scanf("%f %c %f", &x, &c, &y);
    switch (c) {
    case '+':
        printf("=%.2f\n", x + y);
        break;

    case '-':
        printf("=%.2f\n", x - y);
        break;

    case '*':
        printf("=%.2f\n", x * y);
        break;
    
    case '/':
        printf("=%.2f\n", x / y);
        break;

    case '^':   //доп функционал
        printf("=%.2f\n", pow(x,y));
        break;

    default:
        printf("Неправильная запись выражения :(\n");
        break;
    }
    

    return 0;
}


int main() {
	setlocale(LC_ALL, ".UTF8");
    task2();
	return 0;
}