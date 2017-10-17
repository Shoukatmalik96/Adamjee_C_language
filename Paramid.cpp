#include<stdio.h>
#include<conio.h>
main(){
	
	int i,j,k,l=7;
	// Outermost loop
  for(i=4;i>=1;i--)
  {
     //Space Counter  
    for(j=4;j>i;j--)
    {
      printf(" ");
    }
    // Stareic printing
    for(k=1;k<=l;k++)
    {
        printf("*");
    }
    printf("\n"); 
    l=l-2;
}
	
	
}
