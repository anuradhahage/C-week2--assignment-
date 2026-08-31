#include <stdio.h>

float calculateAverage(int marks[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += marks[i];
    }

    return (float)sum / n;
}

int main() {
    int n;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    int marks[n];

    printf("Enter marks:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    printf("Average = %.2f", calculateAverage(marks, n));

    return 0;
}
