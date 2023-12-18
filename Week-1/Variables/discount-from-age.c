#include <stdio.h>

/*
Make a function which asks the user's age and prints some messages

Accept the total cost
Accept the user's age
Return the discounted cost
*/

double calculate_discounted_cost(int age, double cost) {
    if (age <= 18) {
        return cost * 0.9;
    } else if (age >= 65) {
        return cost * 0.85;
    }

    return cost;
}

int main(void) {
    int age;
    double cost;

    printf("What's the customer's age: ");
    scanf("%d", &age);
    
    printf("What is the cost: ");
    scanf("%lf", &cost);

    printf("Final amount: ");
    printf("%lf",calculate_discounted_cost(age, cost));

    return 0;
}
