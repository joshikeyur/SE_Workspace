#include <stdio.h>
#include <conio.h>
 int main()
 { // student result full calculator //
    int sub1,sub2,sub3,sub4,sub5 ;
     
    
    printf("\n Enter your marks for sub1 \n");
    scanf ("%d",&sub1);
    
    printf ("\n Enter your marks for sub2 \n ");
    scanf ("%d",&sub2);
     
    printf ("\n Enter your marks for sub3 \n");
    scanf ("%d",&sub3);
    
    printf ("\n Enter your marks for aub4 \n");
    scanf ("%d", &sub4);
    
    printf ("\n Enter your marks for sub5 \n");
    scanf ("%d", &sub5);
    
    // calculations // 
    
    int sum = sub1+sub2+sub3+sub4+sub5 ; 
    // Result in percentage // 
    float result = sum / 5 ; 
    
     printf ("\n This is your result %lf", result);
       
       if (result > 90)
       {
           printf("\n Grade A");
       }   
        else if (result >75 && result <90 )  
        
           printf("\n Grade B");
           
        else if (result <75 && result >50)   
          
           printf ("\n Grade C");
          
         else if  (result <=50 && result >33)
         
           printf ("\n Grade D");
           
            
        else 
       {
            printf ("\n your failed , better luck next time");
       }
           
       
       return 0;
 }