#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) {
    string s = get_string("Before: ");
    printf("After: ");

    int n = strlen(s);  // Calculate the length of the string only once

    for (int i = 0; i < n; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            printf("%c", s[i] - 32);
        } else {
            printf("%c", s[i]);
        }
    }

    printf("\n");

    return 0;
}