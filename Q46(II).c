#include<stdio.h>
long int sum(long int n)
    {
        if(n!=0)
        return (n%10+sum(n/10));
        else
        return 0;
    }
main()
	{
		long int n,c;
		printf("Enter a Number");
		scanf("%d",&n);
		c=sum(n);
		printf("Sum of Digits= %d",c);
	}       
