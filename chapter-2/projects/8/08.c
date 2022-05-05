#include <stdio.h>

int main(void)
{
    float loan, interest, monthly, balance;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest);
  
    printf("Enter monthly payment: ");
    scanf("%f", &monthly);
    
    interest = 1.0f + ((interest / 12.0f) / 100.0f);

    balance = loan * interest - monthly;
    printf("\nBalance remaining after first payment: $%f\n", balance);

    balance = balance * interest - monthly;
    printf("Balance remaining after second payment: $%f\n", balance);

    balance = balance * interest - monthly;
    printf("Balance remaining after third payment: $%f", balance);

    return 0;
}