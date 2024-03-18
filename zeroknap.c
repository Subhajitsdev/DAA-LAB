#include <stdio.h>
int max(int a, int b){
	if(a>b) return a;
	else  return b;
}
int knapsack(int W, int wt[], int profit[], int n) {
   int i, j;
   int B[n+1][W+1];
   for (i = 0; i <= n; i++) {
      for (j = 0; j <= W; j++) {
         if (i==0 || j==0)
            B[i][j] = 0;
         else if (wt[i-1] <= j)
            B[i][j] = max(profit[i-1] + B[i-1][j-wt[i-1]], B[i-1][j]);
         else
            B[i][j] = B[i-1][j];
      }
   }
   return B[n][W];
}
int main() {
   int profit[] = {20, 25, 40};
   int wt[] = {25, 20, 30};
   int W = 50;
   int n = sizeof(profit)/sizeof(profit[0]);
   printf("The maximum profit is : %d\n", knapsack(W, wt, profit, n));
   return 0;
}
