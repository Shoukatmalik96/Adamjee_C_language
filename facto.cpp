#include<stdio.h>
#include<conio.h>
int i,num,fact= 1 ;
int facto(int a);
main(){
	

facto(1);

getch();	
 }
facto (int a)
{
	
	for(num=a;num<=10;num++)
	{

		for(i=num;i>=1;i--)
		{
			fact=fact*i;
		}

    printf("\n Factorial of %d is %d",num,fact);

   }
}
