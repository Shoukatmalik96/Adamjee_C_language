#include<stdio.h>
#include<conio.h>
main(){

int a,b;
//a= 12;
//b=105;
printf("\n Enter Value 1 :");
scanf("%d",&a);
printf("\n Enter Value 2 :");
scanf("%d",&b);

if(a>b)
   {
	 printf("\n %d is Maximum !",a);
   }
else if( b >a)
	{
       printf("\n %d is Maximum !",b);	
	}
else if(a==b)
{
	printf("\n %d and %d is equal !",a,b);
}

}


