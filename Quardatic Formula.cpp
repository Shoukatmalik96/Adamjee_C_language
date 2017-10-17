#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	
	
 /*
 printf("\n Quardatic Formul");
 x = -b +/- Sqrt(b2- 4ac)/2a
 */
 
 int a,b,c,l,m,n,o,p, q,r ,s, t;
 a = -1 , b= 2 , c = 3;
 // square of b
 l=b*b;
 // 4ac
 m = 4 * a*c;
 // 2a
 n = 2* a;
 //b2- 4ac
 o = l- m;
 //square root of 
 p = sqrt(o);
 
 q = -b + p ;
 r = -b - p ;
 s = q / n;
 t = r /n ;
 printf("\n %d",l);
  printf("\n %d",m);
   printf("\n %d",n);
    printf("\n %d",o);
    printf("\n %d",p);
    printf("\n %d",q);
    printf("\n %d",r);
    printf("\n When x is Positive  %d ",t);
    printf("\n When x is Negative %d ",s);
    
    

 
 
 
 
 
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
