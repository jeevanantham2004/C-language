#include<stdio.h>
#include<stdlib.h>

int main(){

  int a,b,result=1;

  printf("Enter a no( BASE ):");

  scanf("%d",&a);

  printf("Enter a no( EXPONENT ):");

  scanf("%d",&b);

 for(int i=0;i<b;i++){

     result *= a;

}

int last_no = result % 10;



printf("%d ^ %d = %d\n",a,b,last_no);

}



