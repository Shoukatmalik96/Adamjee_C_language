#include<stdio.h>
#include<conio.h>
int a,b,i,j,k,l,op;//global initialization
int add(int x,int y);
int sub(int x,int y);
int mul(int x,int y);
int div(int x,int y);
main(){
	

//a= 10;
//b=  5;
//op= 4;
printf("\n\t\t\tCALCULATOR");
printf("\n----------------------------------------------------------");

printf("\n----------------------------------------------------------");
printf("\n\tPRESS 1 FOR ADDITION :");
printf("\n\tPRESS 2 FOR SUBTRACTION :");
printf("\n\tPRESS 3 FOR MULTIPLICATION :");
printf("\n\tPRESS 4 FOR DIVISION :\n\n");
printf("\n\t\t\tEnter your Choice :");
scanf("%d",&op);
printf("\n----------------------------------------------------------");
switch(op)
{
	case 1:
	{
	  //i=a+b;
	  printf("\n Enter First Number :");
      scanf("%d",&a);
      printf("\n Enter Second Number :");
      scanf("%d",&b);
	  i=add(a,b);
	  printf("\n The addition of %d and %d = %d",a,b,i);
	  break;
    }
    case 2:
	{
	  //j=a-b;
	  printf("\n Enter First Number :");
      scanf("%d",&a);
      printf("\n Enter Second Number :");
      scanf("%d",&b);
	  j=sub(a,b);
	  printf("\n The SUBTRACTION of %d and %d = %d",a,b,j);
	  break;
    }
    case 3:
	{
	  //k=a*b;
	  printf("\n Enter First Number :");
      scanf("%d",&a);
      printf("\n Enter Second Number :");
      scanf("%d",&b);
	  k=mul(a,b);
	  printf("\n The MULTIPLICATION of %d and %d = %d",a,b,k);
	  break;
    }
    case 4:
	{
	  //l=a/b;
	  printf("\n Enter First Number :");
      scanf("%d",&a);
      printf("\n Enter Second Number :");
      scanf("%d",&b);
	  l=div(a,b);
	  printf("\n The DIVISION of %d and %d = %d",a,b,l);
	  break;
    }
    default:
      printf("\n Wrong  Input !");
  }// End of Switch
getch();	
}//End of Main
int add(int x,int y)
{
	return a+b;
}
int sub(int x,int y)
{
	return a-b;
}
int mul(int x,int y)
{
	return a*b;
}
int div(int x,int y)
{
	return a/b;
}
