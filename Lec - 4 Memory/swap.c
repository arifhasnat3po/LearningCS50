#include <stdio.h>
void swap (int *a, int *b);
int main (void){


    int x = 10;
    int y = 20;

    printf("print x is : %i\n, print y is : %i\n",x, y);

    swap (&x, &y); // address of the variable

    printf("print x is : %i\n, print y is : %i\n",x, y);


}
void swap (int *a, int *b) //pointers of the variable
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }