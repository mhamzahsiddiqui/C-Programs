#include<stdio.h>
int sum(int n)
    {
        if(n==0)
        return 0;
        else 
        return(n+sum(n-1));
    }
main()
{
	int n1;
	printf("Enter a Number");
	scanf("%d",&n1);
	printf("Sum till %d = %d",n1,(sum(n1)));
	getch();
}
