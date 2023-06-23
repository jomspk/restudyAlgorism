#include<stdio.h>

void trace(int A[],int N){
    int i;
    for(i=0;i<N;i++){
        if(i>0) printf(" ");
        printf("%d", A[i]);
    }
    printf("\n");
}

void insertionSort(int A[], int N){
    int comparedValue,i,j;
    for(i=1;i<N;i++){
        comparedValue = A[i];
        for(j=i-1;j>=0;j--){
            if(A[j]>comparedValue){
                A[j+1]=A[j];
            } else{
                break;
            }
        }
        A[j+1]=comparedValue;
        trace(A,N);
    }
}

int main() {
    int N,i;
    int A[100];
    
    scanf("%d", &N);
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    trace(A,N);
    insertionSort(A,N);
    return 0;
}