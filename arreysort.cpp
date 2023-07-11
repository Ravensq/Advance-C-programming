#include <stdio.h>

void mergeAndSortArrays(int A[], int sizeA, int B[], int sizeB, int C[]) {
    int i = 0;  
    int j = 0; 
    int k = 0;  

    
    while (i < sizeA && j < sizeB) {
        if (A[i] <= B[j]) {
            C[k] = A[i];
            i++;
        } else {
            C[k] = B[j];
            j++;
        }
        k++;
    }

    
    while (i < sizeA) {
        C[k] = A[i];
        i++;
        k++;
    }

    
    while (j < sizeB) {
        C[k] = B[j];
        j++;
        k++;
    }
}

int main() {
    int A[] = {2, 5, 9, 12, 15};
    int sizeA = sizeof(A) / sizeof(A[0]);

    int B[] = {1, 4, 7, 11, 18};
    int sizeB = sizeof(B) / sizeof(B[0]);

    int C[sizeA + sizeB];  
    int sizeC = sizeA + sizeB;

    mergeAndSortArrays(A, sizeA, B, sizeB, C);

    printf("Merged and Sorted Array:\n");
    for (int i = 0; i < sizeC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}

