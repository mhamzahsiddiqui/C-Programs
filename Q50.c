#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],b[5];
	int i,n=4;
	printf("Enter elements of Array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		b[n--]=a[i];
	}
	printf("Elements of Array in Reverse Order");
	for(i=0;i<=4;i++)
	printf("\n%d",b[i]);
}
