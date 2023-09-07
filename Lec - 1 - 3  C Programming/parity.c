#include <stdio.h>
#include <cs50.c>

int main (void)

{
    int n = get_int("What is the name of this?\n ");
    
    if( n % 2 == 0 )
 { 
    printf("This is an even number!!!");

    }
    
else{
    printf("This is an odd number!!!");
}
    return 0;
}