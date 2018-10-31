 #include <stdio.h>
 #include <conio.h>
 void main()
 {
 	int n,x,i,sum=0;
 	printf("Enter n & x");
 	scanf("%d%d",&n,&x);
 	for(i=1;i<=2*n;i+=2)
 	{
 		sum=-(sum);
 		sum=sum+x*i;
	}
	printf("Sum=%d",sum);
	getch();
 }
