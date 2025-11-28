#include <stdio.h>

int main() {
    int choice;
    float amount, converted;

    // Fixed exchange rates (example values)
    float USD_to_INR = 83.20;
    float USD_to_EUR = 0.92;
    float USD_to_GBP = 0.78;
    float USD_to_JPY = 151.10;

    printf("==============================\n");
    printf("       CURRENCY CONVERTER     \n");
    printf("==============================\n\n");

    printf("Convert USD to:\n");
    printf("1. INR (Indian Rupee)\n");
    printf("2. EUR (Euro)\n");
    printf("3. GBP (British Pound)\n");
    printf("4. JPY (Japanese Yen)\n");
    printf("5. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 5) {
        printf("Exiting...\n");
        return 0;
    }

    printf("Enter amount in USD: ");
    scanf("%f", &amount);

    switch (choice) {
        case 1:
            converted = amount * USD_to_INR;
            printf("%.2f USD = %.2f INR\n", amount, converted);
            break;

        case 2:
            converted = amount * USD_to_EUR;
            printf("%.2f USD = %.2f EUR\n", amount, converted);
            break;

        case 3:
            converted = amount * USD_to_GBP;
            printf("%.2f USD = %.2f GBP\n", amount, converted);
            break;

        case 4:
            converted = amount * USD_to_JPY;
            printf("%.2f USD = %.2f JPY\n", amount, converted);
            break;

        default:
            printf("Invalid option!\n");
    }

    return 0;
}
