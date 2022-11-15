//
// Created by khine on 11/15/2022.
//
#include "stdio.h"
#include "stdlib.h"
int db[100];
int main(){
    int key = 10;
    int age=0;
    int option = 0;
    int choice =0;
    int userId = 0;
    int userId2 = 0;
    int flag =0 ;
    int global_flag = 0;
    int dbIndex =0;
    while(key<=10){
        printf("Welcome from our game: \n");
        printf("Enter your age: ");
        scanf("%d",&age);
        if(age > 17){
            printf("You can play game!\n");
            while(true){
                printf("Press 1 to login!\nPress 2 to Register:\nPress 3 to complete quit\nPress 4 to back\n");
                scanf("%d",&option);
                while(true){
                    if(option == 1){
                        printf("This is Login\n");
                        printf("Enter your id: ");
                        scanf("%d",&userId);
                        for(int i = 0;i<=100;i++){
                            if(db[i] == userId){
                                flag=1;
                            }
                        }
                        if(flag == 1){
                            printf("You can play game: \n");
                        }else{
                            printf("Your id is not valid: \n");
                            break;
                        }
                    }else if(option == 2){
                        if(global_flag == 1){
                            break;
                        }
                        printf("This is from register:\n");
                        printf("Pls enter your id: ");
                        scanf("%d",&userId);
                        for(int i=0;i<100;i++){
                            if(db[i] == userId){
                                flag = 1;
                            }
                        }
                        while (true){
                            if(flag == 1){
                                printf("User Id already taken:\n");
                            }else{
                                printf("Confirm your id: ");
                                scanf("%d",&userId2);
                                if(userId == userId2){
                                    printf("Registration Success!");
                                    db[dbIndex] = userId;
                                    dbIndex++;
                                    //register
                                    global_flag =1;
                                    break;
                                }else{
                                    printf("Id not same:\n");
                                    break;
                                }

                            }
                        }
                    }else if(option == 3){
                        exit(1);
                    }else if(option == 4){
                        break;
                    }else{
                        printf("Invalid Option:");
                    }
                }

            }
        }else{
            printf("You cannot play game!\nTry again!\n");
        }
    }

    return 0;
}

