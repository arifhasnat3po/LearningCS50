#include <stdio.h>
#include <cs50.h>
#include <cs50.c>
int main (void){


    int number[] = {7,8,9,5,4,3,0};

    for (int i = 0; i<7; i++)
    {
        if(number [i] ==0){

            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}