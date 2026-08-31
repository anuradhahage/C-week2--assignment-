#include <stdio.h>

int main() {
    int n, i, num;
    int positive = 0, negative = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);

        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
    }

    printf("Positive numbers = %d\n", positive);
    printf("Negative numbers = %d", negative);

    return 0;
}
