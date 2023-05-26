#include <stdio.h>

void bubble(int* , int);
void swap(int* , int*);

void main(){
    int arr[] = {2,4,3};
    bubble(arr , 3);
    for(int i = 0 ; i < 3 ; i++)
        printf("%d ",arr[i]);
}
void bubble(int* arr , int size){
    for(int i = 1 ; i < size ; i++){
        for(int j = size - 1 ; j > i ; j--){
            if(arr[j] < arr[j - 1])
                swap(&arr[j] , &arr[i]);
        }
    }
}

void swap(int* p , int* q){
    int temp = *p;
    *p = *q;
    *q = temp;
}