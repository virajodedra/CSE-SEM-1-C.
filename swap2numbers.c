#include<stdio.h>

    void main() {
    	float a,b,c;
    	printf("enter the number a :");
    	scanf("%f",&a);
    	printf("enter the number b :");
    	scanf("%f",&b);	
	
    	c=a;
    	a=b;
    	b=c;
    	printf("b=%f\n",b);
    	printf("a=%f",a);
    	
	}
