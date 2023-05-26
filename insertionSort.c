#include <stdio.h>

void insertion(int* , int);

void main(){
    int arr[] = {43,23,66,20};
    insertion(arr , 4);
    for (int i = 0; i < 4; i++) {
        printf("%d\n", arr[i]);
    }
}

void insertion(int* arr , int size){
     for(int i = 1 ; i < size ; i++){
         int j = i-1;
         int key = arr[i];
        while(j >= 0 && arr[j] > key){ 
             arr[j + 1] = arr[j];
             j--;
        }
         arr[j+1] = key;
     }
 }