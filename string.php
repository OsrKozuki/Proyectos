<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>String PHP</title>

<style>

    .resaltar{
        color:#F00;
        font-weight: bold;
    }
</style>

</head>
<body>

<?php

    $nombre="Oscar";
    echo "<p class=\"resaltar\">Esto es un ejemplo de frase</p>";
    echo "<p>Hola $nombre</p>";
    echo '<p>Hola $nombre</p>';
    
    // Esto es otro proceso

    $variable1="Casa";
    $variable2="CASA";

    $resultado=strcmp($variable1,$variable2); // Devuelve uno si no son iguales y 0 si son iguales.
    echo "El resultado es " . $resultado;

?>


</body>

</html>