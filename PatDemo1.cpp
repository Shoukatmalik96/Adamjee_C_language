#include<stdio.h>
#include<conio.h>
main(){
	
int i,j,row;

 printf("\n Enter no of Row :");
 scanf("%d",&row);
   for (i=1;i<=row;i++)
   {
	   for(j=row;j>=i;j--)
	   {
		 printf("*");
	   }
	printf("\n");
   }
   for (i=4;i<=row;i++)
   {
	   for(j=row;j<=i;j++)
	   {
		 printf("*");
	   }
	printf("\n");
   }		
 
}
