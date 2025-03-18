#include<stdio.h>
#include<math.h>
void main() {
    int salario, resto;
    int n100, n50, n20, n10, n5, n2, n1;

    printf("Informe o salario do funcionario: ");
    scanf("%d",&salario);

    n100 = salario / 100;
    resto = salario % 100;
    n50 = resto / 50;
    resto = resto % 50;
    n20 = resto / 20;
    resto = resto % 20;
    n10 = resto / 10;
    resto = resto % 10;
    n5 = resto / 5;
    resto = resto % 5;
    n2 = resto / 2;
    resto = resto % 2;
    n1 = resto;

    printf("%d notas de 100 \n", n100);
    printf("%d notas de 50\n", n50);
    printf("%d notas de 20\n", n20);
    printf("%d notas de 10\n", n10);
    printf("%d notas de 5\n", n5);
    printf("%d notas de 2\n", n2);
    printf("%d notas de 1\n", n1);



}