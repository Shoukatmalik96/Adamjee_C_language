#include<stdio.h>
#include<conio.h>
main(){
	
	//int temps[]={ 20,30,40,50,60};
	int i,j,temps[5];
	
	for(i=0;i<4;i++)
	{
	 printf("\n Enter Temprature for day %d:",i+1);
	 scanf("%d",&temps[i]);	
		
	}
	printf("\n\t\t The temprature of five days are ");
	printf("\n-------------------------------------------------");
	for(j= 0; j<4;j++)
	{
		printf("\n The Temprature for day %d is %d",j+1,temps[j]);	
	}
	
}
