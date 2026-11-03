#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
float x, y;
char c;
int k;

int task1()
{
    printf("Введите символ: ");
    scanf("%c", &c);
    k = (c >= '0' && c <= '9');
    switch (k)
    {
    case 1:
        printf("это цифра\n");
        break;
    case 0:
        printf("это буква\n");
        break;
    }
    return 0;
}
int task2()
{
    printf("Введите выражение: ");
    scanf("%f%c%f", &x, &c, &y);
    switch (c)
    {
    case '+':
        printf("=%f", x + y);
        break;
    case '-':
        printf("=%f", x - y);
        break;
    case '*':
        printf("=%f", x * y);
        break;
    case '/':
        printf("=%f", x / y);
        break;
    case '^':
        printf("=%f", pow(x, y));
        break;
    default:
        printf("Ошибка");
    }
    return 0;
} 
int main()
{
    setlocale(LC_ALL, ".UTF-8");
    task1();
    task2();
    return 0;
}
