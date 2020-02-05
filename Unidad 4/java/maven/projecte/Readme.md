Primero de todo, instalaremos el paquete de Maven mediante el comando ``apt install maven``

Comenzaremos lanzando una primera orden en la terminal :
mvn archetype:generate -DgroupId=java.maven -DartifactId=myHelloMVN -DarchetypeArtifactId=maven-archetype-quickstart -DinteractiveMode=false

Dentro de la carpeta _myHelloMVN_ que nos ha creado, habra un fichero llamado _pom.xml_ con el cual vamos a interactuar a continuacion.

Las ultimas versiones de Maven no soportan la compilacion con Java asi que deberemos abrir el archivo y colocar lo siguiente :
    <properties>
        <maven.compiler.source>1.6</maven.compiler.source>
        <maven.compiler.target>1.6</maven.compiler.target>
    </properties>

Ahora ejecutameros el comando ``mvn compile`` para compilarlo desde la carpeta raiz.

Para poder ejecutar la aplicacion _App.class_ la volveremos a cambiar remplazando unos directorios con el comando ``java -cp target/classes java.App``

Dentro de la carpeta _target_ encontraremos el ejecutable, que accionaremos con el comando ``java -cp target/myHelloMVN-1.0-SNAPSHOT.jar java.App``