#include<stdio.h>
  
     void main()  {
     	int n,rem,sum ,temp;
     	
     	printf("Enter the number :");
     	scanf("%d",&n);  //121
     	temp=n;
     	while(n!=0){
     		rem = n%10;    //1,2,1     
     		sum = sum*10 + rem;//1,12,120+1=121
     		
     		n = n/10;//12,1,0 and 0 comes and condition goes false
     		
		 }
		 
		 if(temp==sum){
		 	printf("The number is palindrome.");
		 }
		 else{
		 	printf("The  number is not palindrome.");
		 }
	 }
