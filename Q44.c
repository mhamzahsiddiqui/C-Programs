#include<stdio.h>
int factorial(int n)
    {
        if(n==0)
        return 1;
        else 
        return(n*factorial(n-1));
    }
main()
{
	int n1;
	printf("Enter a Number");
	scanf("%d",&n1);
	printf("Factorial of %d = %d",n1,(factorial(n1)));
}
