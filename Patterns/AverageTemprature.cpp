#include<stdio.h>
#include<conio.h>
main(){
	int i,sum = 0;
	float temp[7] ;
	
	//int array[5]={5,8,2,10,9};
	
	printf("\n\t\t\tEnter the Temprature of 7 Days");
	
	for(i = 0; i<7;i++){
		printf("\n Enter the Temprature for day %d  :",i+1);
		scanf("%f",&temp[i]);
	}
	
	for(i = 0; i<7;i++){
		
		sum += temp[i];
	}
	int Avg = sum/7;
	printf("\n The Sum of Array is :%d",sum);
	printf("\n The Average is :%d",Avg);
    /*
    printf("\n Enter value to Search :");
	scanf("%d",&item);
	
	for(i=0;i<5;i++){
		
		if(array[i]==item){
			found = 1;
			break ;
		}
	}	
	if(found == 1){
		printf("The value %d is found in array at index %d",item,i);
	}
	else{
		printf("\n The value %d is not found in Array !",item);
	}
	
	*/
	
	
	
	
}
