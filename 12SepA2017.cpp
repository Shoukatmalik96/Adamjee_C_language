#include<stdio.h>
#include<conio.h>
int a,b,temp;
int swapValues();
main(){
	
//int a,b,temp;
//a=5;
//b=15;

swapValues();
getch();	
}// End of main

swapValues()
{
	 
printf("\n Enter First Value :");
scanf("%d",&a);
printf("\n Enter Second Value :");
scanf("%d",&b);	
printf("\n\t\tSWAPPING VALUES");
printf("\n------------------------------------------");
printf("\n values before swapping is (%d ,%d)",a,b);
temp=a;
a=b;
b=temp;
printf("\n values After swapping is (%d ,%d)",a,b);	
	
}
