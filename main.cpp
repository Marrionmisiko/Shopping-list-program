#include <stdio.h>

void main(void){
    int code, qty;
    float price, amt, totalAmt, cash, change;
    char addAnother;

    do
{
    system("cls");
    printf("-----------\n");
    printf("ITEMS: ");
    printf("-----------\n");
    printf(" 1. Maize Flour\t\tKES200.00\n");
    printf(" 2. Sugar\t\tKES150.00\n");
    printf(" 3. Cooking oil\t\tKES400.00\n");
    printf(" 4. Lentils\t\tKES300.00\n");
    printf(" 5. Soap\t\tKES150.00\n");

    printf("\nENTER CODE\t: ");
    scanf("%d", &code);
    printf("\nENTER QUANTITY\t: ");
    scanf("%d", &qty);

    switch(code){
       case 1: price = 200.00;
               break;
       case 2: price = 150.00;
               break;
       case 3: price = 400.00;
               break;
       case 4: price = 300.00;
               break;
       case 5: price= 150.00;
               break;



    }
   amt = price * qty;
   printf("\nAmount\t\t: %.2f", amt);

   totalAmt = totalAmt + amt;
   printf("\nTotal Amount\t: %.2f", totalAmt);
   printf("\nAdd another(y/n)? ");
   addAnother = getche();

    }while(addAnother == 'y' || addAnother == 'Y');

    do{
    printf("\nCash Tendered: ");
    scanf("%f", &cash);

    }while(cash < totalAmt);

    change = cash - totalAmt;
    printf("\nCHANGE\t\t: %.2f", change);
    printf("\nTHANKYOU COME OFTEN!!!");


    }


