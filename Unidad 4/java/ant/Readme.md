Archivo Calculadora

Ahora haremos una calculador pero esta vez con antes desde java, primero de todo crearemos los archivos "calculadora.java" y "calculo.java".

Le colocaremos nuestros propios paquetes, como podemos ver al inicio de los archivos.

A el archivo "calculadora.java" le añadiremos la funcion de mayorque y en "calculo.java" la frase con la respuesta, estos lo podemos ver arriba en los comandos.

Ahora los compilaremos por separado, mediante los comandos " javac ant/projecte/Calculadora.java" para la calculadora y "javac ant/projecte/Calculo.java" para calculo.

Ahora ejecutaremos la calculadora mediante el comando "java ant.projecte.Calcula (num1)(num2)", en los apartados de num colocaremos los numeros que queramos utilizar.

La suma entre 5.0 i 6.0 és 11.0
La resta entre 5.0 i 6.0 és -1.0
La multiplicació entre 5.0 i 6.0 és 30.0
La divisió entre 5.0 i 6.0 és 0.8333333
El numero major es6.0
Última operació realitzada: Majorque; Últim resultat: 6.0


Apache Ant

Primero de todo instalaremos el paquete ant mediante el comando "apt install ant".

Ahora crearemos el archivo "build.xml", el cual crearemos en el primer directorio de donde tenemos los proyectos creados anteriormente.

Lo compilamos con el comando "ant compile" con la termina abierta en el directorio de antes del primero.

Buildfile: /home/dimas/Proyectos/Unitat 4/java/build.xml

clean:

compile:
    [mkdir] Created dir: /home/dimas/Proyectos/Unitat 4/java/classes
    [javac] Compiling 2 source files to /home/dimas/Proyectos/Unitat 4/java/classes

BUILD SUCCESSFUL
Total time: 4 seconds

Ahora lo ejecutamos con el comando "ant run -Darg0=num1 -Darg1=num2" y nos mostrara el resultado.

Buildfile: /home/dimas/Proyectos/Unitat 4/java/build.xml

clean:
   [delete] Deleting directory /home/dimas/Proyectos/Unitat 4/java/classes

compile:
    [mkdir] Created dir: /home/dimas/Proyectos/Unitat 4/java/classes
    [javac] Compiling 2 source files to /home/dimas/Proyectos/Unitat 4/java/classes

run:
     [java] La suma entre 5.0 i 6.0 és 11.0
     [java] La resta entre 5.0 i 6.0 és -1.0
     [java] La multiplicació entre 5.0 i 6.0 és 30.0
     [java] La divisió entre 5.0 i 6.0 és 0.8333333
     [java] El numero major es6.0
     [java] Última operació realitzada: Majorque; Últim resultat: 6.0

BUILD SUCCESSFUL
Total time: 5 seconds

