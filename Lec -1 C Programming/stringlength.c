#include <stdio.h>
#include <string.h>

int main (void){

char name[1000];
printf("Type the name: ");
scanf("%s",name);

   int length = strlen(name);
   printf("length : %i\n", length);

}