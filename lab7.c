// Arlen Bennetti
// COP 3502
// March 8, 2024

#include <stdlib.h>
#include <stdio.h>

#define SIZE 9

void swap(int *i, int *j);
int bubbleSort(int arr[], int n);
void printArray(int arr[], int size);

int main() {
    int array1[SIZE] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[SIZE] = {90, 80, 70, 60, 50, 40, 30, 20, 10};

    int n = sizeof(array1) / sizeof(array1[0]);
    bubbleSort(array1, n);
    printf("Sorted array: \n");
    printArray(array1, n);
    return 0;

    return 0;
}

void swap(int *i, int *j) {
    int temp = *i;
    *i = *j;
    *j = temp; 
}

int bubbleSort(int arr[], int n) {
    int i, j;
    int swapOccur;

    for (i=0; i<n-1; i++) {
        swapOccur = 0;

        for(j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                swapOccur = 1;
            }
        }

        if(swapOccur == 0) {
            break;
        }
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
}