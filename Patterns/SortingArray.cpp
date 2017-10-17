#include<stdio.h>
#include<conio.h>
main(){

int num,i,found = 0,array[5];

for(i=0;i<5;i++){
	printf("\n Enter value %d:",i+1);
	scanf("%d",&array[i]);
	
}	
	
	printf("\n Enter Value to Search in Array :");
	scanf("%d",&num);
	
	for(i=0;i<5;i++)
	{
		
		if(num==array[i])
		{
			found = 1;
			break ;
		}
	}
	if (found == 1){
		printf("\n The value %d is found in array at %d index: ",num,i);
		
	}
	 else
	{
		printf("\n The value %d is not found in array",num);
	}
	
	
}
