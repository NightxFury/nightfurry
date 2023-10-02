#include <stdio.h>

int main () {
    int a, b, c;

    printf("Enter the angle of the triangle a:");
    scanf("%d",&a);

    printf("Enter the angle of the triangle b:");
    scanf("%d,&b");

    printf("Enter the angle of the triangle c:");
    scanf("%d",&c);

    if(a == 90) {
        printf("The triangle is a right angled");

    }
    else if(b == 90) {
        printf("The triangle is a right angled");
    } else if (c == 90) {
        printf("The triangle is right angled");

    } else {
        printf("The triangle is not a right angled tri-angle");
    }
}