//

#include <stdio.h>

int main () {
    int y , m,x, c, z;
    printf("Enter the slope i.e m :");
    scanf("%d",&m);
    printf("Enter the x co-ordinate x :");
    scanf("%d", &x);
    printf("Enter the constant i.e c :");
    scanf("%d",&c);
    printf("Enter the value of y :");

    scanf("%d",&y);

    z = (m*x) + c;
     printf("The line is not straight");;


     printf("The line is straight");

     return 0;
}