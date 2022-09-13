<!doctype html>
<html>
<head>
    <meta charset="utf-8">
    <title>Learn PHP</title>
</head>
<body>


<?php
    $nombrevariable_novalor;
    $nombrevariable_valor="Hola Mundo";
    $nombre="Perenganito";
    $edad=1024;
    //Vamos a imprimir
    print "<br>Esto es lo primero que hacen todos, hacer un " . $nombrevariable_valor . "<br>";
    print "<br>La variable es $nombrevariable_valor con comillas dobles<br>";
    print '<br>La variable es $nombrevariable_valor con comillas simples<br>';

    echo "<br>Esto es con ECHO y el valor de la variable es $edad<br>";
    echo "<br>Tengo una variable de nombre " . $nombre . " y tiene un edad de " . $edad . " anios, todo esto fue de pura concatenacion<br>";
    echo "<br>" . $nombre,$edad . "<br>";


    /* PARA LAS VARIABLES
    - No se puede usar espacios en blanco
    - No se puede iniciar con numero
    - Siempre se debe de comenzar con el simbolo $
    - No deben de llevar valores extraños
    */


    
?>


</body>

</html>