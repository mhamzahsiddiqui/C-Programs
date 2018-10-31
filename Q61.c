#include<stdio.h>
#include<string.h>
 void main()
{
   char n[100],w[100];
   printf("Enter a Word");
   scanf(" %[^\t\n]s",&n);
   //w=strrev(n);
   
   printf("String before strrev( ) : %s\n",n);
 
   printf("String after strrev( )  : %s",strrev(n));
   getch();
}
