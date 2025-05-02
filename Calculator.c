#include <stdio.h>

int main() {
    float a,b;
    printf("Enter a number: ");
    scanf("%f",&a);
    printf("Enter a number: ");
    scanf("%f",&b);
    printf("Add: %f+%f = %f\n",a,b,a+b);
    printf("Sub: %f-%f = %f\n",a,b,a-b);
    printf("Mul: %f*%f = %f\n",a,b,a*b);
    printf("Div: %f/%f = %f\n",a,b,a/b);
    return 0;
}