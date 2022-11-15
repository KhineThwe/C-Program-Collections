//
// Created by khine on 11/15/2022.
//
#include "stdio.h"
int main(){
    int myArr[10] = {10,20,30,40,50,50,70,80,90,100};
    int toFind = 50;
    int count=0;
    int location[10];

    for (int i=0;i<=10;i++){
        if(myArr[i] == toFind){
            location[count] = i;
            count++;
            printf("We found at %d\n",i);
        }
    }
    if(count == 0){
        printf("Not found: \n");
    }else{
        printf("We found: %d\n",toFind);
        printf("Count: %d\n",count);
    }
    return 0;
}

