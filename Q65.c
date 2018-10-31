#include<stdio.h>
#include<conio.h>
struct student
{
	int rn,y;
	char n[50],dept[50],cr[50];
};
void main()
{
	struct student s[50];
	int i,yr;
	for(i=1;i<=50;i++)
	{
		printf("\nEnter Roll Number");
		scanf("%d",&s[i].rn);
		printf("\nEnter Joining Year");
		scanf("%d",&s[i].y);
		printf("\nEnter Name");
		scanf("%[^\n\t]s",&s[i].n);
        printf("\nEnter Dapartment");
		scanf("%[^\n\t]s",&s[i].dept);
		printf("\nEnter Course");
		scanf("%[^\n\t]s",&s[i].cr);
	}
	printf("Enter Year of joining to print student names");
	scanf("%d",&yr);
	for(i=1;i<=50;i++)
	{
		if(s[i].y==yr)
		printf("\n%d",s[i].rn);
		printf("\n%s",s[i].n);
	}
	getch();
}
