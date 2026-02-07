// number comparison //
/*Write a C program that takes three numbers from the user and determines:
The largest number. The smallest number.*/

 // number comparison 2.1 //
 
#include <stdio.h>
#include<conio.h>
  
  int main ()
  {
      int a, b , c;
      
     printf ("\n chose your number a ");
     scanf ("%d",&a);
         
     printf ("\n Chose your number b");
     scanf("%d", &b);
     
     printf ("\n chose your number c");
     scanf ("%d", &c);
     
     // for largest number //
     if (a>b && a>c)
     {
         printf ("\n The largest number is a");
     }
     else if (b>a && b>c)
     {
         printf ("\n The largest numer is b");
         
     }
     else 
     {
         printf("\n The largest number is c");
     }
     
     //for the smallest numer //
     
     if (a<b && a<c)
     {
         printf("\n The smallest number is a");
     }
     else if (b<a && b<c)
      {
          printf ("\n The smallest number is b");
      }
      else
      {
        printf ("\n The smallest numer is c");  
      };
      return 0 ;
  }
             
