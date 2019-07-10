#include <stdio.h>

int main() {
        int i=1;
        while (i<=40) {
            if (i%3 != 0) {
                    printf("%d ", i);
            }
            i = i+1;
        }
        return 0;
}