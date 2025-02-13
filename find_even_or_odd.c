#include<stdio.h>

#include<stdlib.h>

int main(){

   char str[10];

   int num;

 while(1){

   printf("Enter a char :");

   scanf("%s",str);

 if( str[0]== 'Q' || str[0]== 'q'){

        break;

  }

 num = atoi(str);

   if( num % 2==0 ){

         printf("\tIt is even \n");

    }else{

         printf("\tIt is is odd \n");

  }

}

   printf("\nProgram Terminates Sucessfully :)\n");

}
