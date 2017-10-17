#include<stdio.h>
#include<conio.h>
main(){
	
float t1,t2,t3,t4,t5,t6,t7,sum=0,average;

	printf("\n Enter the Temprature of day 1:");
	scanf("%f",&t1);
	printf("\n Enter the Temprature of day 2:");
	scanf("%f",&t2);
	printf("\n Enter the Temprature of day 3:");
	scanf("%f",&t3);
	printf("\n Enter the Temprature of day 4:");
	scanf("%f",&t4);
	printf("\n Enter the Temprature of day 5:");
	scanf("%f",&t5);
	printf("\n Enter the Temprature of day 6:");
	scanf("%f",&t6);
	printf("\n Enter the Temprature of day 7:");
	scanf("%f",&t7);

	sum =t1+t2+t3+t4+t5+t6+t7;
	average=sum/7;
	printf("\n The average Temprature of  Seven Days is %f",average);
	
getch();	
}
