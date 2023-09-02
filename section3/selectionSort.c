#include <stdio.h>

void selectionSort(int A[], int N){
    int j,i,minj,minjValue;
    int changedCount = 0;
    for(i=0;i<N;i++){
        minj = i;
        for(j=i;j<N;j++){
            if(A[j]<A[minj]){
                minj = j;
            }
        }
        if(minj != i){
            minjValue = A[minj];
            A[minj] = A[i];
            A[i] = minjValue;
            changedCount++; 
        }
    }
    for(i=0;i<N;i++) {
        if(i>0){
            printf(" ");
        }
        printf("%d",A[i]);
    }
    printf("\n");
}

int main() {
    int i,N;
    int A[100];
    scanf("%d",&N);
    for(i=0;i<N;i++) {
        scanf("%d",&A[i]);
    }
    selectionSort(A,N);
    return 0;
}