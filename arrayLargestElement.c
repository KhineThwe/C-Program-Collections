//
// Created by Khine on 9/19/2022.
//
#include "stdlib.h"
#include "stdio.h"

int main(){
    int number;
    int data[100];

    printf("Enter the number of elements(1 to 100): ");
    scanf("%d",&number);

    for(int i=0;i<number;i++){
        printf("Enter data %d: ",i+1);
        scanf("%d",&data[i]);
    }

    for(int j=1;j<number;j++){
        if(data[0] < data[j]){
             data[0] = data[j];
             data[j] =data[0];
        }
    }

    for(int k=0;k<number;k++){
        printf("%d\n",data[k]);
    }

    printf("Largest Elements of array: %d",data[0]);
    return 0;
}
