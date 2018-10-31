#include<stdio.h>
#include<conio.h>
void main()
{
   int i, j,t,a[10];
   printf("Fill the array (10 Elements)");
   for(i=0;i<10;i++)
   {
   	scanf("%d",&a[i]);
   }
   for (i=0;i<10-1;i++)
   {  
 	   for (j=0;j<10-i-1;j++) 
        {
	    	if (a[j]>a[j+1])
            {
            	t=a[j];
    			a[j]=a[j+1];
    			a[j+1]=t;
			}
		}
	}
	printf("\nSorted Array:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
}
