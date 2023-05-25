#include <stdio.h>
void quicksort(int * , int  , int );
void main(){
    int arr[] = {11,21,3,43,23,11,1,3,2,4,2};
    quicksort(arr , 0 , 10);
        for(int i = 0 ; i < 11 ; i++)
        printf("%d ",arr[i]);
}
void quicksort(int *arr , int start , int end ){
    int p , i , j ,temp;
   
    if(start < end){
        
        i = start;
        j = end;
        p = start;
        while(i < j){
            
            while(arr[p] >= arr[i] && i < end)//i understood why thid thing is important
                i++;
            while(arr[p] < arr[j])
                j--;
            if(i < j){
                
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
        temp = arr[p];
        arr[p] = arr[j];
        arr[j] = temp;
       
        
        quicksort(arr , start , j - 1);
        quicksort(arr , j + 1 , end);
    }


}