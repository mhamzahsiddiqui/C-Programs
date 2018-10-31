#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],b[5],c[5];
	int i;
	printf("Enter elements of Array 'A' & 'B'");
	for(i=0;i<5;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		c[i]=b[i]+a[i];
	}
	printf("Sum of Corresponding Elements of Array =");
	for(i=0;i<5;i++)
	printf("%d ",c[i]);
}
