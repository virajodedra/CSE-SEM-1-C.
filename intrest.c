#include<stdio.h>
  
    void main()  {
     
	 float t,r,p,intrest;
	 printf("enter the principal amount :");
	 scanf("%f",&p);
	 printf("enter the roi :");
	 scanf("%f",&r);
	 printf("enter the time period:");
	 scanf("%f",&t);
	 intrest = (p*r*t)/100;
	 
	 printf("the intrest is:%f",intrest);		
    	       
	}
