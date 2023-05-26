#include <stdio.h>
#include <stdlib.h>

void qs(int *, int, int);
void swap(int* , int*);

void main(){
    int arr[] = {4,1,7,0,8,3,10};
    qs(arr , 0 , 7);
    for(int i = 0 ; i < 7 ; i++)
        printf("%d ",arr[i]);
}

void qs(int *arr , int start , int end){
    if(start < end){
        int i = start ; 
        int j = end;
        int p = start;
        while(i < j){
            while(arr[i] < arr[p])
                i++;
            while(arr[j] > arr[p])
                j--;
            swap(&arr[i] , &arr[j]);
        }
        swap(&arr[p] , &arr[j]);
        qs(arr , start , j-1);
        qs(arr , j+1 , end);
    }
}

void swap(int* p, int* q){
    int temp = *p;
    *p = *q;
    *q = temp;
}