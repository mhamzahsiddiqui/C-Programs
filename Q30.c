#include<stdio.h>
#include<conio.h>
void main()
{
	int n1=0,n2=1,n3,i,n; 
	printf("Enter Limit");
    scanf("%d",&n);   
    printf("%d %d",n1,n2);
 for(i=3;i<=n;i++)    
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }    
	getch();	
}
