#include <stdio.h>          
#include <stdlib.h>         
                            
int main()
{
    int case_no, n = 0;
    // variable for binary
    int rem, k=1, binary_num = 0, base = 1;

    printf("1. Decimal to Binary\n2. Decimal to Octal\n3. Decimal to Hexadecimal\n4. Binary to Decimal\n5. Octal to Decimal\n6. Hexadecimal to Decimal\n0. for Exit\nEnter the Your coise: ");
    scanf("%d", &case_no);

    // Input for Decimal number if case_no is 1, 2, 3
    if (case_no < 4 && case_no > 0)
    {
        printf("Enter the Decimal number: ");
        scanf("%d", &n);
    }

    switch (case_no)
    {
    // Print Binary or Octal or Hexadecimal number
    case 1:
        // Decimal into Binary
        while (n != 0)
        {
            rem = n % 2;
            binary_num += (rem * k);
            k *= 10;
            n /= 2;
        }
        printf("The Binary number is: %i", binary_num);
        break;

    case 2:
        printf("The octal number is: %o", n);
        break;

    case 3:
        printf("The Hexadecimal number is: %x", n);
        break;

    // Input Binary or Octal or Hexadecimal number
    case 4:
        printf("Enter the Binary number: ");
        scanf("%d", &binary_num);
        while (binary_num != 0)
        {
            rem = binary_num % 10;
            n = n + (rem * base);
            binary_num /= 10;
            base *= 2;
        }
        break;

    case 5:
        printf("Enter the Octal number: ");
        scanf("%o", &n);
        break;

    case 6:
        printf("Enter the Hexadecimal number: ");
        scanf("%x", &n);
        break;

    case 0:
        printf("Thanks for using this code - ThankYouCode\n");
        exit(0);
        break;

    default:
        printf("Some thing went wrong\n");
        break;
    }

    if (case_no > 3)
    {
        printf("The Decimal number is: %d", n);
    }

    printf("\n\n");
    return 0;
}