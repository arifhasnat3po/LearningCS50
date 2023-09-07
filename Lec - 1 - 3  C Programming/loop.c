#include <stdio.h>
#include <cs50.c>
   
// creating user functions 
void meow (int n);
int main (void){

int n = get_int("Enter the value of N : ");
    
    meow( n); // calling the function to print "Meow!"
}
    void meow (int n) // calling the function
     {
    for(int i = 0; i < n ; i++)
    {
        printf("Meow!\n");
    }


    int i = 0;
    while(i <3)
    {
        printf("This is a while loop\n");
        i++;
    }
}
