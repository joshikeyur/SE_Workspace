//Write a C program that accepts two integers from the user and performs
// arithmetic, relational, and logical operations on them. Display the results.//
#include <stdio.h>
#include <conio.h>
int main ()
{
int age;
int Gender ;
int Boy = 1 ; 
int Girl = 2 ;
 printf("Enter your age  ");
 scanf ("%d", &age);
 printf ("Enter your Gemder");
 scanf ("%d" , &Gender);
 if (!(age>0))
 {
     printf ("Error : invalid age");
 }
 else if (Gender<1 || Gender >2){printf ("Error : invalid Gender");}
 
 else if (age >= 18 && Gender == 1)
 {
 printf("\n You are an adult boy");
 printf("\n eligible for drive");
 printf("\n if pass eligible for vote ");
printf ("\n But not for marry");
 }
 else if (age>= 21 &&  Gender == 2)
 {
printf ("\n your an adult Girl");     
printf("\n Eligible for Vote");
printf("\n eligible for drive");
printf("\n if pass eligible for Collage");
printf ("\n Eligible  for marry");
 }
else
{
printf ("Teenager");
}
return 0;
}