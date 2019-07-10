#include <stdio.h>

int main() {
    int a;
    int b;
    int sum=0;
    scanf("%d %d", &a, &b);

    for (a=a+1 ; a<b ; a=a+1) {
        sum = sum + a;
    }
        
    printf("%d", sum);

return 0;
}