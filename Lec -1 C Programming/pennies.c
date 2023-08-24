#include <cs50.c>
#include<math.h>
#include <stdio.h>
int main (void)
{
    float amount = get_float ( "Taka Amount :" );
    int pennies = round(amount * 100);
    printf("Pennies : %i\n", pennies);
}