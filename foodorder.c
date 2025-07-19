#include <stdio.h>
#include <string.h>


int main() {
    int order, qty,delivery=10;
    float price,amount;
    char choice,again;
    pickagain:
    printf("1. Sisig - 60\n");
	printf("2. Menudo - 60\n");
	printf("3. Paksiw - 65\n");
	printf("4. Pinakbet - 50\n");
	printf("5. Adobong Manok - 60\n");
	printf("6. Kaldereta - 60\n");
	printf("7. Kare-kare - 50\n");
	printf("8. Sinigang - 60\n");
	printf("9. Fried Chicken - 50\n");
	printf("10. Dinuguan - 60\n");

    printf("\nEnter the food that you want: ");
    scanf("%d",&order);

    printf("\nEnter Quantity:");
    scanf("%d",&qty);



    switch (order)
    {
        case 1: 
            price = 60.00;
            break;
        case 2:
            price = 60.00;
            break;
        case 3:
            price = 65.00;
            break;
        case 4:
            price = 50.00;
            break;
        case 5:
            price = 60.00;
            break;
        case 6:
            price = 60.00;
            break;
        case 7:
            price = 50.00;
            break;
        case 8:
            price = 60.00;
            break;
        case 9:
            price = 50.00;
            break;
        case 10:
            price = 60.00;
            break;
        default:
        printf("Invalid, choose again\n");
        return 1;
    }
    printf("Do you want Delivery? (y/n): ");
    scanf("%c",&choice);
    scanf("%c",&choice);

    if(choice == 'y'||choice =='Y')
    {
        printf("\nDelivery would be additoinal 10.00\n");
        amount = price*qty+delivery;
    }
    else{
    amount = price*qty;
    }

    printf("Amount: %.2f",amount);
    
    printf("\nDo you want to order again? (y/n): ");
    scanf("%c", &again);
    scanf("%c", &again);

    if(again=='y'||again=='Y')
    {
        system("CLS");
        goto pickagain;

    }
    else
    {
        printf("\n\nThank you for ordering your food will arrive shortly");
    }
  
  return 0;
}