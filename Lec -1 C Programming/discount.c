#include <stdio.h>
#include <cs50.c>
float discount(float price, int percent);
int main (void )
{
    float regular = get_float ("Regular price :  ");
    int percent = get_int ("Percent off :  ");
    float sale = discount(regular, percent);

    printf ("The sale price is : %.2f\n", sale);
 
}
float discount(float price, int percent) 
{
    return price * (100 - percent)/100;


}