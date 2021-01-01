#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5];
	 clrscr();
	printf("Enter the 1st value in array a[0]=");
	scanf("%d",&a[0]);

	printf(" Enter the 2nd value in array a[1]=");
	scanf("%d",&a[1]);

	printf("Enter the 3rd value in array a[2]=");
	scanf("%d",&a[2]);

	printf("Enter the 4th value in array a[3]=");
	scanf("%d",&a[3]);

	printf("Enter the 5th value in array a[4]=");
	scanf("%d",&a[4]);
	printf("******output******");
	printf("\n1st value a[0]=%d",a[0]);
	printf("\n2nd value a[1]=%d",a[1]);
	printf("\n3rd value a[2]=%d",a[2]);
	printf("\n4th value a[3]=%d",a[3]);
	printf("\n5th value a[4]=%d",a[4]);

	getch();

	}
