#include <stdio.h>
typedef struct employee
{
  char name[20];
  int id;
  float salary;
}se;
int main()
{
  se e1, e2, e3;

  printf("Enter the details of e1:\n");
  printf("Enter the name of e1:");
  scanf("%s", &e1.name);
  printf("Enter the id of e1:");
  scanf("%d", &e1.id);
  printf("Enter the salary of e1:");
  scanf("%f", &e1.salary);
  printf("\n");

  printf("Enter the details of e2:\n");
  printf("Enter the name of e2:");
  scanf("%s", &e2.name);
  printf("Enter the id of e2:");
  scanf("%d", &e2.id);
  printf("Enter the salary of e2:");
  scanf("%f", &e2.salary);
  printf("\n");

  printf("Enter the details of e3:\n");
  printf("Enter the name of e3:");
  scanf("%s", &e3.name);
  printf("Enter the id of e3:");
  scanf("%d", &e3.id);
  printf("Enter the salary of e3:");
  scanf("%f", &e3.salary);
  printf("\n");

  printf("*****Details of all Employees*****");
  printf("\nDetails of e1:\nName is %s\n", e1.name);
  printf("id is %d\n", e1.id);
  printf("Salary is %f\n", e1.salary);

  printf("Details of e2:\nName is %s\n", e2.name);
  printf("id is %d\n", e2.id);
  printf("Salary is %f\n", e2.salary);

  printf("Details of e3:\nName is %s\n", e3.name);
  printf("id id %d\n", e3.id);
  printf("Salary is %f\n", e3.salary);

  return 0;
}