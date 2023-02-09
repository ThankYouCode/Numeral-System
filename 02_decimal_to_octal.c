#include<stdio.h>

int main(){
    int decimal_num, octal_num=0, rem, k=1;
    printf("Enter the Decimal number: ");
    scanf("%d", &decimal_num);
    while(decimal_num != 0){
        rem = decimal_num % 8;
        octal_num += (rem*k);
        decimal_num /= 8;
        k *= 10;
    }
    printf("The Octal number is: %d", octal_num);
    return 0;
}