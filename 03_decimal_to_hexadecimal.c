#include<stdio.h>

int main(){
    int decimal_num, rem, i=0, j;
    char  hex_num[25], arr[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    printf("Enter the Decimal number: ");
    scanf("%d", &decimal_num);
    while(decimal_num != 0){
        rem = decimal_num % 16;
        hex_num[i] = arr[rem];
        decimal_num /= 16;
        i++;
    }
    printf("The Octal number is: ");
    for(j=(i-1); j>=0; j--){
        printf("%c", hex_num[j]);
    }
    return 0;
}