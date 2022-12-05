<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>Learn PHP</title>
</head>
<body>

<?php
    $nombre="Oscar";

    function dameNombre(){

        global $nombre;

        $nombre="El nombre es " . $nombre;
    }

    dameNombre();

    echo $nombre;

?>


</body>

</html>