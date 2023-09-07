#include <stdio.h>
#include <cs50.c>
int main(void)
{
    long int x = get_long("x : ");
    long int y = get_long("y : ");

    printf("%li\n", x + y);
    return 0;
}
    