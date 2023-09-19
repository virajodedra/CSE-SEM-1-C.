#include<stdio.h>
  
    void main(){
    	int i=1,n,evencount=0,oddcount=0;
       
	   while(i<=10){
	   	printf("Enter ther number :");
		   scanf("%d",&n);
	   	if(n%2==0){
	   		evencount = evencount+1;
		   }
		   else{
		   	oddcount = oddcount+1;
		   }
		   i++;
	}
	printf("even count =%d odd count =%d\n",evencount,oddcount);
	   	
	}
