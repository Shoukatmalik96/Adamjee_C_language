#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
char source[]="Shoukat";
char destination[40];
char fname[]="Shoukat";
char lname[]="malik";
strcpy(destination,source);
strcat(strcat(fname," "),lname);
printf("\n Name : % s",fname);
printf("\n Destination %s",destination);
}
