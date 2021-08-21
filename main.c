#include <stdio.h>

int swap(int *r_num1, int *r_num2);

int main(){

    int c=10;
    int b=20;

    swap(&c, &b);
    printf("c = 10 => %d\nb = 20 => %d",c,b);

    return 0;
}

int swap(int *r_num1, int *r_num2){

    *r_num1 =20;
    *r_num2 =10;
      
}