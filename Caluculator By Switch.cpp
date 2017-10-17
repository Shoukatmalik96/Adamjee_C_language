#include<stdio.h>
#include<conio.h>
main(){
	
int num1,num2,result,op;
num1= 10;
num2= 20;
//Calculator  by using switch
printf("\n Press 1 for Addiiton :");
printf("\n Pres  2 for Subtraction :");
printf("\n Press 3 for Multiplication :");
printf("\n press 4 for Division       :");
printf("\n Enter you Choice :");
scanf("%d",&op);


switch(op){
	
 case 1:
 result =num1+num2;
 printf("\n The sum of %d and %d = %d",num1,num2,result);
 break;	
 
 case 2:
 result =num1-num2;
 printf("\n The subtraction of %d and %d = %d",num1,num2,result);
 break;	
 case 3:
result =num1*num2;	
 printf("\n The Multiplication of %d and %d = %d",num1,num2,result);
 break;
 	
 case 4:
 result =num1/num2;
 printf("\n The Division of %d and %d = %d",num1,num2,result);
 break;	
 default:
 printf("Wrong Input !");	
	
}



}


