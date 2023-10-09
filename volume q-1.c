#include<stdio.h>

struct Distance{
	int inch;
	int foot;
};

main()
{
	struct Distance d1,d2,d3;
	printf("Enter Foot 1= ");
	scanf("%d",&d1.foot);
	printf("Enter Inch 1= ");
	scanf("%d",&d1.inch);
	printf("Enter Foot 2= ");
	scanf("%d",&d2.foot);
	printf("Enter Inch 2= ");
	scanf("%d",&d2.inch);
	
	d3.foot = d1.foot + d2.foot;
	d3.inch = d1.inch + d2.inch;
	
	while(d3.inch>=12)
	{
		d3.foot++;
		d3.inch-=12;
	}
	
	printf("Total Foot = %d\n",d3.foot);
	printf("Total Inch = %d\n",d3.inch);
}