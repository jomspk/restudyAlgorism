#include <stdio.h>

void bubbleSort(int A[],int N){
    int flag = 1;
    int changedValue = 0;
    int j,tempValue;
    while(flag) {
        flag = 0;
        for(j=N-1;j>0;j--){
            if(A[j]<A[j-1]){
                tempValue = A[j];
                A[j] = A[j-1];
                A[j-1] = tempValue;
                changedValue++;
                flag = 1;
            }
        }
    }
    for(j=0;j<N;j++) {
        if(j>0){
            printf(" ");
        }
        printf("%d",A[j]);
    }
}

int main() {
    int i, N;
    int A[100];
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    bubbleSort(A,N);    
    return 0;
}