/* 9.	WAP to enter two matrices of sizes m×n and size p×q. 
Multiply the two matrices and store in the third matrix if possible (using pointers). */

#include <stdio.h>
void inputorder(int *, int *,int *,int *);
int main() {
    int m,n,p,q;
    inputorder(&m,&n,&p,&q);
    if(n != p){
        printf("The Order is not valid,\nPlease enter the correct order again:\n");
        inputorder(&m,&n,&p,&q);
    }
    
    int A[5][5],B[5][5];
    int i,j,k;
    printf("Input for matrix A:\n");
    for(i=1; i<=m; i++){
        for(j=1; j<=n; j++){
            printf("Enter the element of position %d%d:",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    
    printf("Input for matrix B:\n");
    for(i=1; i<=p; i++){
        for(j=1; j<=q; j++){
            printf("Enter the element of position %d%d:",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    
    int *a,*b,*product=0;
    for(i=1; i<=m; i++){
        for(j=1; j<=q; j++){
            for(k=1; k<=n; k++){
                *a = A[i][k];
                *b = B[k][j];
                *product = *product+ (*a * *b); 
            }
             printf("%d\t",*product);
            *product=0;
        }
        printf("\n"); 
    }
    
    return 0;
}
void inputorder(int *m, int *n, int *p, int *q){
    printf("Enter the order of matrix A:");
    scanf("%d%d",m,n);
    printf("Enter the order of matrix B:");
    scanf("%d%d",p,q);
}
