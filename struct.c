#include<stdio.h>

struct employee{

    int eid;
    char name[20];
    int age;
 };

int main(){

      struct employee c;

      printf("enter the details of employee(id,name,age)...:");

      scanf("%d",&c.eid);

      scanf("%s",c.name);

      scanf("%d",&c.age);

    printf("employee details are: \n");

    printf("id: %d\n",c.eid);
    printf("Name : %s\n",c.name);
    printf("age :%d\n",c.age);

   printf("_________________________");

}
