#include <stdio.h>

int main()
{
    float income, tax;
    printf("Input income");
    scanf("%f", &income);

    if(income < 15000) {
        tax = income*0.1;
        printf("%f", tax);
    }
    else {
        tax = income*0.15;
        printf("%f", tax);
    }
return 0;
}
