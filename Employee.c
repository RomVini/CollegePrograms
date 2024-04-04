#include <stdio.h>

union Employee {
    int code;
    char name[50];
    int salary;
    int deptno;
};
struct Date {
    int day;
    int month;
    int year;
};

int main() {
    union Employee emp[10];

    //Entering employee information
    for(int i=0;i<10;i++) {
        printf("Employee %d \n",(i+1));
        printf("Employee code: ");
        scanf("%d",&emp[i].code);
        printf("Employee name: ");
        scanf("%s",&emp[i].name);
        printf("Employee salary: ");
        scanf("%d",&emp[i].salary);
        printf("Department number: ");
        scanf("%d",&emp[i].deptno);
        printf("\n");
    }

    //Displaying those with salary>=10000
    printf("Employees with salaray>=10000:\n");
    for(int i=0;i<10;i++) {
        if(emp[i].salary>=10000) {
            printf("Employee code: %d",emp[i].code);
            printf("Employee name: %s",emp[i].name);
            printf("Salary: %d",emp[i].salary);
            printf("Department number: %d \n".emp[i].deptno);
        }
    }

    return 0;
}
