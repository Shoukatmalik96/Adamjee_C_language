#include<stdio.h>
#include<conio.h>
main(){
	
	
	/// defining array 
	
	//int Numbers[5] = { 1,2,3,4,5};
	int Numbers[5],i,j;
	printf("Enter only 5 Numbers:");
	for(j=0;j<5;j++)
	{
		printf("\nEnter Number %d :",j+1);
		scanf("%d",&Numbers[j]);
	}
	// Initialization of array
/*	
	Numbers[0] = 1;
	Numbers[1] = 2;
	Numbers[2] = 3;
	Numbers[3] = 4;
	Numbers[4] = 5;
*/
	
	// Access Index 4 
	/*
	printf("%d",Numbers[0]);
	printf("%d",Numbers[1]);
	printf("%d",Numbers[2]);
	printf("%d",Numbers[3]);
	printf("%d",Numbers[4]);
	*/
	
	for(int i=0;i<5;i++)
	{
		printf("\n%d",Numbers[i]);
	}
	
	
}
