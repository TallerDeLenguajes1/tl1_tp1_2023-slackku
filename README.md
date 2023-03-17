# tl1_tp1_2023-slackku
Desarrollo de las actividades planteadas para en el Trabajo Practico N° 1 de Taller de Lenguajes 1
## Respuestas
**Punto 2**  
**¿Qué es '.gitignore'?** 

Es un archivo que le brinda informacion a Git, sobre que archivos ignorar.

**¿Por qué es conveniente incluirlo?**
    
Disminuir el peso en memoria del repositorio, con archivos innecesarios y/o ajenos al funcionar del programa.


**¿Cuándo se debe hacer?**

Conviene incluirlo para los casos como los siguientes:
 - Ejecutables: en el caso de programas de C.
 - Paquetes de entorno: la carpeta node_modules de NodeJs.
- Archivos con información sensible.
- Codigo compilado: .class, .o.
- Logs, etc...
Archivos prescindibles o archivos que se pueden obtener de otra forma, como el caso de dependencias como "node_modules", almacen de paquetes de NodeJs a través de NPM.

**¿Cómo configurar el archivo .gitignore?**

La escritura del archivo sigue las siguientes estructuras

Comentarios
```
 # Que onda bro, soy un comentario
```
Ignorar todos los archivos de determinado tipo:

```
*.txt
*.pdf
*.png
```
Para archivos especificos, se ingresa su nombre y su respectivo tipo de archivo (sease .docx, .pptx, etc).

Eliminar carpeta

```
/nombreCarpeta
/carpetaSecreta_noMirarPlis

```

### Ejemplo:
A tener en cuenta el siguiente escenario:

El archivo `ignorado.txt` existe y se encuentra en nuestra carpeta raiz y `.gitignore` no existe.

- Situamos nuestra consola dentro de la carpeta.
- Ingresamos el siguiente comando:
```
echo ignorado.txt >> .gitignore
```
Con ese comando ya abremos creado `.gitignore` y habremos ingresado la regla de ignorar al archivo `ignorado.txt`