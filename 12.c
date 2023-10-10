#include<stdio.h>
void main()
{
	int n,i,count1=0,count2=0;
	printf("Enter the size of an aaray :");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++){
	
	printf("Enter the array element of arr[%d] : ",i);
	scanf("%d",&arr[i]);
}
       for(i=0;i<n;i++){
       	if(arr[i]>0){
       		count1 = count1+1;
		   }
		   else if(arr[i]<0){
		   	count2= count2 +1;
		   }
		   	
		   }
	   }
