#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5];
	int i,min,max;
	printf("Enter elements of Array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];max=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]<min)
		min=a[i];
		if(a[i]>max)
		max=a[i];
	}
	printf("Minimum in Array= %d\nMaximun in Array= %d",min,max);
}
