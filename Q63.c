#include<stdio.h>
#include<conio.h>
#include<string.h>
void length();
void concat();
void cmpare();
void copy();
int  main()
{
	length();
	concat();
	cmpare();
	copy();
	return 0;
}
//#include<string.h>
void length()
{
	char string[30];
	printf("Enter a String");
	scanf("%[^\n\t]s",&string);
//char string[30] = "Mumbai";
printf("\nLength = %d",strlen(string));
}
//The above code displays 5, because Mumbai consists of 5 characters. Note: it does not count null character.
//#include<string.h>
void concat()
{
char string1[20] = "Anti";
char string2[20] = "Particle";
strcat(string1,string2);
printf("\n%s",string1);
}
//display AntiParticle
//#include<string.h>
void cmpare()
{
char string1[30] = "Nepal";
char string2[30] = "Srilanka";
if(strcmp(string1,string2)==0)
{
printf("\nThey are equal");
}
else
{
printf("\nThey are not equal"); //this is executed
}
}

//#include<string.h>
void copy()
{
char source[10] = "Hello";
char destination[10]; //uninitialized
strcpy(destination,source);
printf("\n%s",destination); //prints Hello
}

