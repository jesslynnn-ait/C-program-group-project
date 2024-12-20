#include <stdio.h>


//main menu
int main(){
    int choice1, choice2;
    while(1){
        printf("\t\t\t**Welcome to the Hotel Management System!\n");
        printf("\t~~\n");
        printf("Please select your role:\n");
        printf("1. Hotel Administrator\n");
        printf("2. Employee\n");
        printf("3. Customer\n");
        printf("4. Exit\n");
        printf("Please select a number between 1 and 4: ");
        scanf("%d", &choice1);
        while(!(choice1>=1 && choice1<=4)){
            printf("Invalid choice, please try again(must be between 1 and 4): ");
            scanf("%d",&choice1);
        }
         switch (choice1) {
                case 1:
                printf("You selected: Hotel Administrator\n");
                printf("1. Register\n");
                printf("2. Login\n");
                printf("3. Back to main menu\n");
                printf("Please enter your choice: :");
                scanf("%d", &choice2);
                while(!(choice2>=1 && choice2<=3)){
                printf("Invalid choice, please try again(must be between 1 and 3): ");
                scanf("%d",&choice2);}
                switch (choice2)
                {
                    case 1:
                    //register_Hotel_Administrator();
                    break;
                    case 2:
                    //login_Hotel_Administrator();
                    break;
                    case 3:
                    break;
                }
                break;
                case 2:
                printf("You selected: Employee\n");
                printf("1. Register\n");
                printf("2. Login\n");
                printf("3. Back to main menu\n");
                printf("Please enter your choice: :");
                scanf("%d", &choice2);
                while(!(choice2>=1 && choice2<=3)){
                printf("Invalid choice, please try again(must be between 1 and 3): ");
                scanf("%d",&choice2);}
                switch (choice2)
                {
                    case 1:
                    //register_employee();
                    break;
                    case 2:
                    //login_employee();
                    break;
                    case 3:
                    break;
                }
               break;
               case 3:
               printf("You selected: Customer\n");
                printf("1. Register\n");
                printf("2. Login\n");
                printf("3. Back to main menu\n");
                printf("Please enter your choice: :");
                scanf("%d", &choice2);
                while(!(choice2>=1 && choice2<=3)){
                printf("Invalid choice, please try again(must be between 1 and 3): ");
                scanf("%d",&choice2);}
                switch (choice2)
                {
                    case 1:
                    //register_costumer();
                    break;
                    case 2:
                    //login_costumer();
                    break;
                    case 3:
                    break;
                }
               break;
               case 4:
               printf("Exiting the system. Goodbye!\n");
               return 0;
        }
    }
}