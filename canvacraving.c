#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct buyerseller
{
    char buyername[50];
    char buyerid[50];
    char sellername[50];
    char sellerpass[50];
};

void sellerlogin()
{
    


}

void sellerregister()
{



}

int seller()
{
    int sellerchoice = 0;

    system("CLS");

    printf("        ----- S E L L E R -----\n\n");

    printf("1. Login\n2. Register\n");

    pickagain:
    printf("\nPress 1 or 2");
    scanf("%d", &sellerchoice);

    if(sellerchoice == 1)
    {
        sellerlogin();
    }
    else if(sellerchoice == 2)
    {
        sellerregister();
    }
    else
    {
        printf("Invalid input, please choose again.");
        goto pickagain;
    }
}

int buyer()
{
    struct buyerseller info;
    char filename[100];

    system("CLS");

    printf("        ----- B U Y E R -----\n\n");

    printf("Enter your name: ");
    fgets(info.buyername, sizeof(info.buyername),stdin);
    info.buyername[strcspn(info.buyername, "\n")] = '\0';

    fgets(info.buyername, sizeof(info.buyername),stdin);
    info.buyername[strcspn(info.buyername, "\n")] = '\0';

    printf("ID-Number: ");
    fgets(info.buyerid, sizeof(info.buyerid),stdin);
    info.buyerid[strcspn(info.buyerid, "\n")] = '\0';

    FILE *buyerinfo = fopen(filename, "w");

    sprintf(filename, "C:/Users/Acer/Downloads/buyer_data/info_%s.txt", info.buyername);

    if (buyerinfo == NULL) {
        printf("Error \n");
    return 1;
    }

    fprintf(buyerinfo, "Name: %s\n", info.buyername);
    fprintf(buyerinfo, "Id-Number: %s\n", info.buyerid);
    
    fclose(buyerinfo);
}
void main()
{
    int bschoice;
    //Introduction
    printf("        -------------------------------\n");
    printf("        -C A M P U S  C R A V I N G S-\n");
    printf("        -------------------------------");

    printf("\nWelcome to the CLSU Alumni Food Ordering System. \n\nAre you a:\n");
    pickagain:
    printf("1. Buyer\n2. Seller\n\n");
    printf("Press 1 or 2: ");
    scanf("%d",&bschoice);

    if(bschoice == 1)
    {
        buyer();
    }
    else if(bschoice == 2)
    {
        seller();
    }
    else
    {
        printf("Invalid input, please choose again.");
        goto pickagain;
    }

}