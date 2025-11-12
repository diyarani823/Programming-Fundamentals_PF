#include <stdio.h>

void displayInstructions() {
    printf("This program calculates the total cost of a house after 5 years.\n");
    printf("It includes initial cost, annual fuel cost, and yearly taxes.\n\n");
}

int main() {
    displayInstructions();

    float initialCost, annualFuel, yearlyTax, totalCost;

    printf("Enter initial cost: ");
    scanf("%f", &initialCost);
    printf("Enter annual fuel cost: ");
    scanf("%f", &annualFuel);
    printf("Enter yearly tax: ");
    scanf("%f", &yearlyTax);

    totalCost = initialCost + 5 * (annualFuel + yearlyTax);
    printf("Total cost after 5 years = %.2f\n", totalCost);

    return 0;
}

