#include<stdio.h>
  
     int main()   {
     	int a;
     	printf("Enter the number a:");
     	scanf("%d",&a);
     	
     	if((a&1)==1){
     		printf("the number is odd");
		 }else{
		 	printf("the number is even");
		 }
	 }
