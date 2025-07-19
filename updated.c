#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int menu =0;

struct Buyer
{
    char buyername[50];
    char buyerid[50];
};

struct Seller
{
	char sellername[50];
	char sellerpass[50];
};


void get_order(char menu[10][100]){
	int meal, qty = 0;
	int price = 60;
	char order[100];
	printf("Enter the number of the meal you want to order: ");
	scanf("%d",&meal);

	strcpy(order,menu[meal-1]);
	printf("%s\n",order); //for checking only, remove when done
		
	
	printf("Enter the quantity: ");
	scanf("%d", &qty);
	
}

void sun(){
		char sunday_menu [10][100]={	"Sisig",
		    							"Menudo",
		    							"Paksiw",
	            						"Pakbet",
		    							"Adobong Manok",
										"Kaldereta",
										"Kare-kare",
										"Sinigang",
										"Fried Chicken",
										"Dinuguan" };
	for (int i = 0; i < 10; i++){
		printf("%d. %s - 60\n", i+1,sunday_menu[i]);
	}
	get_order(sunday_menu);
}

void mon(){
	char monday_menu [10][100]={	"Tinola",
		    						"Adobong Baboy",
		    						"Tokwa't Baboy",
	            					"Lechon Kawali",
		    						"Adobong Manok",
									"Sinampalucan",
									"Beef Broccoli",
									"Mechado",
									"Bistek",
									"Tapa" };
	for (int i = 0; i < 10; i++){
		printf("%d. %s - 60\n", i+1,monday_menu[i]);
	}
	get_order(monday_menu);
}

void tue(){
	
	char tuesday_menu [10][100]={	"Chopseuy",
						    		"Ginataang Kalabasa",
		    						"Laing",
	            					"Sisig",
		    						"Adobong Manok",
									"Tinola",
									"Kare-kare",
									"Mechado",
									"Fried Chicken",
									"Dinuguan" };							
	for (int i = 0; i < 10; i++){
		printf("%d. %s - 60\n", i+1,tuesday_menu[i]);
	}
	get_order(tuesday_menu);
}

void wed(){
	char wednesday_menu [10][100]={	"Lechon Kawali",
		    						"Chopseuy",
		    						"Laing",
	            					"Pakbet",
		    						"Adobong Baboy",
									"Afritada",
									"Beef Broccoli",
									"Sinigang",
									"Tinola",
									"Bistek" };
		
	for (int i = 0; i < 10; i++){
		printf("%d. %s - 60\n", i+1,wednesday_menu[i]);
	}
	get_order(wednesday_menu);
}

void thurs(){
	char thursday_menu [10][100]={	"Afritada",
		    						"Bistek",
		    						"Paksiw",
	            					"Adobong Sitaw",
		    						"Tortang Talong",
									"Menudo",
									"Kare-kare",
									"Sisig",
									"Tokwa't Baboy",
									"Tapa" };
	for (int i = 0; i < 10; i++){
		printf("%d. %s - 60\n", i+1,thursday_menu[i]);
	}
	get_order(thursday_menu);
}

void fri(){

	char friday_menu [10][100]={	"Ginisang Ampalaya",
		    						"Ginataang Kalabasa",
		    						"Adobong Manok",
	            					"Adobong Baboy",
		   					 		"Adobong Sitaw",
									"Kaldereta",
									"Menudo",
									"Sinigang",
									"Sinampalucan",
									"Fried Chicken" };
	for (int i = 0; i < 10; i++){
		printf("%d. %s - 60\n", i+1,friday_menu[i]);
	}
	get_order(friday_menu);
}

void sat(){
	char saturday_menu [10][100]={	"Sisig",
		    						"Bistek",
		    						"Paksiw",
	           				 		"Tortang Talong",
		    						"Tinola",
									"Sinigang na Bangus",
									"Kare-kare",
									"Nilagang Baboy",
									"Fried Chicken",
									"Papaitan" };
	for (int i = 0; i < 10; i++){
		printf("%d. %s - 60\n", i+1,saturday_menu[i]);
	}
	get_order(saturday_menu);
}

void view_order(){

    char string [100];
 	FILE *seller;

    seller = fopen ("C:/Users/User/Desktop/orders/Order.txt", "r");

    while(fgets(string,100,seller)){

        printf("%s",string);
    
    }
    fclose(seller);
 }


void change_menu(){
	int input;
	printf("\t\t\t-- M E N U  S E L E C T I O N --\n");
	printf("    What day is it today?\n\n");
	printf("\t1 - Sunday\n\t2 - Monday\n\t3 - Tuesday\n\t4 - Wednesday\n\t5 - Thursday\n\t6 - Friday\n\t7 - Saturday\n   : ");
	scanf("%d",&input);
	
	if (input < 0|| input > 7){
		system("CLS");
		printf("Invalid input. Try again.\n");
		change_menu();
	}
	menu = input;
}

void show_menu(){
	printf("\t\t\t-- W E L C O M E ! - - \n");
	printf("\nThe menu for today is: \n\n");
	switch(menu){
		case 1:
			sun();
			break;
		case 2:
			mon();
			break;
		case 3:
			tue();
			break;
		case 4:
			wed();
			break;
		case 5:
			thurs();
			break;
		case 6:
			fri();
			break;
		case 7:
			sat();
			break;
	}
}
int selleredit()
{
    char sellername[30];
    char password[30];

    system("CLS");

    int input = 0;
	
	printf("\t\t\t-- W E L C O M E  S E L L E R --\n\n");
	printf("   What would you like to do?\n\n");
	printf("\t1 - Change Food Selection.\n\t2 - View Orders\n\t3 - Go back to Welcome Page\n\n   : ");
	scanf("%d", &input);
	
	switch(input){
		case 1: 
			system("CLS");
			change_menu();
			break;
		case 2:
			system("CLS");
			view_order();
			break;
		case 3:
			system("CLS");
			printf("Going back to the Welcome Page...");
			break;

    system("CLS");
    show_menu();
    }
}

void login()
{
	char sellername[100];
    char sellerpass[100];
    char reg_user [100];
    char reg_pass[100];
	int counter1 = 0;

	system("CLS");

	printf("\t\t\t\t-- L O G I N --\n\n");

    printf("Enter the Username: ");
    fgets(sellername, sizeof(sellername), stdin);
    fgets(sellername, sizeof(sellername), stdin);
    sellername[strcspn(sellername, "\n")] = '\0';

    printf("Enter Password: ");
    fgets(sellerpass, sizeof(sellerpass), stdin);
    sellerpass[strcspn(sellerpass, "\n")] = '\0';

    FILE *seller = fopen("C:/Users/Acer/Downloads/sellerdata/seller.txt", "r");

       if (fgets(reg_user, sizeof(reg_user), seller) != NULL && fgets(reg_pass, sizeof(reg_pass), seller) != NULL) {
        reg_user[strcspn(reg_user, "\n")] = '\0';
        reg_pass[strcspn(reg_pass, "\n")] = '\0';
        }

       if (strcmp(sellerpass,reg_user) == 0 && strcmp(sellerpass, reg_pass) == 0) {
            printf("Login Successful\n");
				system("CLS");
				selleredit();
        } else {
            printf("Incorrect username or password\n");
        }
    fclose(seller);

}

int regis()
{
	struct Seller info1;
	char filename[50];
	int counter = 0;

	printf("\t\t\t\t-- R E G I S T R A T I O N --\n\n");

	printf("Enter your name: ");
    fgets(info1.sellername, sizeof(info1.sellername), stdin);
    fgets(info1.sellername, sizeof(info1.sellername), stdin);
    info1.sellername[strcspn(info1.sellername, "\n")] = '\0'; 

    printf("Create your password: ");
    fgets(info1.sellerpass, sizeof(info1.sellerpass), stdin);
    info1.sellerpass[strcspn(info1.sellerpass, "\n")] = '\0'; 

	FILE *sellerinfo = fopen("C:/Users/Acer/Downloads/sellerdata/seller.txt", "w");

    if (sellerinfo != NULL) {
        perror("Error opening file");
        return 1;
    }
	else{
    fprintf(sellerinfo, "%s\n", info1.sellername);
    fprintf(sellerinfo, "%s\n", info1.sellerpass);
	printf("\nRegistration Successful\n");
	back:
	printf("\nPress 1 to continue to login page: ");
	scanf("%d", &counter);

		if(counter == 1)
		{
			system("CLS");
			login();
		}
		else{
			goto back;
		}
	}
    fclose(sellerinfo);
}


void seller(){
	
	int input;

	system("CLS");
	printf("\t\t\t\t-- S E L L E R --\n\n");
	
	printf("     Verify that you are a seller:\n\n\t1 - Log-In\n\t2 - Register\n\n    : ");
	scanf("%d",&input);
	
	switch(input){
		case 1:
			system("CLS");
			login();
			break;
		case 2:
			system("CLS");
			regis();
			break;
		default:
			system("CLS");
			printf("Invalid Input. Try again.\n");
			seller();
	}
}

int buyer() {

    struct Buyer info;
    char filename[100],choice, again,dchoice[100];
    int order, qty, delivery = 10;
    float price, amount = 0;
        
    system("CLS"); 

    printf("       ----- B U Y E R -----\n\n");

    printf("Enter your name: ");
    fgets(info.buyername, sizeof(info.buyername), stdin);
    fgets(info.buyername, sizeof(info.buyername), stdin);
    info.buyername[strcspn(info.buyername, "\n")] = '\0'; 

    printf("ID-Number: ");
    fgets(info.buyerid, sizeof(info.buyerid), stdin);
    info.buyerid[strcspn(info.buyerid, "\n")] = '\0'; 

	pickagain:
	system("CLS");

	printf("---------- Today's Menu ----------\n\n");

    printf("1. Sisig - 60\n");
    printf("2. Menudo - 60\n");
    printf("3. Paksiw - 60\n");
    printf("4. Pinakbet - 60\n");
    printf("5. Adobong Manok - 60\n");
    printf("6. Kaldereta - 60\n");
    printf("7. Kare-kare - 60\n");
    printf("8. Sinigang - 60\n");
    printf("9. Fried Chicken - 60\n");
    printf("10. Dinuguan - 60\n");

    printf("\nEnter the food that you want: ");
    scanf("%d", &order);

    printf("Enter Quantity:");
    scanf("%d", &qty);

    switch (order) {
        case 1:
        case 2:
        case 5:
        case 6:
        case 8:
        case 10:
            price = 60.00;
            break;
        case 3:
            price = 65.00;
            break;
        case 4:
        case 7:
        case 9:
            price = 50.00;
            break;
        default:
            printf("Invalid, choose again\n");
            return 1;
    }

    printf("\nDo you want Delivery? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y') {
        printf("\nDelivery would be additional 10.00\n");
        amount = price * qty + delivery;
    } else {
        amount = price * qty;
    }

    printf("Total Amount: %.2f", amount);
 
    if (choice == 'y' || choice == 'Y') 
    {
    sprintf(filename, "C:/Users/Acer/Downloads/buyer_data/Order_%s.txt", info.buyername);

    FILE *buyerinfo = fopen(filename, "w");
    
    fprintf(buyerinfo, "Name: %s\n", info.buyername);
   	fprintf(buyerinfo, "Id-Number: %s\n", info.buyerid);
    fprintf(buyerinfo, "Order #: %d\n", order);
    fprintf(buyerinfo, "Quantity: %d\n", qty);
    fprintf(buyerinfo, "Delivery: Yes\n");
    fprintf(buyerinfo, "Total Price: %.2f\n", amount);
    }
    else
    {
    sprintf(filename, "C:/Users/Acer/Downloads/reservationdata/Order_%stxt", info.buyername);
    FILE *buyerinfo = fopen(filename, "w");

    fprintf(buyerinfo, "Name: %s\n", info.buyername);
    fprintf(buyerinfo, "Id-Number: %s\n", info.buyerid);
    fprintf(buyerinfo, "Order #: %d\n", order);
    fprintf(buyerinfo, "Quantity: %d\n", qty);
    fprintf(buyerinfo, "Delivery: No\n");
    fprintf(buyerinfo, "Total Price: %.2f\n", amount);
    }

    sprintf(filename, "C:/Users/Acer/Downloads/buyer_data/Order_%s.txt", info.buyername);

    FILE *buyerinfo = fopen(filename, "a+");

    fprintf(buyerinfo, "Name: %s\n", info.buyername);
    fprintf(buyerinfo, "Id-Number: %s\n", info.buyerid);
    fprintf(buyerinfo, "Order #: %d\n", order);
    fprintf(buyerinfo, "Quantity: %d\n", qty);

    if (choice == 'y' || choice == 'Y') 
    {
    fprintf(buyerinfo, "Delivery: Yes\n");
    }
    else
    {
    fprintf(buyerinfo, "Delivery: No\n");
    }

    fprintf(buyerinfo, "Total Price: %.2f\n\n", amount);
    fclose(buyerinfo);

    printf("\nDo you want to order again? (y/n): ");
    scanf(" %c", &again); 

    if (again == 'y' || again == 'Y') {
        system("CLS");
        goto pickagain;
    } else {
        printf("\n\nThank you for ordering! Your food will arrive shortly.\n");
    }

    return 0; 
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