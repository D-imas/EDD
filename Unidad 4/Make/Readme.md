# **Actividad Make**
# Dimas Valls Juan
------------------------------------------------------
## HolaMundo
Primero, instalaremos el programa make con el comando 
``sudo apt-get install make``
Ahora haremos un pequeño programa llamado hola.c, con un pequeño programa como este:


    #include <stdio.h>

    int main()
    {
    
        printf("Hola mundo\n");
            return 0;
    }

Ahora lo compilamos con el comando ``gcc hola.c``, nos creara un un archivo _a.out_, si queremos cambiar el nombre gastaremos el comando ``gcc hola.c -o ola``, con esto, el archivo pasara a llamarse _ola_. 
Para ver como funciona make, lanzaremos ``make hola`` y nos mostrara todo lo relacionado con hola.

## Calculadora

Ahora creamos el archivo calco.c, con el codigo fuente de la calculadora:

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

Luego esto lo pasaremos a 2 archivos diferentes, en uno colocaremos las funciones, este se llamara _calc.c_ :

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
y en el otro colocaremos las librerias, llamado _calc.h_ :

    #ifndef MYCALC
    #define MYCALC

    int suma(int op1, int op2);
    int resta(int op1, int op2);
    int multiplica(int op1, int op2);
    int divideix(int op1, int op2);
    int mayor(int op1, int op2);

    #endif

Ahora compilaremos el archivo _calc.c_ y pasara a ser _calc.o_ ``gcc -c calco.c -o calc.o`` .

Ahora compilaremos para obtener la calculadora final, a la que llamaremos _calculos_, juntando los dos archivos creados anteriormente con el comando ``gcc calc.o calc.h -o calculos`` .
Esto nos dara ya un ejecutable, lo accionaremos con ``./calculos`` y nos saldra el resultado.
    
    La suma de 10 i 5 és 15
    La resta entre 10 i 5 és 5
    La multiplicació de 10 i 5 és 50
    La divisió entre 10 i 5 és 2
    El numero mas alto es 10