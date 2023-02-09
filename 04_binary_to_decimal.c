#include<stdio.h>

int main(){
    int binary_num, decimal_num=0, rem, base=1;
    printf("Enter the Binary number: ");
    scanf("%d", &binary_num);
    while(binary_num != 0){
        rem = binary_num % 10;
        decimal_num = decimal_num + (rem * base);
        binary_num /= 10;
        base *= 2;
    }
    printf("The Decimal number is: %d", decimal_num);
    return 0;
}