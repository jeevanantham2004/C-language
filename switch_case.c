#include<stdio.h>
#include<stdlib.h>

int main(){

  char stop[10];

  int day;

while(1){

  printf("\n enter the the num :");

  scanf("%s",stop);

 if(stop[0] == 'q' || stop[0] == 'Q'){

       break;

   }

  day = atoi(stop);

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

          printf("Day 4 : Thursday");

          break;

  case 5:

          printf("Day 5 : Friday");

          break;

  case 6:

          printf("Day 6 : Saturday");

          break;

  case 7:

          printf("Day 7 : Sunday");

          break;

  default:

          printf(" NONE OF THE INPUT MATCHED :)");

 }

}

  printf("PROGRAM EXECUTED SUCCESSFULY \n");

}
