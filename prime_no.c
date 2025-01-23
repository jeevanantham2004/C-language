#include<stdio.h>

#include<stdlib.h>

int main(){

  char stop[10];

  int i,n,isprime;

 while(1){

     printf("enter a no:");

     scanf("%s",stop);

 if(stop[0] == 'q' || stop[0] == 'Q'){


          break;

  }


 n=atoi(stop);

isprime =1;

if(n <= 1){

    isprime=0;

 }else{

    for(i=2;i*i<=n;i++){

       if(n%i == 0){

           isprime=0;

           break;

}

}

}

if(isprime){

    printf("\nIt is prime number :) \n");

  }else{

    printf("\nIt is no prime number :) \n");

 }


}
   printf("\nPROGRAM EXECUTES SUCCESSFULLY :) \n");

}



