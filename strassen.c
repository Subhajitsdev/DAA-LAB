#include<stdio.h>
#define MAX 50
int po(int n){
	int p=1;
	while(p<n){
		p=p*2;
	} return p;
}
int main(){
	int X[MAX][MAX];int Y[MAX][MAX];
	int n,m,i,j;
	printf("Enter rows & cols: ");
	scanf("%d",&n);
	printf("\nEnter elements of first matrix: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&X[i][j]);
		}
	}
	printf("\nThe matrix is: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",X[i][j]);
		}
		printf("\n");
	}
	printf("Enter rows & cols: ");
	scanf("%d",&m);
	printf("\nEnter elements of second matrix: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&Y[i][j]);
		}
	}
	printf("\nThe matrix is: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",Y[i][j]);
		}
		printf("\n");
	}
	int ptr1=po(n);
	
	int ptr2=po(m);
	printf("%d\t %d",ptr1,ptr2);
	if(ptr1!=2 && ptr2!=2){
		int X1[MAX][MAX];int Y1[MAX][MAX];
		printf("\nBoth are unsymmetric matrices\n\n");
			printf("First matrix: \n");
			for(i=0;i<ptr1-n;i++){
				for(j=0;j<ptr1-n;j++){
					
						X1[i][j]=0;
					}
					for(j=ptr1-n;j<ptr1;j++){
					
						
					 
						X1[i][j]=X[i-1][j-1];
					}
					for(i=0;i<ptr1;i++){
						for(j=0;j<ptr1-n;j++){
							printf("%d\t",X1[i][j]);
						}
				printf("\n");
			}
			printf("\n\n");
			/*printf("Second matrix: \n");
			for(int k=0;ptr2;k++){
				for(int l=0;l<ptr2;l++){
					if(k==0 || l==0){
						Y1[k][l]=0;
					}
					else {
						Y1[k][l]=Y[k-1][l-1];
					}
					printf("%d\t",Y1[k][l]);
				}
				printf("\n");
			}*/
	}
	}
	return 0;
}
