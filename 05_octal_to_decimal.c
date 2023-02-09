#include<stdio.h>

int main(){
    int octal_num, decimal_num=0, rem, base=1;
    printf("Enter the Binary number: ");
    scanf("%d", &octal_num);
    while(octal_num != 0){
        rem = octal_num % 10;
        decimal_num = decimal_num + (rem * base);
        octal_num /= 10;
        base *= 8;
    }
    printf("The Decimal number is: %d", decimal_num);
    return 0;
}