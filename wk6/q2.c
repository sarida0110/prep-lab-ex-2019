#include <stdio.h>

int main() 
{
    float price, discount, discounted_price;
    printf("Input a price; ");
    scanf("%f", &price);
    printf("Input a percent discount: ");
    scanf("%f", &discount);

    discounted_price = price * (100-discount)/100;

    printf("Discounted price is %f",discounted_price);
    return 0;
}	