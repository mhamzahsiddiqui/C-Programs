#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,d,a[10];
	printf("Fill the array '10 elements'");
	for(i=0;i<10;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("Enter element to be searched");
	scanf("%d",&n);
	for(j=0;j<10;j++)
	{
		if(a[j]==n)
		{
		printf("Element Present at %d position from left",(j+1));
		break;
		}
	}
	if(j==10)
	printf("Element not present");
	getch();
}
