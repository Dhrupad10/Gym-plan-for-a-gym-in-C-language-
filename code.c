#include <stdio.h>

int main() {
  int choice;
  char plan ;
  int price;
  char option;

  printf("Welcome To Fitness Gym!\n");
  printf("Select your membership type: \n");
  printf("1.Monthly\n2.Annual\n");
  printf("Enter 1 for Monthly and 2 for Annual: ");

  scanf(" %d", &choice);
  
  if(choice==1){
    printf("Select plan from below: \n");
    printf(" 1.Premium\n 2.Standard\n 3.Basic\n");
    scanf(" %c", &plan);

    if(plan == '1'){
      price = 2000;
      printf("Plan cost: %d\n", price);

      printf("Do you need a personal trainer : ");
    scanf(" %c", &option);
    if(option == 'y' ){
    
      printf("Plan Cost with Trainer : %d\n", price + 500);
    }

    }
    else if(plan == '2'){
      price = 1500;
      printf("Plan cost : %d\n", price);
      printf("Do you need a personal trainer : ");
    scanf(" %c", &option);
    if(option == 'y' ){
    
      printf("Plan Cost with Trainer : %d\n", price + 500);
    }
    }

    else if(plan =='3'){
      price = 1000;
      printf("Plan cost : %d\n", price);
      printf("Do you need a personal trainer : ");
    scanf(" %c", &option);
    if(option == 'y' ){
    
      printf("Plan Cost with Trainer : %d\n", price + 500);
    }
    }
    }

    if(choice == 2){
      printf("Select plan from below: \n");
      printf(" 1.Premium\n 2.Standard\n 3.Basic\n");
      scanf(" %c",&plan );

      if(plan == '1'){
        price = 20000;
        printf("Plan cost :%d\n", price);

        printf("Do you need a personal trainer : ");
        scanf(" %c", &option);
        if(option == 'y' ){
    
        printf("Plan Cost with Trainer : %d\n", price + 5000);
    }
      }

      else if(plan == '2'){
        price = 15000;
        printf("Plan cost: %d\n", price);

        printf("Do you need a personal trainer : ");
        scanf(" %c", &option);
        if(option == 'y' ){
    
        printf("Plan Cost with Trainer : %d\n", price + 5000);
    }
      }

      else if(plan == '3'){
        price = 10000;
        printf("Plan cost : %d\n", price);

        printf("Do you need a personal trainer : ");
        scanf(" %c", &option);
        if(option == 'y' ){
    
        printf("Plan Cost with Trainer : %d\n", price + 5000);
    }
      }
    }
   return 0;
  }
