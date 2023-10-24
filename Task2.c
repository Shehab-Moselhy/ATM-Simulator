
#include <stdio.h>

float balance = 0.0;

void deposit ();
void withdraw ();
int main(void)
{
    while (1)
    {
        int choice ;
        printf("---------------------------------------\n");
        printf("if you want to deposit, please enter 1\nif you want to withdraw, please enter 2\nif you want to check your balance, please enter 3\nif you want to exict, please enter 4\n");
        printf("---------------------------------------\n");
        printf("Enter your choice >>> ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            deposit();
            break;
        case 2:
            withdraw();
            break;
        case 3:
            printf("your balance = %0.2f\n",balance);
            break;
        case 4:
            printf("Thank you!\n");
            return 0;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    }

}
void deposit ()
{
    float amount = 0;
    printf("Enter the amount you want to deposit it : $");
    scanf("%f",&amount);
    if (amount < 0)
    {
        printf("Invalid amount. Please enter a positive value.\n");
        return;
    }
    
    balance +=amount;
    printf("The amount you deposit = $%0.2f\n",balance);
}
void withdraw ()
{
    float amount = 0;
    printf("Enter the amount you want to withdraw it : $");
    scanf("%f",&amount);

    if (amount < 0) {
        printf("Invalid amount. Please enter a positive value.\n");
        return;

    }
    if (amount > balance)
    {
        printf("Insufficient funds. Your balance is $%.2f\n", balance);
        return;
    }
    balance -=amount;
    printf("The amount you withdraw = $%0.2f\n",balance);
}