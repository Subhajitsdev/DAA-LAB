#include<stdio.h>
#define MAX 10
int main(){
      int arr[MAX],n,key,i,j;
      int flag=0;
      printf("Enter the number of elements: ");
      scanf("%d",&n);
      printf("\n****PLEASE GIVE SORTED ARRAY****");
      printf("\n Enter the elements: \n");
      for(i=0;i<n;i++){
           scanf("%d",&arr[i]);
      }
      printf("\n The sorted array is: \n");
      for(i=0;i<n;i++){
           printf("%d ",arr[i]);
      }
      printf("\n Enter the key value: ");
      scanf("%d",&key);
      int beg=0;
      int end=n-1;
      while (beg<=end){
           int mid=beg+(end-beg)/2;
           if(arr[mid]==key){
                 printf("\n Key %d is found at %dth index\n",key,mid);
                 flag=1;
                 break;
           }
           else if(arr[mid]<key){
                 beg=mid+1;
           }
           else 
                 end=mid-1;
            
      }  
}
