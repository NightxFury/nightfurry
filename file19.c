//

#include<math.h>
#include<stdio.h>

int main () {
    float a ,b ,c, s, z;
    printf("Enter the side a :");

    scanf("%f",a);

    printf("Enter the sides");

    scanf("%f\n : %f",&b,&c);

    printf("Enter the semi-perimeter of the triangle :");

    scanf("%f", &s);

    z = s*(s -a) * (s-b)*(s-c);
            printf("The area of the given triangle with heron formula is %f",sqrt(z));

    return 0;

}