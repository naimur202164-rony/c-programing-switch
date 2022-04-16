#include <stdio.h>

int main()
{
    //    Learning switch
    int num1, num2;
    int result;
    char op;
    scanf("%d %c %d", &num1, &op, &num2);
    switch (op)
    {

    case '+':
        printf("%d", num1 + num2);
        break;
    case '-':
        printf("%d", num1 - num2);
        break;
    case '*':
        printf("%d", num1 * num2);
        break;
    case '/':
        printf("%d", num1 / num2);
        break;
    }
    printf("%d", result);
}