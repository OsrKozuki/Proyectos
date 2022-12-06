# Para leer guiones se necesita referenciar 
#con ./l, tirando la ruta absoluta, o poner 
#asterisco pero se listaria todo lo interno
#O con dolar y parentisis para indicar el output
#de un comando a nivel de sistema

#Para englobar espacios se puede usar tabulador
#Tabulador
#Con asterisco
#COn comillas, etc
cat spaces\ in\ this\ filename 
cat "spaces in this filename"
cat ./*

#La explicacion del siguiente comando es la siguiente
find . -type f -printf "%f\t%p\t%u\t%g\t%m\n"| column -t
#find sirve para encontrar archivos
#El punto despues de find es para recursivo
#El argumento "-type f" indica que solo archivos, no carpetas
#El argumento indicar que se debe imprimir lo siguiente
# %f = archivo
# t%p  = la ruta absoluta del archivo
# t%u = Usuario propietario
# t%g = El modo o grupo asignado
# t%m = Permisos en forma numerica
#El comando column ordena solamente.

# EL comando xargs permite ejecutar un comando dado
#por la salida de otro, va despues del pipe
#Tambien formatea outputs

awk "NR==NUMERO" #Sirve para mostrar la linea solo de dicho numero

# Para mover los errores a nivel UNIX se usa lo siguiente al final
#del comando

2>/dev/null

#Para imprimir la ultima columna se puede usar:
awk 'NF{print $NF}'

 # Para imprimir cadenas de texto unicas que nunca se han repetido, primero ordenamos
 # con sort y despues aplicamos uniq

 COMANDO CAT | sort | uniq -u #Sin el parametro imprime las demas lineas pero solo una vez.

 #El siguiente comando
 contador=1; strings data.txt | grep "==="  | while read line; do echo "Linea $contador: $line"; let contador+=1; done | awk 'NR==4'| awk 'NF{print $NF}'
 #Se puede explicar de la siguiente manera:
 contador=1; # Declaramos una variable que iremos incrementando
 strings data.txt #Imprime los caracteres legibles para humanos
 while read line; do echo "Linea $contador: $line"; let contador+=1; done
 # En el comando se lee cada linea, se imprime contador, y despues de cada lectura se suma mas 1 al contador
abcdefghijklmnopqrstuvwxyz

tr '[T-ZA-St-za-s]' '[G-ZA-Fg-za-f]'

wbWdlBxEir4CaE8LaPhauuOo6pwRmfrDw #Bandit13

 
