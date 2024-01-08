#include<stdio.h>
#define MAX 10
int main(){
      int arr[MAX],n,sum,i,j;
      printf("Enter the number of elements: ");
      scanf("%d",&n);
      printf("\n Enter the elements: \n");
      for(i=0;i<n;i++){
           scanf("%d",&arr[i]);
      }
      printf("\n The sorted array is: \n");
      for(i=0;i<n;i++){
           printf("%d ",arr[i]);
      }
      printf("\n Enter the sum value X: ");
      scanf("%d",&sum);
      i=0;
      j=n-1;
      while (i<j){
           if (arr[i]+arr[j]==sum) {
               printf("%d+%d=%d\n",arr[i],arr[j],sum);
              i++;
              j--;  
              }
          else if(arr[i]+arr[j]<sum)
               i++;
          else {
               j--;
               }
            
      }  
}
