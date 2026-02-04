#include <stdio.h>
#include <conio.h>

 int main () 
{
int age ;
int Gender ; 
int boy=1 ; 
int girl=2 ;


 printf("enter your Age   ");
 scanf ("%d", &age);
  printf ("Enter your Gender  ");// for boy type 1 for girl type 2//
  scanf ("%d", &Gender);
  
  if (age >= 18 && Gender == 1 )
  {
    printf("\n Your Eligible for votr");
    printf ("\n Your eligible for Drive");
    printf ("\n your not eligible for marry");
  }
  else if (age >= 18 && Gender == 2 )
  {
     printf("\n Your Eligible for votr");
    printf ("\n Your eligible for Drive");
    printf ("\n your eligible for marry");
  }
  else if ( age < 18 && age > 13)
  {
      printf("\n TEENAGER");
      printf ("\n focus on your study");
  }
  else {printf ("\n Child  \n GO and play ");
       
  }
  return 0;
}
