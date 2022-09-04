//
// Created by Khine on 9/4/2022.
//
#include <stdio.h>
#include "string.h"
unsigned long amount=1000,deposit,withdraw,exchange,exchangedAmount;
int choice,pin,k,currencyExchange;
char transaction = 'y';
char name[20];
int main() {
    Name:
    printf("Enter your username: ");
    scanf("%s",name);
    if(strcmp(name,"Khine" ) == 0){
        while(pin!=1234){
            printf("Enter your secret pin number:");
            scanf("%d",&pin);
            if(pin!=1234){
                printf("Enter Valid Password\n");
            }
        }
    }else{
        printf("Invalid Username");
        goto Name;
    }

    do{
        printf("\nHello %s!",name);
        printf("\n**********Welcome from KZT Bank ATM Service***********\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Cash\n");
        printf("3. Deposit Cash\n");
        printf("4. Currency Exchange\n");
        printf("5. About KZT Bank");
        printf("6. Quit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
                printf("\n Your Balance is: $%lu\n",amount);
                break;
            case 2:
                printf("\n Enter the Amount(Multiples of 100) to Withdraw(500 Minimum Balance Required in the Account): ");
                scanf("%lu",&withdraw);

                if(withdraw % 100 !=0){
                    printf("\nPlease enter the amount in multiples of 100");
                }else if(withdraw > (amount-500)){
                    printf("\n Insufficient Balance, Minimum Balance Couldn't Be Less Then ₹500 in Account");
                }else{
                    amount = amount - withdraw;
                    printf("\n\n Please Collect Cash");
                    printf("\n Your Current Balance is $%lu", amount);
                }
                break;
            case 3:
                printf("\n Enter the amount to Deposit: ");
                scanf("%lu",&deposit);
                amount += deposit;
                printf(" Your Balance is ₹%lu", amount);
                break;
            case 4:
                printf("\nEnter the Amount You Want to Exchange: ");
                scanf("%lu", &exchange);
                printf("\nChoose the Currency to Exchange Into\n");
                printf("1. $(US Dollar)\n");  //US $ Current Exchange rate(30 Aug, 2021): 100 Rupee = $1.36
                printf("2. €(European Euro)\n");  //European € Current Exchange rate(30 Aug, 2021): 100 Rupee = €1.15
                printf("3. ¥(Japanese Yen)\n");   //Japanese ¥ Current Exchange rate(30 Aug, 2021): 100 Rupee = ¥149.52

                printf("\nPlease Enter Your Choice: ");
                scanf("%d", &currencyExchange);

                switch (currencyExchange) {
                    case 1: //Exchange into USD
                        printf("\nAmount You Want to Exchange: ₹ %lu", exchange);
                        amount= amount-exchange;
                        exchangedAmount = (exchange/73.49) ;
                        printf("\nAmount ₹%lu Exchanged in $%lu\n", exchange, exchangedAmount);
                        printf("\n\n Please Collect Cash");
                        break;

                    case 2: //Exchange into EUR
                        printf("\nAmount You Want to Exchange: ₹ %lu", exchange);
                        amount= amount-exchange;
                        exchangedAmount = (exchange/86.68) ;
                        printf("\nAmount ₹%lu Exchanged in €%lu\n", exchange, exchangedAmount);
                        printf("\n\n Please Collect Cash");
                        break;

                    case 3: //Exchange into JPY
                        printf("\nAmount You Want to Exchange: ₹ %lu", exchange);
                        amount= amount-exchange;
                        exchangedAmount = (exchange*1.49) ;
                        printf("\nAmount ₹%lu Exchanged in ¥%lu \n", exchange, exchangedAmount);
                        printf("\n\n Please Collect Cash");
                        break;
                }
                printf("\n Your Balance is ₹%lu", amount);//Balance after Exchanged
                break;

            case 6:
                k = 1;
                goto jump;

            default:
                printf("\n Invalid Choice, Please Enter a Valid Choice.");

        }
        // to Repeat the Last Transcation Press Y, Or choose a option from Menu Below
        printf("\n\nDo U Wish to Repeat the Last Operation/Transaction: Press 'Y', Or Choose From the Options Below: Press 'N' to Exit.\n");
        fflush(stdin);
        scanf("%c", & transaction);

        if (transaction == 'n' || transaction == 'N')
            k = 1;
    }
    while (!k);
    jump:
    printf("\nThank you for Using Khine Bank ATM.\nHave a nice day!!");
    
    return 0;
}
