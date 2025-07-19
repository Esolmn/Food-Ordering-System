#include <stdio.h>
#include <string.h>

struct Order {
  int id;
  char name[50];
  char details[100]; 
};

int main() {
  struct Order order;
  char filename[100];

 
  printf("Enter name: ");

  fgets(order.name, sizeof(order.name), stdin);
  
  order.name[strcspn(order.name, "\n")] = '\0';




  printf("ano order mo pre : ");
  fgets(order.details, sizeof(order.details), stdin);
  order.name[strcspn(order.name, "\n")] = '\0';

 
  
  int order_counter = 1;
  order.id = order_counter++;

 
  sprintf(filename, "C:/Users/User/Desktop/orders/order_%s.txt", order.name);

  FILE *fp = fopen(filename, "w");

  if (fp == NULL) {
    printf("Error \n");
    return 1;
  }


  fprintf(fp, "Name: %s\n", order.name);
  fprintf(fp, "ung order niya: %s\n", order.details);


  fclose(fp);

  

  return 0;
}