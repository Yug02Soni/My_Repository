#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2, res;
    char use_inp;
    printf("Enter two nos.");
    scanf("%d %d", &n1, &n2);
    printf("Enter choise + - * /");
    scanf(" %c", &use_inp);
    switch (use_inp)
    {
    case '+':
        res = n1 + n2;
        printf("Result is %d", res);
        break;
    case '-':
        res = n1 - n2;
        printf("Result is %d", res);
        break;
    case '*':
        res = n1 * n2;
        printf("Result is %d", res);
        break;
    case '/':
        res = n1 / n2;
        printf("Result is %d", res);
        break;
    default:
        printf("Invalid operator");
        break;
    }
    return 0;
}
