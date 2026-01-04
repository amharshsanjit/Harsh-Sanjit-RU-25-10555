#include <stdio.h>

int main() {
    // Variables for input and storage
    float principal, rate, balance, yearlyInterest;
    int years;

    // Step 1: Ask user for details
    printf("--- Indian Bank Interest Simulator ---\n");
    printf("Enter Principal Amount (Rs.): ");
    
    // Step 2: Read values
    scanf("%f", &principal);
    
    printf("Enter Rate of Interest (%%): ");
    scanf("%f", &rate);
    
    printf("Enter Number of Years: ");
    scanf("%d", &years);

    // Step 3: Set initial balance
    balance = principal;

    // Steps 4 to 8: Calculation Loop
    for (int i = 1; i <= years; i++) {
        // Step 5: Calculate interest for that year
        yearlyInterest = balance * (rate / 100);

        // Step 6 & 7: Update balance
        balance = balance + yearlyInterest;
    }

    // Step 9 & 10: Store and Print Final Balance
    printf("\n--------------------------------------\n");
    printf("TOTAL INVESTMENT PERIOD: %d Years\n", years);
    printf("FINAL BALANCE:           Rs. %.2f\n", balance);
    printf("--------------------------------------\n");

    return 0;
}