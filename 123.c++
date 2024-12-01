#include <stdio.h>

int main() {
    int a, b, c = 0;
    while (a < 10) {
           
        if(a < 10) {
            a++;
            continue;
        }
        printf("%d\n", a);
    }
}