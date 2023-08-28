#include <stdio.h>
#include <stdlib.h>
#include <cs50.c>

int main(void)
{

    string s = "Hi!";
    char c = s[0];
    char *p = &c;
    printf("%s\n",s);
    printf("%p\n", p);

}