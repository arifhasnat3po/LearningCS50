#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
#include <string.h>
#include<cs50.h>

int main (void){

    char *s = get_string("S :");

    char *t = malloc(strlen(s)+1);
    if (t == NULL){
        return 1;
    }

    strcpy(t, s);
    if (strlen(t)>0)
    {
    t[0] = toupper(t[0]);
    }
    printf("S : %s\n",s);
    printf("T :%s\n",t);

    free(t);
    return 0;
}
