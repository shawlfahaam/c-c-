#include <stdio.h>
#include <stdlib.h>

typedef struct{ //have used typeof to rename the structure so that while in main it gets easy to type.

    char name[30];
    int id;
    float salary;
    char experience[50];

} Employee;

int main()
{
    int i, n=5;
    Employee details[n];
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){

        printf("Employee %d:- \n",i+1);
        printf("Name: ");
        scanf("%s",details[i].name);
        printf("Id: ");
        scanf("%d",&details[i].id);
        printf("Salary: ");
        scanf("%f",&details[i].salary);
        printf("Experience: ");
        scanf("%s",details[i].experience);
        printf("\n");
    }

    printf("-------------- All Employees Details ---------------\n");

    for(i=0; i<n; i++){

        printf("Name \t: ");
        printf("%s \n",details[i].name);

        printf("Id \t: ");
        printf("%d \n",details[i].id);

        printf("Salary \t: ");
        printf("%f \n",details[i].salary);

        printf("Experience\t: ");
        printf("%s \n",details[i].experience);

        printf("\n");
    }

    return 0;

}
