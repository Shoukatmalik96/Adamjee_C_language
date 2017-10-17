#include<stdio.h>
#include<conio.h>
main(){
int a,b,c,op;
/*a= 5;
b= 10;
op='&';
*/

printf("\n\t\t\t MINI CALCULATOR");
printf("\n-------------------------------------------------");
printf("\nEnter  1st Number :");
scanf("%d",&a);
printf("\nEnter  2nd Number :");
scanf("%d",&b);
printf("\n-------------------------------------------------");
printf("\nPress 1 for Addition");
printf("\nPress 2 for Subtraction");
printf("\nPress 3 for Multiplication");
printf("\nPress 4 for Division");
printf("\n-------------------------------------------------");
printf("\n\t\tEnter Your Choice :");
scanf("%d",&op);
switch(op)
{
		
	
	
			case 1:
			{
			  c=a+b;
			  printf("\n The Addition of %d and %d is %d",a,b,c);
			  break;	
			}
			case 2:
			{
			  c=a-b;
			  printf("\n The Subtraction of %d and %d is %d",a,b,c);
			  break;	
			}
			 case 3:
			{
			  c=a*b;
			  printf("\n The Multiplication of %d and %d is %d",a,b,c);
			  break;	
			} 	
			case 4:
			{
			  c=a/b;
			  printf("\n The Division of %d and %d is %d",a,b,c);
			  break;	
			}	
			default:
			 printf("\n Wrong Input !");	
				
				
}//end of switch	
	
	
	
	
	
	
getch();	
}
