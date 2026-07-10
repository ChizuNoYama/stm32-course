#include <stdio.h>
#include <stdint.h>


void odd_or_even(){

    int32_t num1;

    printf("Enter a number\n");
    scanf("%d", &num1);

    if(num1 & 1)
    {
        printf("Number %d is odd", num1);
    }
    else
    {
        printf("Number is %d even", num1);
    }
}

int main(){

    odd_or_even();

    return 0;
}
