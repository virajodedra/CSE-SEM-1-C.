#include<stdio.h>
  
     int main()   {
     	int a,b,c;
     	float s;
     	char o;
     	printf("\t\t\t\t\t\t calcultor\n\n\n\n");
     	printf("please enter your choice :(+ for addition ) (- for substration) (* for multiplication) (/ for division):");
        scanf("%c",&o);
     	
     	printf("Enter the number a:");
     	scanf("%d",&a);
     	printf("Enter the number b:");
     	scanf("%d",&b);
     	
   
     if(o=='+'){
     	s = a+b;
     	printf("the answer of addition is: %f",s);
	 }
	  else if(o=='-'){
     	s = a-b;
     	printf("the answer of subsctration is: %f",s);
	 }
	 else if(o=='*'){
     	s = a*b;
     	printf("the answer of multiplication is: %f",s);
	 }
	 else if(o=='/'){
	 	if(b=o){
     		printf("divisor can't be zero");
     		
		 }
     	s = a/b;
     	printf("the answer of division is: %d",s);
     	
	 }  
	 else    {
	 	printf("you enter wrong inputs");
	 	
	 }
	 	
	 }
	 
	                           
