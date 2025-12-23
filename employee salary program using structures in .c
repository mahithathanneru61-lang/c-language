#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float basic;
    float hra;
    float da;
    float gross_salary;
};
int main() {
    int n, i;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee emp[n];
    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Basic Salary: ");
        scanf("%f", &emp[i].basic);
        emp[i].hra = 0.20 * emp[i].basic;
        emp[i].da = 0.80 * emp[i].basic;
        emp[i].gross_salary = emp[i].basic + emp[i].hra + emp[i].da;
    }
    printf("\n\nEmployee Salary Details:\n");
    printf("ID\tName\t\tBasic\tHRA\tDA\tGross Salary\n");
    printf("----------------------------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t\t%.2f\t%.2f\t%.2f\t%.2f\n", 
               emp[i].id, emp[i].name, emp[i].basic, 
               emp[i].hra, emp[i].da, emp[i].gross_salary);
    }
    return 0;
}
