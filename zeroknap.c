#include <stdio.h>
int max(int a, int b){
	if(a>b) return a;
	else  return b;
}
int i, j;
/*int knapsack(int W, int wt[], int profit[], int n) {
  
   return B[n][W];
}*/
int main() {
   int profit[] = {1000, 2000, 1600,600};
   int wt[] = {3, 2, 4,6};
   int W = 6;
   int n = sizeof(profit)/sizeof(profit[0]);
    
   int B[n+1][W+1];
   for (i = 0; i <= n; i++) {
      for (j = 0; j <= W; j++) {
         if (i==0 || j==0)
            B[i][j] = 0;
         else {
         if (wt[i-1] <= j) {
            B[i][j] = max(profit[i-1] + B[i-1][j-wt[i-1]], B[i-1][j]);
            }
         else{
            B[i][j] = B[i-1][j];
            }
         }
      }
   } 
   for(i=0;i<=n;i++){
   	for(j=0;j<=W;j++){
   		printf("%d\t",B[i][j]);
   	} printf("\n");
   }
   printf("The maximum profit is : %d\n", B[n][W]);
   return 0;
}
