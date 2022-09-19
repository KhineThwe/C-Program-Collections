//
// Created by Khine on 9/19/2022.
//
#include "stdio.h"
#include "stdlib.h"
int main(){
    char string[1000];
    FILE *fptr;
    fptr= fopen("khine.txt","a");
    if(fptr == NULL){
        printf("File Opening Error: ");
        exit(0);
    }

    printf("Enter some string: ");
    fgets(string,sizeof(string),stdin);

    fprintf(fptr,"%s",string);

    fclose(fptr);
}
