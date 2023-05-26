#include <stdio.h>
#include <stdlib.h>

void mergeSort(int* , int , int);
void merge(int* , int , int , int);

void main(){
        int arr[] = {4,1,7,0,8,3,10};
    mergeSort(arr , 0 , 6);
    for(int i = 0 ; i < 7 ; i++)
        printf("%d ",arr[i]);
}

void mergeSort(int* arr , int start , int end){
    if(end > start){
        int mid = (start + end)/2;
        mergeSort(arr , start , mid );
        mergeSort(arr , mid + 1, end);
        merge(arr , start , mid , end);
    }
}

void merge(int* arr, int start, int mid , int end){
    int i = 0;
    int j = 0;
    int k = start;
    int n1 = mid - start + 1; 
    int n2 = end - mid;
    int L[n1];
    for(int p = 0 ; p < n1 ; p++)
        L[p] = arr[start + p];
    int R[n2];
    for(int p = 0 ; p < n2 ; p++)
        R[p] = arr[mid + p + 1];
    while(i < n1 && j < n2){
        if(L[i] < R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }
    while(i < n1)
        arr[k++] = L[i++];
    while(j < n2)
        arr[k++] = R[j++];
}