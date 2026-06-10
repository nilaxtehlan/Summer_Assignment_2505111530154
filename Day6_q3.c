#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    while(n > 0) {
        count += n % 2;
        n /= 2;
    }

    printf("Set Bits = %d", count);

    return 0;
}