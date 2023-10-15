//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    int d, remainder, i = 0;
//    char binary[32]; // Assuming a 32-bit binary number
//
//    printf("Enter a decimal number: ");
//    scanf("%d", &d);
//
//    if (d == 0) {
//        printf("Binary number: 0\n");
//        return 0;
//    }
//
//    while (d > 0) {
//        remainder = d % 2;
//        binary[i] = remainder + '0';
//        d /= 2;
//        i++;
//    }
//
//    printf("Binary number: ");
//
//     Print the binary number in reverse order
//    for (int j = i - 1; j >= 0; j--) {
//        printf("%c", binary[j]);
//    }
//
//    printf("\n");
//
//    return 0;
//}