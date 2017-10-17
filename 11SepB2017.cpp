#include<stdio.h>
#include<conio.h>
int NumberLoop(int x,int y);//function  prototype
int i,a,b;// Global initialization
main(){
//a= 1;//Strat loop
//b=15;//end of loop
printf("\n Enter Number to Start loop :");
scanf("%d",&a);
printf("\n Enter Number to End loop :");
scanf("%d",&b);
NumberLoop(a,b);
NumberLoop(a,b);
NumberLoop(a,b);
NumberLoop(a,b);
NumberLoop(a,b);
NumberLoop(a,b);
NumberLoop(a,b);
}
NumberLoop(int x,int y)//function body
{
	for(i=a;i<=b;i++){
	printf(" %d",i);	
	}
	
}

