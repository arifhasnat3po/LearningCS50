#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cs50.c>

int main(void){
    string name [] = {"Test1", "Arif", "Test3", "Test4", "Test5","Test6","Test7"};
    for (int i = 0; i<7; i++)
    {
        if(name [i] =="Arif"){

            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}