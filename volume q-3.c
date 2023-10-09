#include<stdio.h>
enum week
{
	sun,mon,tue,wed,thu,fri,sat
};
main()
{
	char n;
	printf("enter any value of n:");
	scanf("%c",&n);
    switch(n)
    {
    	case'S':
    		printf("%d",sun);
    		break;
    	case'M':
    		printf("%d",mon);
    		break;
		case't':
    		printf("%d",tue);
    		break;
		case'W':
    		printf("%d",wed);
    		break;
		case'T':
    		printf("%d",thu);
    		break;
	    case'F':
    		printf("%d",fri);
    		break;
    	case's':
    		printf("%d",sat);
    		break;
    }
}