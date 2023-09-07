#include <stdlib.h>
#include <stdio.h>
#include <cs50.c> 
typedef struct
{
    string name;
    string number;
    
} person;
int main(void){

    person people[2];
    people[0].name = "John";
    people[0].number = "12345";
    people[1].name = "Jane";
    people[1].number = "54321";
    for (int i = 0; i < 2; i++){
        if (strcmp(people[i].name, "Jane") == 0)
    {

            printf("Found :%s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}