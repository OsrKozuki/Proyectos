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

    $resultado=strcmp($variable1,$variable2); 
    echo "El resultado es " . $resultado;

    $resultado2=strcasecmp($variable1, $variable2);
    echo "<br>El segundo resultado es " . $resultado2 . "<br>";

    if ($resultado){
        echo "No coincide <br>";
    }else{
        echo "Coinciden <br>";
    }

    if ($resultado2){
        echo "No coincide <br>";
    }else{
        echo "Coinciden <br>";
    }

?>


</body>

</html>