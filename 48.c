#include <stdio.h>

int main() {
    float salary, bonus;
    printf("Enter your salary: ");
        
    scanf("%f", &salary);
    if (salary > 150000) {
       
        bonus = 0.2 * salary;
    } else {
        
        bonus = 0.1 * salary;
    }
    printf("Bonus: %.2f\n", bonus);

    return 0;
} 
