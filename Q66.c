#include<stdio.h>
#include<conio.h>
struct TRAIN_INFO
{
	struct time t1,t2;
	int nu;
	char nm[50],sst[50],est[50];
	t1.hr; 
	t1.mn; 
	t1.sc;
	t2.hr; 
	t2.mn; 
	t2.sc;
};
struct time
{
	int hr,mn,sc;
};
void main()
{
	struct TRAIN_INFO t[50];
	char dst[50];
	for(i=1;i<=50;i++)
	{
		printf("\nEnter Train Number");
		scanf("%d",&t[i].nu);
		printf("\nEnter Train Name");
		scanf("%[^\n\t]s",&t[i].nm);
		printf("\nEnter Departure Time");
		scanf("%d%d%d",&t[i].t1.hr,&t[i].t1.mn,&t[i].t1.sc);
		printf("\nEnterArrival Time");
		scanf("%d%d%d",&t[i].t2.hr,&t[i].t2.mn,&t[i].t2.sc);
		printf("\nEnter Start Station");
		scanf("%[^\n\t]s",&t[i].sst);
		printf("\nEnter End Station");
		scanf("%[^\n\t]s",&t[i].est);
	}
	printf("Enter Departure Station")
	scanf("%[^\n\t]s",&dst);
	for(i=1;i<=50;i++)
	{
		/*for (i=0;i<50-1;i++)
   {  
 	   for (j=0;j<50-i-1;j++) 
        {
	    	if (t[j].nu>t[j+1].nu)
            {
            	tm=t[j].nu;
    			t[j].nu=t[j+1].nu;
    			t[j+1].nu=tm;
    			
    			stm=t[j].nm;
    			t[j].nm=t[j+1].nm;
    			t[j+1].nm=stm;
    			
    			sstm=t[j].sst;
    			t[j].nu=t[j+1].sst;
    			t[j+1].sst=tm;
    			
    			etm=t[j].est;
    			t[j].nu=t[j+1].est;
    			t[j+1].est=tm;
    			
    			atm=t[j].nu;
    			t[j].nu=t[j+1].nu;
    			t[j+1].nu=atm;
			}
		}
	}*/
}
