# **Actividad Make**
# Dimas Valls Juan
------------------------------------------------------
## Gradle

Primero de todo instalaremos gradle usando el comando ``apt install gradle``

Ahora vamos a crear el proyecto, primero de todo necesitaremos un directorio vacio, lo creamos con el comando ``mkdir (nombre)`` , entramos dentro de la carpeta y creamos el proyecto con el comando 

``gradle init   --type java-application \
                --test-framework junit \
                --dsl groovy \
                --project-name holaGradle \
                --package java.gradle ``

Ahora construiremos el proyecto con el comando ``gradle build`` , ahora escribimos ``gradle run`` y lo ejecutamos.

## Añadir dependencias

Ahora añadiremos unas librerias desde la pagina oficial de Maven ( _https://mvnrepository.com/_ ), como ejemplo instalaremos el _Apache Commons Math_ y entraremos en la ultima version y en la opcion de Gradle que nos aparecera algo parecido a esto :

    // https://mvnrepository.com/artifact/org.apache.commons/commons-math3
    compile group: 'org.apache.commons', name: 'commons-math3', version: '3.6.1'

Ahora para hacer funcional esta libreria abriremos el archivo _build.grandle_ y modificaremos 2 cosas, la primera buscaremos la seccion _repositories_ y escribimos 

    mavenCentral() 
    
y la segunda en la seccion de dependencias pegaremos lo que nos ha proporcionado la libreria

    // https://mvnrepository.com/artifact/org.apache.commons/commons-math3
    compile group: 'org.apache.commons', name: 'commons-math3', version: '3.6.1'


La proxima vez que iniciemos el programa nos cargara directamente la libreria _commons-math3_.

Y finalmente, lo ejecutaremos con el comando ``gradle run --args "num1 num2"``.


