#include <stdio.h>

int suma(int op1, int op2){
    return (op1+op2);
}

int resta(int op1, int op2){
    return (op1-op2);
}

int multiplicacion(int op1, int op2){
    return (op1*op2);
}

int division(int op1, int op2){
    return (op1/op2);
}

int alto(int op1, int op2, int op3){
    return(
    if(op1>op2){
        op1=op3;
    }
    else
    {
        op2=op3;
    });
    
}
int main()
{
        int a=20;
        int b=10;
        int c=0;

        printf("La suma de %d i %d es %d\n", a, b, suma(a,b));
        printf("La resta entre %d i %d es %d\n", a, b, resta(a,b));
        printf("La multiplicacion de %d i %d es %d\n", a, b, multiplicacion(a,b));
        printf("La division entre %d i %d es %d\n", a, b, division(a,b));
        printf("EL numero mas alto es %d", a, b, c, alto(a,b,c));
}