#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
	
	
	
char fname[15],lname[15],fullName[40];
//printf("\n Enter your First Name :");
gets(fname);
//puts(fname);
printf("\n Enter your Last Name :");
gets(lname);
fullName =strcat(strcat(fname, ""),lname);
//puts(lname);

//printing string values

printf("\n First Name  : %s",  fname);
printf("\n Last  Name  : %s" , lname);
printf("\n Full  Name  : %s",  fullName);
	
	
	
	
	
	
	
	
	
	
getch();	
}
