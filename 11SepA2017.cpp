#include<stdio.h>
#include<conio.h>
int factorial(int x);
int facto=1,i,a,res;// Global initialization
main(){
	
// calling factoria method/fuction
a=5;
res=factorial(a);
printf("\n The factorial of %d is %d",a,res);		
}
int factorial(int x)
{
	for( i=a;i>=1;i--)
	{
		facto=facto*i;
	}
  return facto;
}
