#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    string s = get_string("Before: ");
    printf("After: ");

    int n = strlen(s);  // Calculate the length of the string only once

    for (int i = 0; i < n; i++) {
       printf("%c", toupper(s[i]));
    }

    printf("\n");

    return 0;
}