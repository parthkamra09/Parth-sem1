#include <stdio.h>

#define EMP_COUNT 100   


struct Employee {
    char name[50];
    float basicPay;
    float grossSalary;
};

float calculateGross(float basicPay) {
    float DA = 0.52 * basicPay;     
    return basicPay + DA;           
}

int main() {
    struct Employee emp[EMP_COUNT];
    int i, n;

    printf("Enter number of employees (up to 100): ");
    scanf("%d", &n);

    if (n > EMP_COUNT || n <= 0) {
        printf("Invalid number of employees!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Basic Pay: ");
        scanf("%f", &emp[i].basicPay);

    
        emp[i].grossSalary = calculateGross(emp[i].basicPay);
    }

    printf("\n--- Employee Gross Salary Details ---\n");
    printf("%-20s %-15s\n", "Name", "Gross Salary");

    for (i = 0; i < n; i++) {
        printf("%-20s %.2f\n", emp[i].name, emp[i].grossSalary);
    }

    return 0;
}
