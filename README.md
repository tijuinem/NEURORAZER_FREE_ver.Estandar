NEURORAZER FREE ver.Estándar
=============================

###Versión gratuita del juego NeuroRacer. 1 coche. version Estándar

NeuroRAZER es un videojuego de coches gratuito creado para mejorar el rendimiento cognitivo. NeuroRAZER versión "Estándar" es la versión libre del juego y proyecto comercial **Neuroracer**;. El NeuroRacer (con C) oficial (The Gazzaley Lab) es el resultado de la investigación realizada por un grupo de científicos de la Universidad de California, publicada en la revista científica británica Nature.  Según sus estudios los juegos de Brain-Training no cumplen este cometido y su uso no mejora estas capacidades si no que hacen que el jugador mejore solo a nivel de práctica en esos juegos concretos.
Los investigadores desarrollaron un videojuego con el que se puede medir y reparar el deterioro neuronal relacionado con el envejecimiento. Se trata de controlar un vehículo en el que el jugador podría tener una única tarea o varias al mismo tiempo. En el original, se trata de un solo coche, en el que cada cierto tiempo aparece un punto verde en pantalla y el jugador tiene que pulsar cierta tecla para que desaparezca. 
Tras seis meses de continuado entrenamiento, los voluntarios, no solo mejoraron esa capacidad sino que también llegaron a superar los resultados de los jóvenes de 20 años que no se habían entrenado de esa forma. “Me gusta la idea de que se pueda intervenir en el envejecimiento de las personas y que los mayores puedan mejorar sus capacidades cognitivas jugando”, dijo Gazzale.


###Historia
Cuando leí la noticia (nov2013) me pareció interesante y busqué una forma de descargar-comprar el juego oficial. No lo vi por ningún sitio y me propuse hacer una versión libre , y Open Source, del juego para un coche. Algo típico: movimiento general, carga de pantalla aleatorias, y la aparición del punto Rojo en pantalla que se eliminaba pulsando una tecla. Así nace la versión Estándar, cambiando el pulsar una tecla por usar el ratón. Me pareciò divertido complicarlo un poco más, y en otro rato hice la versión para dos coches simultáneos por pantalla. De esta forma existe la versión "a Dos Manos del juego". Ambos juegos se han desarrollado en un formato gráfico clásico (640*480 pixels de resolución de pantalla , y 16 bits) . La idea, es que el software funcione y-o pueda ser compilado en cualquier ordenador por viejo y desfasado que éste sea. Así, el juego funciona en un rango de sistemas operativos que va desde un MS-DOS a un windows 7 .:)  
Ambos proyectos se liberan de forma Open Source en Github en Dic.2013, para que sean editados, mejorados, ampliados, o divididos; o simplemente descargados y jugados. Usando las licencias originales de no comercialidad, GPL. Y autoría y distribución CC. 
Sobre Mi: No programaba en C++ desde 1997 y por ello pido disculpas a los que intenten usar algo de código para su mejora por algunas decisiones tomadas y la ejecución de algunos algoritmos. Tampoco soy grafista, y por lo tanto la parte gráfica está un poco descuidada. Ni soy detallista y por eso hay muchos pequeños fallos, pero nada que no solucione con CTRL * ALT + SUPR. .. XD.  Espero que la liberación del juego en Github motive a algún programador de verdad a crear versiones mejoradas de este juego ya sea bajo: edición, forks, o comenzando de cero. Así como para diferentes plataformas más modernas. 
Es un juego muy amateur, y aunque es funcional y cumple su cometido a nivel gráfico, sonido, es realmente pobre viendo lo que se hace últimamente. Pero claro, yo lo aprecio de otra forma , porque vengo de otra época de los juegos, del basic, del código maquina y de los 8 bits. Ni siquiera me he enganchado a un juego moderno en los últimos 20 años. Solo hago algun review de mis viejos MAMES.

Programado bajo DEV-C++ y Allegro4. 
Para cualquier cosa (dudas, quejas, lamentos, donaciones XD ): tijuinem -at- gmail -dot- com Cualquier comentario, sugerencia, o petición plausible será bienvenida.  Un saludo :)


###Indice de versiones.

(las versiones ALFA se consideran no válidas para jugar )
* versión alfa 1.0 11-12-2013 .versión modo local. 
* Versión alfa 1.1 12-12-2013 .carga pantallas ok.
* versión alfa 1.2 13-12-2013 .aleatorio de pantallas. aleatorio de aparición punto rojo.
* versión alfa 1.3 16-12-2013 .aleatorio de coches en pantalla. modificado el sistema de velocidades del juego.
* versión alfa 1.4 17-12-2013 .aparicion o no de bicis, coches, y segunda tarea.
* versión Beta 1.0 18-12-2013 .primera versión jugable pública. fallo en la aparición del tráfico en los aleatorios.
* versión Beta 1.1 23-12-2013 .fichero help.html. Añado camiones al circuito.
* versión Beta 1.2 01-01-2014 .incrementar/decrementar vechiculos. quitar/poner tareas.

###Mejoras Pendientes.

* Código para FPS. Velocidad estándar para diferentes ordenadores. Está el código pero no probado. En estos momentos está bajo un Delay editable. 
* Redefinir teclado. Ahora solo funciona con las teclas predefinidas. Cursor + ratón.
* Transiciones de las pistas. Fallo a corregir en los útimos 480 pixels del bucle for.
* Mejoras gráficas. Adjunto archivo para editar los circuitos para GIMP.
* en Beta 1.0 . Fallo en la aparición del tráfico en los aleatorios. Fallo en win 7.
* Mejoras en el sonido. Música de fondo. Musica para el motor. 
* Conversión de Allegro v4 a v5. 
* Cambiar a utf8 y añadir eñes y tildes en los textos.

