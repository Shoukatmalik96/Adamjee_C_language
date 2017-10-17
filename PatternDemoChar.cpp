#include<stdio.h>
#include<conio.h>
main(){
	
int i,j,row;
   printf("\n Enter no of Row :");
   scanf("%d",&row);
   for (i=65;i<=row;i++)
   {
	   for(j=i;j<=row;j++)
	   {
		 printf("%c",j);
	   }
	printf("\n");
   }	
 
}
