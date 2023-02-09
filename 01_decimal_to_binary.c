#include<stdio.h>

int main(){
    int decimal_num, binary_num=0, rem, k=1;
    printf("Enter the Decimal number: ");
    scanf("%d", &decimal_num);
    while(decimal_num != 0){
        rem = decimal_num % 2;
        binary_num += (rem*k);
        k *= 10;
        decimal_num /= 2;
    }
    printf("The Octal number is: %d", binary_num);
    return 0;
}