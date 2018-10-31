#include<stdio.h>
int fact(int n)
{
	int f=1,i;
	for(i=1;i<=n;i++)
	{f=f*i;}
	return f;
}
main()
{
	int n1,i,s=0;
	printf("Enter Limit (N)");
	scanf("%d",&n1);
	for(i=1;i<=n1;i++)
	{s=s+fact(i);}
	printf("Sum= %d",s);
}
