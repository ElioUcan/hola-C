#include <stdio.h>
//Math calculator engine Fuctional
//We choose this project because of the functionality that the user can have it
//Is easy and we have experience applying mathematical logic 


int main(){
    float a, b, result = 0;
    printf("Introduce los 2 numeros a sumar, restar, multiplicar y dividir \nFormato\n Suma(a+b)\n Resta(a-b)\n Multiplicacion(a*b)\n Division(a/b)\n");
    scanf("%f %f", &a,&b);
    result = a + b; 
    printf("El resultado de la suma es: %.2f \n", result);
    result = a - b;
    printf("El resultado de la resta es: %.2f \n", result);
    result = a * b;
    printf("El resultado de la multiplicacion es: %.2f \n", result);
    result = a / b;
    printf("El resultado de la division es: %.2f \n", result);
    return 0;
}  
