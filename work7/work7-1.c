#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Input two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("num1: %d", num1);
    }
    else if (num1 < num2) {
        printf("num1: %d", num2);
    }
    else if (num1 == num2) {
        printf("both numbers are equal");
    }

return 0;
}