#include <stdio.h>

int main()
{
    int number;
    printf("Input number");
    scanf("%d", &number);

    if (number%2==0) {
        printf("even number");
    }
    else {
        printf("odd number");
    }
return 0;
}