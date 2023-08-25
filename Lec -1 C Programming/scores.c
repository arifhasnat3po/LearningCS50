#include <cs50.c>
#include <stdio.h>

int main(void) {
    int n = get_int("How many numbers: ");
    int scores[n];
    for (int i = 0; i < n; i++) {
        scores[i] = get_int("Score: ");
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += scores[i];
    }

    printf("Average Score: %.2f\n", (float)sum / (float)n);
}