#include<stdio.h>

   void printarr(int[],int n);
   void main(){
   	
   	 int  n,i;
   	  int arr[n];
   	 
   	  
   	  printf("Enter the size of an aaray :");
   	  scanf("%d",&n);
   	  
   	  for(i=0;i<n;i++){
		 
   	  printf("Enter the elements of the arr[%d] :",i);
   	  scanf("%d",&arr[i]);
   }
       printarr(arr,n);
}
          void printarr(int arr[],int n){
          	
          	 int i;
          	 for(i=0;i<n;i++){
		 
   	 
		printf("the array is : %d\n",arr[i]);
 
          	
		  }
}
