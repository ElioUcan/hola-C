#include <stdio.h>
//Math calculator engine Functiona
//We choose this project because of the functionality that the user can have it
//Is easy and we have experience applying mathematical logic 


int main(){
    float a, b, result = 0;
    printf("Introduce 2 numbers to sum, substract, multiply and divide \nFormat\n Sum(a+b)\n Sub(a-b)\n Multiply(a*b)\n Division(a/b)\n");
    scanf("%f %f", &a,&b);
    result = a + b; 
    printf("Result of sum: %.2f \n", result);
    result = a - b;
    printf("Result of the substraction: %.2f \n", result);
    result = a * b;
    printf("Result of the multiply is: %.2f \n", result);
    result = a / b;
    printf("Resultado of the division is: %.2f \n", result);
    return 0;
}  
