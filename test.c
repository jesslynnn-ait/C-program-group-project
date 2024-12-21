#include <stdio.h>

// Function to display a menu and get the user's choice
int custom_menu(const char*title,const char*options[],int num_op)
{
    int choice;
    printf("%s\n",title);
    for (int i = 0; i < num_op; i++){
        printf("%d. %s\n", i + 1, options[i]);
    }
    printf("Please select a number between 1 and %d: ",num_op);
    scanf("%d", &choice);
    while (!(choice>=1 && choice<=num_op)){
        printf("Invalid choice, please try again (must be between 1 and %d): ", num_op);
        scanf("%d",&choice);
    }
    return choice;
}

// Main menu
int main()
{
    int choice1, choice2;
    const char*main_menu_options[]={
        "Hotel Administrator",
        "Employee",
        "Customer",
        "Exit"
    };
    const char*sub_menu_options[]={
        "Register",
        "Login",
        "Back to main menu"
    };

    while(1){
        choice1=custom_menu("\t\t\t**Welcome to the Hotel Management System!\n\t~~\nPlease select your role:",main_menu_options,4);
        switch(choice1){
            case 1:
                printf("\t#### You selected: Hotel Administrator ####\t\n");
                choice2 = custom_menu("Please enter your choice:",sub_menu_options,3);
                switch(choice2)
                {
                    case 1:
                        // register_Hotel_Administrator();
                        break;
                    case 2:
                        // login_Hotel_Administrator();
                        break;
                    case 3:
                        break;
                }
                break;
            case 2:
                printf("\t#### You selected: Employee ####\t\n");
                choice2 = custom_menu("Please enter your choice:",sub_menu_options,3);
                switch(choice2)
                {
                    case 1:
                        // register_employee();
                        break;
                    case 2:
                        // login_employee();
                        break;
                    case 3:
                        break;
                }
                break;
            case 3:
                printf("\t#### You selected: Customer ####\t\n");
                choice2=custom_menu("Please enter your choice:",sub_menu_options,3);
                switch(choice2)
                {
                    case 1:
                        // register_customer();
                        break;
                    case 2:
                        // login_customer();
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
