#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Include stdlib.h for system function

// Define the User struct
struct User {
    char name[100];
    char pass[100];
}user;

// Function prototypes
void registering();
void login();

void registering() {


    printf("Enter Username: ");
    //gets(user.name);
    fgets(user.name, sizeof(user.name), stdin);
    user.name[strcspn(user.name, "\n")] = '\0';

    printf("Enter Password: ");
    //gets(user.pass);
    fgets(user.pass, sizeof(user.pass), stdin);
    user.pass[strcspn(user.pass, "\n")] = '\0';

    FILE *seller = fopen("C:/Users/User/Desktop/Pass/seller.txt", "w");
    if (seller == NULL) {
        perror("Error opening file");
        return;
    }

    fprintf(seller, "%s\n", user.name);
    fprintf(seller, "%s\n", user.pass);
    fclose(seller);

    printf("Registration Successful\n");
}

void login() {

    char username[100];
    char password[100];
    char reg_user [100];
    char reg_pass[100];
    printf("Enter the Username: ");
    //gets(username);
    
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0';

    printf("Enter Password: ");
    //gets(password);
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0';

    FILE *seller = fopen("C:/Users/User/Desktop/Pass/seller.txt", "r");

       if (fgets(reg_user, sizeof(reg_user), seller) != NULL &&
        fgets(reg_pass, sizeof(reg_pass), seller) != NULL) {
        // Remove newline characters from stored credentials
        reg_user[strcspn(reg_user, "\n")] = '\0';
        reg_pass[strcspn(reg_pass, "\n")] = '\0';
        }


       if (strcmp(username,reg_user) == 0 && strcmp(password, reg_pass) == 0) {
            printf("Login Successful\n");
        } else {
            printf("Incorrect username or password\n");
        }

    fclose(seller);
}

int main() {
    int choice;

    printf("Register (1) or Log In (2): ");
    scanf("%d", &choice);

    getchar(); 

    if (choice == 1) {
        system("CLS");
        registering();
    } else if (choice == 2) {
        system("CLS");
        login();
    }

    return 0;
}