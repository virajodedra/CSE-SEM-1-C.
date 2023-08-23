#include<stdio.h>

   void main(){
   	int a,b,c;
   	printf("enter the number a :");
   	scanf("%d",&a);
   	printf("enter the number b :");
   	scanf("%d",&b);
   	printf("enter the number c :");
   	scanf("%d",&c);
   	
   	if(a>b && a>c){
   		printf("a is greater");
	   }
	   else if(c>a && c>b){
	   	printf("c is greater");
	   }else{
	   	printf("b is greater");
	   }
	   
   }
