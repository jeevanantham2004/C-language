#include<stdio.h>

struct employee{


      int eid;

      char name[10];

      int age;

};


int main(){


     struct employee e[10];

     int n,i;

     printf("enter the number of employees:");

     scanf("%d",&n);

     printf("enter the details of employees(id,name,age)..:\n");

     for(int i=0;i<n;i++){

       printf("employees start :%d\n",i+1);

       scanf("%d",&e[i].eid);

       scanf("%s",e[i].name);

       scanf("%d",&e[i].age);

     }

     printf("the employees details are:) \n");

    for(int i=0;i<n;i++){

     printf("employee %d",i+1);

      printf("Id:%d\n",e[i].eid);

      printf("Name :%s\n",e[i].name);

      printf("Age :%d\n",e[i].age);

       }

    printf("___________________________");

   }
