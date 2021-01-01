#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i;
	clrscr();

	for(i=0;i<=5;i++)
	{
	printf("Value of i=%d",i);
	printf("Enter any number");
	scanf("%d",&a[i]);
	}

	for(i=0;i<=5;i++)
	{
	printf("\nNumber Entered Is : %d",a[i]);
	}
	getch();
}
