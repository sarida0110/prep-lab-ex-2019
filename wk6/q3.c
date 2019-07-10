#include <stdio.h>
int main()
{
    float base, height, area;
    printf("Input a base; ");
    scanf("%f", &base);
    printf("Input a height: ");
    scanf("%f", &height);

    area = base * height / 2;

    printf("area is %f", area);
    return 0;

}