#include <stdio.h>
#include <float.h>

int main() {
    int n;
    printf("Hello, mate! Let's get down to work with statistics.\n");
    printf("How many numbers are you going to input? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Do you not want to work, mate? OK.  See you around?\n");
        return 0;
    }

    double numbers[n];
    double min = DBL_MAX;
    double max = DBL_MIN;
    int cellMax = -1;
    int cellMin = -1;
    double sum = 0;
    double average;

    for (int i = 0; i < n; i++) {
        printf("Give me number %d: ", i + 1);
        scanf("%lf", &numbers[i]);
        if (numbers[i] > max) {
            max = numbers[i];
            cellMax = i;
        }
        if (numbers[i] < min) {
            min = numbers[i];
            cellMin = i;
        }
        sum += numbers[i];
    }
    average = sum / (double) n;

    printf("\nHere are the statistics, mate:\n\n");
    printf("* The sum of the given numbers is: %lf\n", sum);
    printf("* The average of the given numbers is: %lf\n", average);
    printf("* The smallest value is %lf and it is stored in cell #%d\n", min, cellMin);
    printf("* The biggest value is %lf and it is stored in cell #%d\n", min, cellMin);

    printf("\nSee you around, mate!\n");

    return 0;
}