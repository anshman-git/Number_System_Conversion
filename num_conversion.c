#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


void b_to_d();
void b_to_o();
void b_to_h();

int main()
{
    int choice;
    printf("\n\t\tBinary Convertor\t\t\n");
    printf("1.Binary to Decimal\n2.Binary to Octal\n3.Binary to Hexa-decimal\n\n4.Decimal to Binary\n5.Decimal to Octal\n6.Decimal to Hexa-decimal\n");
    printf("\n7.Octal to Binary\n8.Octal to Decimal\n9.Octal to Hexa-decimal\n\n10.Hexa-decimal to Binary\n11.Hexa-decimal to Decimal\n12.Hexa-decimal to Octal");
    printf("\nEnter your Choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        b_to_d();
        break;
    case 2:
        b_to_o();
        break;
    case 3:
        b_to_h();
        break;
    // case 4:
    //     d_to_b();
    //     break;
    // case 5:
    //     d_to_o();
    //     break;
    // case 6:
    //     d_to_h();
    //     break;
    // case 7:
    //     o_to_b();
    //     break;
    // case 8:
    //     o_to_d();
    //     break;
    // case 9:
    //     o_to_h();
    //     break;
    // case 10:
    //     h_to_b();
    //     break;
    // case 11:
    //     h_to_d();
    //     break;
    // case 12:
    //     h_to_o();
    //     break;
    default:
        printf("--Enter correct option--");
        break;
    }

    return 0;
}

void b_to_d()
{
    int binary;
    int n, digit = 0, i = 0;
    int decimal = 0;
    printf("\nEnter any Binary number :");
    scanf("%d", &binary);
    n = binary;
    while (n != 0)
    {
        digit = n % 10;
        decimal += digit * pow(2, i);
        i++;
        n = n / 10;
    }
    printf("\nDecimal = %d ", decimal);
}
void b_to_o()
{
    int binary;
    int n, rem, i = 0;
    int octa = 0;
    int decimal;

    printf("\nEnter any Binary number :");
    scanf("%d", &binary);
    decimal = btod(binary);
    // printf("%d",decimal);

    // decimal to octal

    while (decimal != 0)
    {
        rem = decimal % 8;
        octa += rem * pow(10, i);
        decimal /= 8;
        i++;
    }

    printf("\nOctal = %d ", octa);
}

void b_to_h()
{
    int binary;
    int rem, a;
    char arr[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int hexa[50], i = 0;
    printf("\nEnter any Binary number :");
    scanf("%d", &binary);

    int decimal = btod(binary);

    // decimal to hexa-decimal

    printf("\nHexa-decimal = ");
    while (decimal != 0)
    {
        rem = decimal % 16;
        hexa[i++] = rem;
        decimal /= 16;
    }
    for (int j = 0; j < i; j++)
    {
        a = hexa[i - 1 - j];
        printf("%c", arr[a]);
    }
}
