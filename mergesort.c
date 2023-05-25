#include <stdio.h>
void mergesort(int * , int , int );
void merge(int * , int , int , int );
void main(){
    int arr[] = {11 , 21 , 4, 1,44,23,5, 8};
    mergesort(arr , 0 , 8);
    for(int i = 0 ; i < 8 ; i++)
        printf("%d ",arr[i]);
}

void mergesort(int *arr , int start , int end){
    if(start < end){
        int mid = (start + end)/2;
        mergesort(arr , start , mid );
        mergesort(arr , mid + 1 , end);
        merge(arr , start , mid , end);
    }
}
void merge(int *arr , int start ,int mid , int end){
    int i , j , k;
    int n1 = mid - start + 1;
    int n2 = end - mid;
    int L[n1] , R[n2];
    for(i = 0 ; i < n1 ; i++)
        L[i] = arr[start + i];
    for(j = 0 ; j < n2 ; j++)
        R[j] = arr[mid + 1 + j];
    i = 0 ; j = 0 ; k = start;
    while(i < n1 && j < n2){
        if(L[i] < arr[k]){
            arr[k] = L[i];
            k++;
            i++;
        }
        else{
            arr[k] = R[j];
            k++;
            j++;
        }
    }
    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
    
}