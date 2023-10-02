//
#include <stdio.h>

int main() {
    float kb;
    printf("Enter the value in kb:");
    scanf("%f",&kb);


    printf("The answer in MB is : %f",kb/1000);
    printf("The answer in GB is : %f",kb/1000000);
    printf("The answer in TB is : %f",kb/1000000000);
    return 0;
}