#include <stdio.h>

int MainMenu(){
    printf("welcome");
    printf("\n 1. Register");
    printf("\n 2. login");
    return 0;
}
int main(){
    MainMenu();
    int choice;
    printf("\n enter your choice (1 or 2)");
    scanf("%d",&choice);
    switch (choice){
        case 1:
        Register();
        case 2:
        login();
        default:
        printf("\n invalid input try again");
        main();

    }
    return 0;
}
int Register(){
    printf("\n1. Hotel Administrators");
    printf("\n2. employee");
    printf("\n3. customer");
    printf("\n4. Back to main menu");
    int choice;
    printf("\nenter your choice: ");
    scanf("%d", &choice);
    switch (choice){
        case 1:
        reg_admin_menu();
        case 2:
        reg_emp_menu();
        case 3:
        reg_cost_menu();
        case 4:
        main();
        default:
        printf("\ninvalid input please try again");
        Register();
    }
    return 0;
}
int login(){
    printf("\n1. Hotel Administrators");
    printf("\n2. employee");
    printf("\n3. customer");
    printf("\n4. Back to main menu");
    int choice;
    printf("\nenter your choice: ");
    scanf("%d", &choice);
    switch (choice){
        case 1:
        log_admin_menu();
        case 2:
        log_emp_menu();
        case 3:
        log_cost_menu();
        case 4:
        main();
        default:
        printf("\ninvalid input please try again");
        login();
    }
    return 0;
}