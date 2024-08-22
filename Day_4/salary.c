#include <stdio.h>

int main(){

    float basic_salary, total_salary, hra, ta, da;

    printf("Enter the basic salary: ");
    scanf("%f",&basic_salary);

    printf("Enter the hra value: ");
    scanf("%f",&hra);

    printf("Enter the ta value: ");
    scanf("%f",&ta);

    printf("Enter the da value: ");
    scanf("%f",&da);

    hra = (hra / 100) * basic_salary;
    ta = (ta / 100) * basic_salary;
    da = (da / 100) * basic_salary;

    total_salary = basic_salary + hra + ta + da;

    printf("Total salary is: %f",total_salary);

}