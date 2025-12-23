#include <stdio.h>
#include <string.h>
struct EmployeeStruct {
    int id;
    float salary;
    char name[20];
};
union EmployeeUnion {
    int id;
    float salary;
    char name[20];
};
int main() {
    struct EmployeeStruct s1;
    s1.id = 101;
    s1.salary = 50000.50;
    strcpy(s1.name, "Alice");
    printf("--- Structure Output ---\n");
    printf("Size of Struct: %lu bytes\n", sizeof(s1));
    printf("ID: %d, Salary: %.2f, Name: %s\n\n", s1.id, s1.salary, s1.name);
    union EmployeeUnion u1;
    u1.id = 101;                
    u1.salary = 50000.50; 
    strcpy(u1.name, "Alice"); 
    printf("--- Union Output ---\n");
    printf("Size of Union: %lu bytes\n", sizeof(u1));
    printf("ID: %d\n", u1.id);         
    printf("Salary: %.2f\n", u1.salary); 
    printf("Name: %s\n", u1.name);     
        return 0;
}
