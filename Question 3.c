// Create a structure named Complex to represent a complex number with real and imaginary parts. Write a C program to add and multiply two complex numbers.
#include <stdio.h>
struct Complex {
    float real;
    float imag;
};
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}
struct Complex multiplyComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}
int main() {
    struct Complex num1, num2, sum, product;
    printf("Enter the real and imaginary parts of the first complex number:\n");
    printf("Real part: ");
    scanf("%f", &num1.real);
    printf("Imaginary part: ");
    scanf("%f", &num1.imag);
    printf("\nEnter the real and imaginary parts of the second complex number:\n");
    printf("Real part: ");
    scanf("%f", &num2.real);
    printf("Imaginary part: ");
    scanf("%f", &num2.imag);
    sum = addComplex(num1, num2);
    product = multiplyComplex(num1, num2);
    printf("\nSum of the complex numbers: %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Product of the complex numbers: %.2f + %.2fi\n", product.real, product.imag);
    return 0;
}
