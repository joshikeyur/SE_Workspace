
// Grade calculator // 

/*Marks > 90: Grade A
Marks > 75 and <= 90: Grade B
Marks > 50 and <= 75: Grade C
Marks <= 50: Grade D*/

#include <stdio.h>
#include <conio.h>
 int main ()
 {
   int marks ;
   
   printf("\n Enter your marks ");
   scanf ("%d", &marks);
    
    if (marks > 90)
    {
        printf ("\n congratulations Grade : A"); 
    }
    else if (marks>75 && marks<=90)
     {
         printf ("\n congratulations Grade B");
     }
     else if ( marks >50 &&  marks <=75 )
     {
         printf ("\n congratulations Grade C");
     }
     else if ( marks<= 50)
     {
         printf ("\n congratulations Grade D");
     };
   
         
     return 0 ; 

 }
