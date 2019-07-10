#include <stdio.h>

int main () {
    int x;
    int y;
    int i;
    scanf("%d %d", &x, &y);

    for (i=1 ; i<=y ; i=i+1) {
        printf("%d * %d = %d\n", x, i, x*i);  
    }
    return 0;
    
}