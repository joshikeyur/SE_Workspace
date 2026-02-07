// temprature calculator //
// Lab Ex 3.1 // 
#include <stdio.h>
#include <conio.h>
int main()
{
    
 int temp ; 
 
  printf ("temprature is in Celsius");
  printf("\n Enter today's temprature \n");
  scanf ("\n %d", &temp);
  
   if(temp<0) // temprature is in Celsius //
   {
       printf ("\n Freezing weather");
   }
   else if (temp>=0 && temp<=10)
   {
       printf ("\n very cold weather");
   }
   else if (temp>10 && temp<=20)
   {
       printf("\n cold weather");
   }
   else if (temp>20 && temp<=30)
   {
       printf ("\n Normal temprature");
   }
   else if (temp>30 && temp <40)
   {
       printf ("\n Weather is hot");
   }
   else if (temp>=40)
   {
       printf ("\n Its Too HOT");
   };
   return 0;
   
}  
   
   
   
   
   
   
   