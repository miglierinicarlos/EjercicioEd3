#include <stdio.h>

int main() {
    int num1, num2, suma;

    // Solicitar al usuario que ingrese dos números
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    // Sumar los dos números
    suma = num1 + num2;

    // Mostrar el resultado
    printf("La suma de %d y %d es: %d\n", num1, num2, suma);

    return 0;
}

