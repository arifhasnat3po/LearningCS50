#include <stdio.h>
#include <cs50.c>
#include <cs50.h>

int main (void)
{
    const int MINE = 34;
    int points = get_int("How much points did you get? ");

    if (points < MINE)
    {
        printf("You get less than me!\n");
    }
    else if (points > MINE)
    {
        printf("You get more than me!\n");
    }
    else 
    {
        printf("You get exactly same as me!\n");
    }
}