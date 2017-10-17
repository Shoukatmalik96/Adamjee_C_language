#include<stdio.h>
#include<conio.h>
int add(int a, int b);
int sub(int a,int b);
int mult(int a, int b);
int div(int a, int b);
main(){
int op,a,b,k,m,n,o;
printf("\n Enter value for 1st integer : ");
scanf("%d",&a);	
printf("\n Enter value for 2nd integer : ");
scanf("%d",&b);	

printf("\n\t\tSimple Table ");
printf("\n-------------------------------------------------------------------------");
printf("\n\t");
printf("\n Press 1 for addition         :  ");	
printf("\n Press 2 for subtraction      : ");
printf("\n Press 3 for multiplication   : ");	
printf("\n Press 4 for division         : ");
printf("\n Enter your Choice : ");
scanf("%d",&op);			
switch(op){
{
	case 1 :
		k=add(a,b);
		printf("\n The addition of %d & %d is %d ",a,b,k);
		break;
	
	 case 2:
	   m=sub(a,b);
	   printf("\n The Subtraction of %d & %d is %d ",a,b,m);
	   break;
	   
	  case 3:
		  n=mult(a,b);
		  printf("\n The multiplication of %d & %d is %d ",a,b,n);
		  break;
	  
	  case 4:
		   o=div(a,b);
		   printf("\n The division of %d & %d is %d ",a,b,o);
		   break;
	  default:
	       printf("\n Invalid Operator ");
		   	
   }//End of Switch
getch();	
}
 int add(int a, int b)
{
	 return a+b;
}
  int sub(int a, int b)
  {
      return a-b;
  }
    int mult(int a,int b)
    {
	
    	return a*b ;

   }
     int div(int a,int b)
     {
	
     	return a/b ;
    }
