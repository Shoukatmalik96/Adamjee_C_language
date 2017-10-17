#include<stdio.h>
#include<conio.h>
main(){
	
int i,n,s,e;
printf("\n\t\t TABLE");
printf("\n Enter the Number to Print its Table :");
scanf("%d",&n);
printf("\n Enter the Number to Start Table :");
scanf("%d",&s);
printf("\n Enter the Number to End Table : ");
scanf("%d",&e);

for(i= s; i<=e;i++){

   printf("\n %d  X  %d = %d",n,i,n*i);

}

}
