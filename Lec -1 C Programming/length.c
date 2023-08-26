#include <stdio.h>

int main(void) {
    char name[100];  // Assuming a maximum name length of 99 characters
    printf("Name: ");
    scanf("%99s", name);

    int i = 0;
    while (name[i] != '\0') {
        printf("%c", name[i]);
        i++;
    }
    printf("\n%i\n", i);

    return 0;
}
