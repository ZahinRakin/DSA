#include <stdio.h>
void counting_sort(int * );
void main(){
    int input[] = {10,5,7,3,5,2,1,0,5,8,9,4,6,5,2,3,2,1};
    int *output;

    
    counting_sort(input);


 
    

}
void counting_sort(int *input ){


    int size = sizeof(input)/4;
    int output[size];
    int maximum = 0 ;


    for(int i = 0 ; i < size ; i++)
        if(input[i] > input[i + 1])
            maximum = input[i];
    

    int count[maximum + 1];



    for(int i = 0 ; i < maximum + 1 ; i++)
        count[i] = 0 ;




    for(int i = 0 ; i < size ; i++)
        count[input[i]]++;
    
    for(int i = 1 ; i < maximum + 1 ; i++)
        count[i] += count[i - 1];
    


    for(int i = 0 ; i < size ; i++){
        count[input[i]] = count[input[i]]-1;
        int q = count[input[i]];
        output[q] = input[i];
    }

    for(int i = 0 ; i < size ; i++)
        printf("%d  ",output[i]);
    
}