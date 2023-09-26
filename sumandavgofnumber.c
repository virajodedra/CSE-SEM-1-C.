#include<stdio.h>
  
      void main(){
      	int n=1,sum=0,i=1,count=0,avg=0;
      	
      	while(n!=0){
		  
      	printf("Enter the number :");
      	scanf("%d",&n);
      	
      	   sum = sum+n;
      	   
      	   count= count+1;
      }
        avg = (sum)/(count-1);
		
		printf("the sum is : %d\n",sum);
		printf("the  average is : %d ",avg); 
      	
      	
	  }
