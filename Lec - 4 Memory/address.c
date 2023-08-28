#include <stdio.h>
#include <stdlib.h>
#include <cs50.c>

int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%i\n", n);
    printf("%p\n", p);
    printf("%i\n", *p);
    
}