#include<stdio.h>
   int  simp(int,int,int);
  void main(){
  	
  	int p,r,t;
  	printf("Enter the  TIME(IN YEARS) : ");
  	scanf("%d",&t);
  	printf("Enter the AMOUNT :");
  	scanf("%d",&p);
  	printf("Enter the  RATE OF INTREST :");
  	scanf("%d",&r);
  	
  	int res = simp(p,r,t);
  	printf("The simple intrest is : %d ",res);
  	
  }  
     int simp(int r,int p,int t){
     	
     	float c = (p*r*t)/100;
     	
     	return c;
	 }
