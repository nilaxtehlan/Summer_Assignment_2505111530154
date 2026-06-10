#include <stdio.h>

int main() {
    int start, end;

    printf("Enter range: ");
    scanf("%d%d", &start, &end);

    for(int i = start; i <= end; i++) {
        int temp = i, sum = 0, rem;

        while(temp > 0) {
            rem = temp % 10;
            sum += rem * rem * rem;
            temp /= 10;
        }

        if(sum == i)
            printf("%d ", i);
    }

    return 0;
}