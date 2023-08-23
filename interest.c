#include<stdio.h>
#include<stdio.h>
	int main(){
		int a,b,c;
		float d;
		printf("enter your first number:");
		scanf("%d",&a);
		printf("enter your second number:");
		scanf("%d",&b);
		printf("enter your third number:");
		scanf("%d",&c);
		printf("interest:");
		d=(a*b*c)/(float)100;
		printf("%f",d);
		return 0;
	}
