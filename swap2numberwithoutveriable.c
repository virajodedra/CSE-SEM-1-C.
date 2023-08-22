#include<stdio.h>

  void main() { 
  
    float a,b;
        printf("enter the number a :");
    	scanf("%f",&a);
    	printf("enter the number b :");
    	scanf("%f",&b);
    	
    	a=a+b;
    	b=a-b;
    	a=a-b;
    	printf("b=%f\n",b);
    	printf("a=%f",a);
    	
    	
    
  }
