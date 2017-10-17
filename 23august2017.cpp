#include<stdio.h>
#include<conio.h>
int add(int x,int y);// prototype of a function
main(){
int x,y,result;
printf("\n Hello");	
	
result =add(5,5);// Caller of a add function
printf("\n The Addition of %d and %d is %d",x,y,result);	
	
getch();	
}
int add(int x,int y)//function definition
{
	
	
return x+y;	
}
