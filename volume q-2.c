#include<stdio.h>

struct Marks 
	{
		int roll_no;
   		char name[30];
    	float chem_marks, math_marks, phy_marks;
	};

int main() 
	{
		struct Marks marks[5];
    	int i;
    
    for(i=0; i<5; i++)
	{
        printf("Enter roll no. = ");
        scanf("%d", &marks[i].roll_no);
        printf("Enter name = ");
        scanf("%s",marks[i].name);
        printf("Enter Chemistry marks = ");
        scanf("%f", &marks[i].chem_marks);
        printf("Enter Maths marks = ");
        scanf("%f", &marks[i].math_marks);
        printf("Enter Physics marks = ");
        scanf("%f", &marks[i].phy_marks);
    }
    printf("\n \n \n");
	for(i=0; i<5; i++)
	{
	    float per=(marks[i].chem_marks+marks[i].math_marks+marks[i].phy_marks)*100/300;
	    printf("Percentage = %.2f\n",per);
	}
}
