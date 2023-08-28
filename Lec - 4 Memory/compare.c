#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main (void){


 string s = get_string("s : ");
 string t = get_string("t : ");

printf("%p\n", s);
printf("%p\n", t);

 if (strcmp(s, t) == 0){

 printf("Same \n");
 }
 else{

 printf("Different \n");
 }


}