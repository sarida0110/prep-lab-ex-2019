#include <stdio.h>

int main()
{
    char a;
    float b, c;
    printf("Input b: ");
    scanf("%f", &b);
    printf("Input c: ");
    scanf("%f", &c);
    printf("Input a: ");
    scanf(" %c", &a);

    if(a == '+') {
        printf("Result = %f", b+c);
    }
    else if(a == '-') {
        printf("Result = %f", b-c);
    }
    else if(a == '*') {
        printf("Result = %f", b*c);
    }
     else if(a == '/') {
        printf("Result = %f", b/c);
    }
return 0;
}