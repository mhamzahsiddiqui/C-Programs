#include<stdio.h>
int area(int l,int b)
{
	int ar;
	ar=l*b;
	return ar;
}
main()
{
	int a,b,c;
	printf("Enter Sides");
	scanf("%d%d",&a,&b);
	c=area(a,b);
	printf("Area= %d",c);
}
