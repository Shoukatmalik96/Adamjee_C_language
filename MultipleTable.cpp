#include<stdio.h>
#include<conio.h>
main(){
int i,j=5;

printf("\n\t\tMULTIPLCATION TABLE FROM 1 TO 20\n");
//printf("\n-----------------------------------------\n");
for(j=1 ;j<=20;j++)	
{
		for(i=1;i<=10;i++)
		{
		  //printf(" %d x %d = %d",j,i,j*i);	
		  printf(" %d",j*i);	
        }
	printf("\n");		
}
 getch();
}
