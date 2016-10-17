#include<stdio.h>

int main () 
{
 int spaces, rows, stars, line, i, j, k;

 printf("How tall is your pyramid? ");
 scanf("%i",&rows);

 line = rows * 2 - 1;

 for (i = 0; i < rows; i++)
 {
  stars = i * 2 + 1;
  spaces = (line - stars)/2;
  for (j = 0; j < spaces; j++)
  {
   printf(" ");
  }
  for (k = 0; k < stars; k++)
  {
   printf("*"); 
  }
  printf("\n");
 }
 return 0;
}
