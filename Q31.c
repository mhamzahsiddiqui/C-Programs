#include<stdio.h>
#include<conio.h>
void main()
{
	int n1=0,n2=1,n3,i,n,s=1; 
	printf("Enter Limit");
    scanf("%d",&n);   
 for(i=3;i<=n;i++)    
 {    
  n3=n1+n2;       
  n1=n2;    
  n2=n3;  
  s=s+n3;  
 }    
 printf("Sum= %d",s);
	getch();	
}
