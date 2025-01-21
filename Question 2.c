//Design a structure named &quot;Car&quot; to store details like car ID, model, and rental rate perday. Write a C program to input data for three cars, calculate the total rental cost for a specified number of days, and display the results.

#include <stdio.h>
struct Car {
    int carID;
    char model[50];
    float rentalRatePerDay;
};
int main() {
    struct Car cars[3];
    int numDays;
    float totalCost;
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Car %d:\n", i + 1);
        printf("Car ID: ");
        scanf("%d", &cars[i].carID);
        printf("Model: ");
        scanf("%s", cars[i].model);
        printf("Rental Rate Per Day: ");
        scanf("%f", &cars[i].rentalRatePerDay);
        printf("\n");
    }
    printf("Enter the number of days to calculate total rental cost: ");
    scanf("%d", &numDays);
    totalCost = 0;
    printf("\nCar Details and Rental Costs:\n");
    for (int i = 0; i < 3; i++) {
        float carCost = cars[i].rentalRatePerDay * numDays;
        printf("Car %d:\n", i + 1);
        printf("Car ID: %d\n", cars[i].carID);
        printf("Model: %s\n", cars[i].model);
        printf("Rental Rate Per Day: %.2f\n", cars[i].rentalRatePerDay);
        printf("Rental Cost for %d days: %.2f\n\n", numDays, carCost);
        totalCost += carCost;
    }
    printf("Total Rental Cost for %d days: %.2f\n", numDays, totalCost);
    return 0;
}
