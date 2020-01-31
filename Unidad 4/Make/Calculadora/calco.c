#include <stdio.h>

int suma(int op1, int op2){
    return (op1+op2);
}

int resta(int op1, int op2){
    return (op1-op2);
}

int multiplica(int op1, int op2){
    return (op1*op2);
}

int divideix(int op1, int op2){
    return (op1/op2);
}

int mayor(int op1, int op2){
    int n1=op1;
    int n2=op2;
    int n3=0;
    if (op1>op2)
    {
        n1=n3;
    }
    else
    {
        n2=n3;
    }
    return n3;
    
}

int main()
{
        int a=10;
        int b=5;

        printf("La suma de %d i %d és %d\n", a, b, suma(a,b));
        printf("La resta entre %d i %d és %d\n", a, b, resta(a,b));
        printf("La multiplicació de %d i %d és %d\n", a, b, multiplica(a,b));
        printf("La divisió entre %d i %d és %d\n", a, b, divideix(a,b));
        printf("EL numero mas alto es %d", mayor(a,b));
}