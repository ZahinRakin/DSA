#include <stdio.h>
#include "library.c"

void main(){
    int ch;
    int a;
    int b;
    printf("Choose:\n1. Add.\n2. subtract.\n3. multiply.\n4. division.\n= ");
    scanf("%d",&ch);
    getchar();
    scanf("%d",&a);
    getchar();
    scanf("%d",&b);
    if(ch == 1){
        printf("addition = %d\n",add(a,b));
    }
    else if(ch == 2){
        printf("subtraction = %d",subtract(a,b));
    }
    else if(ch == 3){
        printf("multiplication = %d",multiply(a,b));
    }
    else {
        printf("division = %d",divide(a,b));
    }
}