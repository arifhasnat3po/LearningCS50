#include<stdio.h>
#include <cs50.c>
int main (void)
{
  char c = get_char("Do you agree ? ");
  
  if (c == 'y' || c == 'Y')
  {
    printf("You agreed!\n");
  }
  else if( c == 'n' || c == 'N')
  {
    printf("You disagreed!\n");
  }
  return 0;


}