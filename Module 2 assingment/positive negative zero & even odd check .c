// extra lab exercise 2.1 , 2.2 , 2.3 // 
// Whether the number is even or odd. Whether the numberis positive, negative, orzero.//
// Whether the number is a multiple of both 3 and 5 //
#include <stdio.h>
#include <conio.h>
 int main ()
 {
     int num1 ;
     
      printf ("Enter your Number ");
      scanf ("%d", &num1);
      
      if(num1 %2 == 0)
      {
          printf ("the number is Even");
      }
      else 
      {
          printf ("The number is Odd");
          
      }
      
       
       // whether the number is positive nagative or 0 // 
       printf ("\n whether the number is positive nagative or 0 ");
       
       int num2;
       
       printf ("Enter your number ");
       scanf ("%d", &num2);
       
        if (num2>0)
        {
            printf ("the number is positive");
        }
        else if (num2<0)
        {
            printf ("The number is Nagative");
        }
      else 
      {
          printf("The Number is 0");
          
      }
      
      // Whether the number is a multiple of both 3 and 5 //
      printf ("\n  Whether the number is a multiple of both 3 and 5 ");
      
      int num3 ; 
      printf ("\n ENter your number");
      scanf ("%d", &num3);
      
       if (num3 % 3 == 0 && num3 % 5 == 0)
       {
           printf ("\n The number is multiply by both 3 & 5");
       }
       else 
       {
          printf ("\n The number is NOT multiply by both 3 & 5");
           
       }
       
      return 0;
      
      
 }
