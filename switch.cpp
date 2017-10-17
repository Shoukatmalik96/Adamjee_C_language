#include<stdio.h>
#include<conio.h>
main(){

//calcuator
int num1,num2,result, option;
//num1= 2;
//num2=10;
printf("\n Enter value for Num 1 :");
scanf("%d",&num1);
printf("\n Enter value for Num 2 :");
scanf("%d",&num2);

printf("\n\t\t CALCULATOR");
printf("\n-----------------------------------------");
printf("\n Press 1 for Additon ");
printf("\n Press 2 for Subtraction ");
printf("\n Press 3 for Multipliction ");
printf("\n Press 4 for Division ");
printf("\n Enter your Choice:");
scanf("%d",&option);
switch(option){
	
	
	case 1:
		result=num1+num2;
		printf("\n The addition of %d and %d = %d",num1,num2,result);
		break;
	case 2:
		result=num1-num2;
		printf("\n The Subtraction of %d and %d = %d",num1,num2,result);
		break;
	case 3:
		result=num1*num2;
		printf("\n The Multipliction of %d and %d = %d",num1,num2,result);
		break;
	case 4:
		result=num1/num2;
		printf("\n The Division of %d and %d = %d",num1,num2,result);
		break;
default:
		printf("\n Wrong Input !");
	
	
	
	
}






}




