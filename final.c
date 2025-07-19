#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void line();
void welcome();
void buy_sell(int n);
void buyer();
void seller();
void login();
int regis();
void sun();
void mon();
void tue();
void wed();
void thurs();
void fri();
void sat();
void change_menu();
void show_menu();
void get_order(char menu[10][100]);
void seller_edit();
void view_order();
void exit();
void order_done();
void seller_done();
int total_sales();


int menu = 1;
char filename[100];

struct Buyer{
	char buyername[50];
	char buyerid[50];
}info;

struct Seller
{
	char sellername[50];
	char sellerpass[50];
};

int main(){
clrscr();
	int input;
	welcome();
	getch();
	return 0;

}

void line(){
	
	printf("--------------------------------------------------------------------------------\n");
	
}

void welcome(){
	int input;
	line();
	printf("\t\t\t-- C A M P U S  C R A V I N G S --\n");
	line();
	printf("\n\t\tWelcome to the Alumni Canteen Food Ordering System.\n\n");
	printf("     Are you a:\n\n\t1 - Buyer\n\t2 - Seller\n\n    : ");
	scanf("%d",&input);
	buy_sell(input);
}
void buy_sell(int n){
	switch (n){
		case 1:
			system("CLS");
			buyer();
			break;
		case 2:
            system("CLS");
			seller();
			break;
		default: 
			system("CLS");
			printf("Invalid input. Try again.\n");
			printf("     Are you a:\n\n\t1 - Buyer\n\t2 - Seller\n\n    : ");
			scanf("%d",&n);
			buy_sell(n);
	}
}

void exit(){
	system("CLS");
	line();
	printf("\t\t\t\tT H A N K  Y O U\n");
	line();
	return;
}
void buyer (){
	
    char filename[100],choice, again,dchoice[100];
    int order, qty, delivery = 10;
    float price, amount = 0;


	printf("\t\t\t\t-- B U Y E R --\n");
	line();

    printf("Enter your name: ");
    fgets(info.buyername, sizeof(info.buyername), stdin);
    info.buyername[strcspn(info.buyername, "\n")] = '\0'; 

    printf("ID-Number: ");
    fgets(info.buyerid, sizeof(info.buyerid), stdin);
    info.buyerid[strcspn(info.buyerid, "\n")] = '\0'; 
	
	/*sprintf(filename, "C:/Users/User/Desktop/orders/Order_%s.txt", info.buyername);
    FILE *buyerinfo = fopen(filename, "w");
    
    fprintf(buyerinfo, "Name: %s\n", info.buyername);
    fprintf(buyerinfo, "Id-Number: %s\n", info.buyerid);
	fclose(buyerinfo);*/
	
	system("CLS");
	show_menu();
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

void seller_edit(){
	int input;
	printf("\t\t\t-- W E L C O M E  S E L L E R --\n");
    line();
	printf("   What would you like to do?\n\n");
	printf("\t1 - Change Food Selection.\n\t2 - View Orders\n\t3 - View Total Sales.\n\t4 - Go back to Welcome Page\n\n   : ");
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
			total_sales();
			break;
		case 4:
			system("CLS");
			printf("Going back to the Welcome Page...");
			system("CLS");
			welcome();
			break;

    }
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

void change_menu(){
	int input;
	printf("\t\t\t-- M E N U  S E L E C T I O N --\n");
	line();
	printf("    What day is it today?\n\n");
	printf("\t1 - Sunday\n\t2 - Monday\n\t3 - Tuesday\n\t4 - Wednesday\n\t5 - Thursday\n\t6 - Friday\n\t7 - Saturday\n   : ");
	scanf("%d",&input);
	
	if (input < 0|| input > 7){
		system("CLS");
		printf("Invalid input. Try again.\n");
		change_menu();
	}
	menu = input;
	printf("Menu is changed.\n");
	seller_done();
}

void show_menu(){
	printf("-- W E L C O M E ! - - \n");
	line();
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

void get_order(char menu[10][100]){
	int price = 60, meal, qty, again, receive, i = 0, n;
	float amount=0, total_amount=0;
	char order[100], address[100],deliver[100],reserved[100];
	char Orders[10][100], Numbers[10];
    float Total[10];
	line();
	printf("How would you like to receive your food?\n1 - Delivery (plus 10 pesos)\n2 - Reservation\n   :");
	scanf("%d",&receive);
	
    sprintf(deliver,"C:/Users/Acer/Downloads/deliverydata/Order_%s.txt",info.buyername);
    sprintf(reserved,"C:/Users/Acer/Downloads/reservationdata/Order_%s.txt",info.buyername);	
    FILE *delivery = fopen(deliver, "w");
    FILE *reservation = fopen(reserved, "w");
	line();
	
	printf("Enter the number of the meal you want to order: ");
	scanf("%d",&meal);

	strcpy(order,menu[meal-1]);
	printf("Order: %s\n",order); //for checking only, remove when done
		
	printf("Enter the quantity: ");
	scanf("%d", &qty);
	
	switch(receive){
		case 1:
			amount = qty * price+10;
            break;
        
		case 2:
			amount = qty * price;
            break;
    }
	
	strcpy(Orders[i],order);
	Numbers[i] = qty;
	Total[i] = amount;
	i++;

    if(receive ==1)
    {
            delivery = fopen(deliver, "w");	
	            fprintf(delivery, "Order : %s\n", order);
                fprintf(delivery, "Quantity: %d\n", qty);
                fprintf(delivery, "Total Price: %.2f\n", amount);
				fprintf(delivery, "Mode : Delivery");
                fclose(delivery);
    }
    else{
        reservation = fopen(reserved, "w");	
	            fprintf(reservation, "Order : %s\n", order);
                fprintf(reservation, "Quantity: %d\n", qty);
                fprintf(reservation, "Total Price: %.2f\n", amount);
				fprintf(reservation,  "Mode : Reservation");
                fclose(reservation);
    }
/*	switch(receive){
		case 1: 
            delivery = fopen(deliver, "w");	
	            fprintf(delivery, "Order : %s\n", order);
                fprintf(delivery, "Quantity: %d\n", qty);
                fprintf(delivery, "Total Price: %.2f\n", amount);
				fprintf(delivery, "Mode : Delivery");
                fclose(delivery);
                break;
		case 2:
            reservation = fopen(reserved, "w");	
	            fprintf(reservation, "Order : %s\n", order);
                fprintf(reservation, "Quantity: %d\n", qty);
                fprintf(reservation, "Total Price: %.2f\n", amount);
				fprintf(reservation,  "Mode : Reservation");
                fclose(reservation);
                break;
	}*/
    FILE *view; 
    view= fopen ("C:/Users/Acer/Downloads/orderdata/ORDER.txt", "a");
    fprintf(view, "Name: %s\n", info.buyername);
    fprintf(view, "Id-Number: %s\n", info.buyerid);
    switch(receive){
		case 1: 
				fprintf(view, "Mode : %s\n", "Delivery");
                break;
		case 2:
				fprintf(view,  "Mode : %s\n", "Reservation");
                break;
	}
	fprintf(view, "Order : %s\n", order);
    fprintf(view, "Quantity: %d\n", qty);
    fprintf(view, "Total Price: %.2f\n", amount);
	fclose(view);
	
	again:
	printf("Would you like to order again?\n1 - Yes.\n2 - No, proceed to check out.\n: ");
	getchar();
	scanf("%d",&again);
		if (again == 1){
			show_menu();
		}
		else if (again != 2|| again == 1)
		{
			printf("Invalid Input. Please try again.\n");
			goto again;
		}
	system("CLS");
	printf("-- C H E C K  O U T  S C R E E N --\n");
	line();
	printf("You ordered the following items:\n");
	for (int j = 0; j < i; j++){
		printf("%d \t %s \t %.2f", Numbers[j], Orders[j], Total[j]);
		printf("\n");
		total_amount += Total[j];
	}
	printf("\nTotal: %.2f\n",total_amount);
	
    FILE *sales = fopen("C:/Users/Acer/Downloads/totalsales/sales.txt", "a"); 

        fprintf(sales, "%d\n", (int)total_amount);

    fclose(sales);

	
	line();
	if (receive == 1){
		printf("Enter your delivery address: ");
		gets(address);
  	 	view = fopen("C:/Users/Acer/Downloads/orderdata/ORDER.txt", "a");	
		fprintf(view, "Address : %s\n\n", address);
		fclose(view);
	}
	order_done();

	
}

void order_done(){
	int n;
	printf("Thank you for ordering! Your order will be done soon.\n");
	printf("\n1 - Exit.\n2 - Order again.\n3 - Go back to the Welcome Page.\n   : ");
	scanf("%d",&n);
	switch(n){
		case 1: 
			exit();
			break;
		case 2:
			show_menu();
			break;
		case 3:
			welcome();
			break;
		default:
			order_done();
	}
}

void seller_done(){
	line();
	int n;
	printf("\n1 - Exit.\n2 - Seller Page.\n3 - Go back to the Welcome Page.\n   : ");
	scanf("%d",&n);
	switch(n){
		case 1: 
			exit();
			break;
		case 2:
			seller_edit();
			break;
		case 3:
			welcome();
			break;
		default:
			system("CLS");
			printf("Invalid Input. Please try again.\n");
			order_done();
	}
}

void view_order(){
    system("CLS");
    char string [1000];
 	FILE *view; 
    view= fopen ("C:/Users/Acer/Downloads/orderdata/ORDER.txt", "r");

    while(fgets(string,sizeof(string),view)){

        printf("%s",string);
    
    }
fclose(view);
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
    sellername[strcspn(sellername, "\n")] = '\0';

    printf("Enter Password: ");
    fgets(sellerpass, sizeof(sellerpass), stdin);
    sellerpass[strcspn(sellerpass, "\n")] = '\0';

    FILE *seller = fopen("C:/Users/Acer/Downloads/sellerdata/seller.txt", "r");

       if (fgets(reg_user, sizeof(reg_user), seller) != NULL && fgets(reg_pass, sizeof(reg_pass), seller) != NULL) {
	reg_user[strcspn(reg_user, "\n")] = '\0';
	reg_pass[strcspn(reg_pass, "\n")] = '\0';
	}

       if (strcmp(sellername,reg_user) == 0 && strcmp(sellerpass, reg_pass) == 0) {
	    printf("Login Successful\n");
	    seller_edit();
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

	getchar();
	printf("Enter your name: ");
    fgets(info1.sellername, sizeof(info1.sellername), stdin);
    info1.sellername[strcspn(info1.sellername, "\n")] = '\0'; 

    printf("Create your password: ");
    fgets(info1.sellerpass, sizeof(info1.sellerpass), stdin);
    info1.sellerpass[strcspn(info1.sellerpass, "\n")] = '\0'; 

	FILE *sellerinfo = fopen("C:/Users/Acer/Downloads/sellerdata/seller.txt", "w");

    if (sellerinfo == NULL) {
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

int total_sales(){
    FILE *total_sales = fopen("C:/Users/Acer/Downloads/sellerdata/sales.txt", "r");
    if (total_sales == NULL) {
        perror("Error opening file for reading");
        return 0;
    }

    int sum = 0;
    int number;

    while (fscanf(total_sales, "%d", &number) == 1) {
        sum += number;
    }

    fclose(total_sales);
    printf("-- V I E W I N G  T O T A L  S A L E S --");
	line();
    printf("Total Sales: %d\n", sum);
    seller_done();
    
}