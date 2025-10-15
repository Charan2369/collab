#include<stdio.h>
int main()
{
	int year;
	printf("enter year");
	scanf("%d",&year);
	if (year%4==0)
	{
		printf("the year is a leapyear");
	}
	else
	{
		printf("the year is not a leapyear");
        
        } 
        return 0;
}	
