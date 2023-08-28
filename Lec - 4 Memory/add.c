#include <stdio.h>
#include <stdlib.h>
#include <cs50.c>

int main(void)
{
    string s = "Hi!";
    printf("%c\n",*s);
    printf("%c\n",*(s+1));
    printf("%c\n",s[2]);
    printf("%p\n",&s[3]);

}