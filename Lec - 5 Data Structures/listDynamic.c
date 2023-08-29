#include <stdio.h>
#include <stdlib.h>

int main (void){
    int *list = malloc (3 * sizeof (int));

    if(list == NULL){
        return 1;
        }

        list[0] = 1;
        list[1] = 2;
        list[2] = 3;

        //Time passes

        int *temp = malloc(4*sizeof(int));
        if (temp == NULL){
            return 1;
            free(list);
        }
         


        for (int i = 0; i <3; i++){

            temp[i] = list[i];

        }
            temp [3] = 4;

            free(list);

            list = temp;

            for(int i=0; i<4; i++){
                printf("%i\n", list[i]);
            }

    

     return 0;
     free(list);

}