#include<stdio.h>

#include<stdlib.h>


int main(){

    char stop[10];
    int day;

while(1){

  printf(" \nenter the day no:");

  scanf("%s",stop);


if(stop[0]=='Q' || stop[0]=='q'){

      break;

   }


  day=atoi(stop); // Here atoi - ASCII to Integer :)


  switch(day){

    case 1:

            printf("Day 1 : Monday");

            break;
    case 2:

            printf("Day 2 : Tuesday");

            break;

    case 3:

            printf("Day 3 : Wednesday");

            break;

    case 4:

            printf("Day 4 : Thursday ");

            break;

    case 5:

            printf("Day 5 : Friday");

            break;

    case 6:

            printf("Day 6 : Saturdat");

            break;

    case 7:

            printf("Day 7 : Sunday");

            break;

    default:

            printf("Not in list");

     }

}

 printf("\nExiting the program\n");


}
