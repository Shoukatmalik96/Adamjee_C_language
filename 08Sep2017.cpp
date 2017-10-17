#include<stdio.h>
#include<conio.h>
// Defining prototype
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);
int x,y,k,a,b,c; // global initialization of variables
main(){
	

// Calling functions
add(4, 4);
sub(2, 1);
mul(8, 3);
div(4,2);

//printing Results
printf("\n\t\t\tCalculator! ");	
printf("\n The Addition is       %d",k);
printf("\n The Subtraction is    %d",a);
printf("\n The Multiplication is %d",b);
printf("\n The Division is       %d",c);

		
	
}

 int add(int x,int y)
{   k=x+y;
	return k;
}
int sub(int x, int y)
{
	a=x-y;
	return a;
	
}
int mul(int x, int y){
	b=x*y;
	return b;
	
}
int div(int x, int y){
	c=x/y;
	return c;
	
}
