<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>Learn PHP</title>
</head>
<body>

<?php

echo "Primer mensaje <br>";
echo "Segundo mensaje <br>";

?>

<?php

function dameDatos(){

    echo "<br>Este es un mensaje dentro de una funcion<br>";

}

    dameDatos();
    dameDatos();
    dameDatos();
    dameDatos();

    include("flujo_dos.php");
    segundaFuncion();

    echo "<br>Mensaje de prueba<br>"

?>


</body>

</html>