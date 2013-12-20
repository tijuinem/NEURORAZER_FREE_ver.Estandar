//      by Tijuinem :   tijuinem -at- gmail -dot- com                   //desarrollado con el proposito de aprender allegro :)
//      NeuroRAZER versión "ESTANDAR". Clon-versión libre del juego Neuroracer, poniéndolo algo más difícil; uso del ratón. Neuroracer es un videojuego creado para mejorar el rendimiento cognitivo.
//      Indice de versiones:
//      versión alfa 1.0  09-12-2013                                    //version modo local
//      versión alfa 1.1  11-12-2013                                    //carga pantallas ok.                                              
//      versión alfa 1.2  12-12-2013                                    //desde esta versión se libera el código en github. se permite editar, borrar, coger, fork... aunque se agradecerán ampliaciones y mejoras.
//      versión alfa 1.3  16-12-2013                                    //incrementos de velocidades. puntos.
//      versión alfa 1.4  17-12-2013                                    //aparicion o no de bicis, coches, y segunda tarea.
//      versión Beta 1.0  18-12-2013                                    //primera versión jugable pública. 

       char version_ultima[80] = "versión Beta 1.0  18-12-2013";        //actualizar aqui la versión a la hora de compilar
       char  programadores[80] = "tijuinem at gmail dot com";           //añade tu nombre o mail, para aparecer actualizado en los créditos :)

/*   ______   ___    ___
    /\  _  \ /\_ \  /\_ \
    \ \ \ \ \\//\ \ \//\ \      __     __   _ __   ___
     \ \  __ \ \ \ \  \ \ \   /'__`\ /'_ `\/\`'__\/ __`\
      \ \ \/\ \ \_\ \_ \_\ \_/\  __//\ \ \ \ \ \//\ \ \ \
       \ \_\ \_\/\____\/\____\ \____\ \____ \ \_\\ \____/
        \/_/\/_/\/____/\/____/\/____/\/___ \ \/_/ \/___/
                                       /\____/
                                       \_/__/     Versión 4 */                                     
//------------------------------------------------------------------------------globales
#include <allegro.h>

 int fondo_pantalla = 0;
 int fin_juego = 0;
 BITMAP *fondo1, *fondo2, *fondo3, *fondo4, *fondo5, *fondo6, *fondo7, *fondo8, *fondo9;
 BITMAP *portada_y_salida, *coches_extra, *bicis_extra;
 BITMAP *coches_extra_doble_buffer, *bicis_extra_doble_buffer;
 PALLETE paleta;
 long int puntos_ppal = 0;
 long int vida_ppal = 4664;
 int velocidad_scroll = 1;                                                      //aconsejable si no funciona el fps.
 int balas = 100;
 int pantallas_recorridas =0;
 int size_coche_y = 100, size_coche_x = 50; 
 int size_mapa_x = 640, size_mapa_y = 8000;
 bool mostramos_coches=false, mostramos_bicis =false;
 bool activar_punto_rojo = false, activar_punto_amarillo=false;
 int numero_coches_a_incrementar =1, numero_bicis_a_incrementar =1; 
 char esto_es_si_bicis [20]=  "BICIS     SI", esto_es_no_bicis [30]=  "BICIS  NO(F3)";
 char esto_es_si_coches [20]= "COCHES    SI", esto_es_no_coches [30]= "COCHES NO(F4)"; 
 char esto_es_si_p_rojo [20]= "P.ROJO    SI", esto_es_no_p_rojo [30]= "P.ROJO NO(F9)";
 char esto_es_si_p_amarillo [20]= "AMARILLO  SI", esto_es_no_p_amarillo [30]= "AMARILLO  (F10)";
 
//------------------------------------------------------------------------------cargo ficheros externos
#include "carga_pantallas.h" 
#include "presentacion.h"
#include "salida.h" 
#include "coches_a_mostrar.h"

//------------------------------------------------------------------------------modo grafico del juego
#define modo_pantallaX  640
#define modo_pantallaY 480
#define numero_de_bits 16 

void main(void)
{ 
//------------------------------------------------------------------------------variables generales generales y configuraciones básicas 
 allegro_init();                                                                //Initialize Allegro.  
 set_color_depth(numero_de_bits);                                               //selecciono X bits
 set_gfx_mode(GFX_SAFE, modo_pantallaX , modo_pantallaY, 0, 0);                 //Set the resolution  with SAFE autodetection.
 install_keyboard();  
 install_timer(); 
 srand(time(NULL));

//------------------------------------------------------------------------------tema raton
 install_mouse();
 BITMAP *punto_mira, *punto_mira_disparado;
 PALLETE paleta;
 punto_mira = load_bitmap ("graficos/punto_mira1.pcx", paleta);
 punto_mira_disparado = load_bitmap ("graficos/punto_mira_disparo.pcx", paleta);
 scare_mouse();
 clear_bitmap(screen);
 scare_mouse();                                                                 /*oculto raton*/
 //unscare_mouse();                                                             /*no oculto raton*/
 //show_mouse(screen);                                                          //dibujo el raton basico . quito el raton normal
 //show_mouse(punto_mira);
                                         
//------------------------------------------------------------------------------cargo  graficos
 clear_keybuf(); // Borra el buffer del teclado 
 acquire_screen(); // Bloquea screen antes de dibujar en él, screen es el BITMAP por donde nos moveremos 
 fondo1 = load_bitmap ("graficos/recta 640 8000 verde.pcx", paleta); 
 fondo2 = load_bitmap ("graficos/recta 640 8000 gris.pcx", paleta); 
 fondo3 = load_bitmap ("graficos/recta 640 8000 estrechamiento.pcx", paleta); 
 fondo4 = load_bitmap ("graficos/recta 640 8000 curva1.pcx", paleta);
 fondo5 = load_bitmap ("graficos/recta 640 8000 curva2.pcx", paleta); 
 fondo6 = load_bitmap ("graficos/recta 640 8000 curva3.pcx", paleta);
 fondo7 = load_bitmap ("graficos/recta 640 8000 curva4.pcx", paleta); 
 fondo8 = load_bitmap ("graficos/recta 640 8000 puente.pcx", paleta); 
 fondo9 = load_bitmap ("graficos/recta 640 8000 mar.pcx", paleta); 

//------------------------------------------------------------------------------coches en la carretera
 coches_extra = load_bitmap ("graficos/6coches50pixels-ancho.pcx", paleta);    //prueba con fondo fucsia. si con draw. no con blit.
 bicis_extra  = load_bitmap ("graficos/6bicis50pixels-ancho.pcx",  paleta);            //cada bici tiene 50*100. hay 6 .
 

//------------------------------------------------------------------------------coche ppal. mejorar con struct
 int coordX = 300 , coordY= 200 ; //posicion de salida
 int incremento_corrdenadas = 1;  
 int fondoX = 0 , fondoY= 0 ;     //colores de fondo por defecto NEGRO
 int limite_pantalla_X = modo_pantallaX - size_coche_x, limite_pantalla_Y  = modo_pantallaY - size_coche_y; //limites de pantalla para el objeto.
 BITMAP *cochePPAL ;                                //doble buffer para el coche ppal. ???
 cochePPAL = load_bitmap ("graficos/coche316bitsFUCSIA.pcx", paleta); 

//------------------------------------------------------------------------------para coger los colores que rodean al coche   
 int color_en_x_coche_arriba_decha;   
 int color_en_x_coche_arriba_izda;
 int color_en_y_coche_abajo_decha;   
 int color_en_y_coche_abajo_izda;  

//------------------------------------------------------------------------------preparando scroll
 int recorre_y =0;
 int retraso_pintar = 1;  //1 si no FPS
 int size_pantalla_mostar = 480;
 int pantallas_en_disco = 10;

//------------------------------------------------------------------------------sonido
 SAMPLE *choque;
 SAMPLE *motor1;
    if (install_sound(DIGI_AUTODETECT, MIDI_NONE, "") != 0) 
    {
        allegro_message("problema tarjeta sonido");
        return;
    }
//------------------------------------------------------------------------------carga del archivo de sonido
    choque = load_sample("sonido/choque_pared.wav");
    motor1 = load_sample("sonido/motor1.wav");
    if ((!choque) || (!motor1))
    {
        allegro_message("no encuentro el archivo de audio");
        return;
    }   
//------------------------------------------------------------------------------para usar aleatorios
  int aleatorio;
  int dificultad_aleatorio = 5000;
  int x_aleatorio, y_aleatorio;
  bool punto_rojo_en_pantalla = false, punto_amarillo_en_pantalla = false; 
  BITMAP *punto_rojo, *punto_amarillo; //con doble buffer peor.                                  
  punto_rojo = load_bitmap ("graficos/punto_rojo.pcx", paleta);
  punto_amarillo = load_bitmap ("graficos/punto_amarillo.pcx", paleta);
  
//------------------------------------------------------------------------------programacion ppal del juego   
 PRESENTACION ();
 carga_pantalla (fondo_pantalla);
 if (mostramos_bicis  == true ) {bicis_a_mostrar  (6); }
 if (mostramos_coches == true ) {coches_a_mostrar (6); }

do
{ 
 if (recorre_y <= size_mapa_y + modo_pantallaY)
  {
      recorre_y = recorre_y + velocidad_scroll;
      blit(fondo1, screen, 0, size_mapa_y - size_pantalla_mostar - recorre_y , 0, 0, size_mapa_x, size_mapa_y );       //la primera pantalla empieza en el tamaño del mapa menos 480.
 
      //textprintf(screen, font, 10,10, palette_color[12], "recorre_y  %d",recorre_y );
      //textprintf(screen, font, 10,20, palette_color[12], "pantalla  %d", fondo_pantalla);
      textprintf(screen, font, 10,30, palette_color[12], "VIDA      %d", vida_ppal);
      textprintf(screen, font, 10,40, palette_color[12], "PUNTOS    %d", puntos_ppal);
      textprintf(screen, font, 10,50, palette_color[12], "VEL F1/F2 %d", velocidad_scroll);
      textprintf(screen, font, 10,60, palette_color[12], "BALAS     %d", balas); 
      if (mostramos_bicis == true) 
         { textout(screen, font, esto_es_si_bicis, 10, 70, palette_color[12]);   } 
         else {textout(screen, font, esto_es_no_bicis, 10, 70, palette_color[9]);}
      if (mostramos_coches == true) 
         { textout(screen, font, esto_es_si_coches, 10, 80, palette_color[12]);   } 
         else {textout(screen, font, esto_es_no_coches, 10, 80, palette_color[9]);}
      if (activar_punto_rojo == true) 
         { textout(screen, font, esto_es_si_p_rojo, 10, 90, palette_color[12]);   } 
         else {textout(screen, font, esto_es_no_p_rojo, 10, 90, palette_color[9]);}
      if (activar_punto_amarillo == true) 
         { textout(screen, font, esto_es_si_p_amarillo, 10, 100, palette_color[12]);   } 
         else {textout(screen, font, esto_es_no_p_amarillo, 10, 100, palette_color[9]);}             
            
      draw_sprite(screen, cochePPAL, coordX, coordY);                           //formato doble buffer. resultados similares. velocidad mas lenta. ademas aqui trabajo cogiendo puntos de color.
          
//------------------------------------------------------------------------------cambio pantalla. y dibujos aleatorios 
 if ( (recorre_y >= size_mapa_y  ) &&  (fin_juego == 0)) 
          {
          fondo_pantalla =  rand() % pantallas_en_disco ;                       //cojo una pantalla aleatoria
          recorre_y = 0;
          pantallas_recorridas ++;
          size_pantalla_mostar = 0;  
          carga_pantalla (fondo_pantalla);
          if (mostramos_bicis  == true )                                        //lamo a los vehiculos a mostrar tantas veces como vaya marcando. cada vez, 6 coches.
              {
              for (int nbi=1; nbi <= numero_bicis_a_incrementar; nbi ++)
                  { bicis_a_mostrar  (6);}
              }
          if (mostramos_coches == true ) 
              {
              for (int nci=1; nci <= numero_coches_a_incrementar; nci ++)
                  { coches_a_mostrar  (6);}              
              }
          x_aleatorio = rand() % 550;                                           //para mostrar el punto rojo en diferentes sitios en cada circuito
          y_aleatorio = rand() % 375;                          
          } 
  
//------------------------------------------------------------------------------movimiento del coche. limites------------        
       if (key[KEY_ESC] || (fin_juego == 1))  //escape de juego
           {
           fin_juego = 1;
           clear_keybuf();                 
           }
        if (key[KEY_LEFT]) 
         if (coordX >= 0 + size_coche_x/4)   { coordX = coordX - incremento_corrdenadas;  }
        if (key[KEY_RIGHT]) 
         if (coordX <= limite_pantalla_X  - size_coche_x/4) { coordX = coordX + incremento_corrdenadas; }   
        if (key[KEY_UP]) 
         if (coordY >= 0 + size_coche_y/4 )  { coordY = coordY - incremento_corrdenadas; }              
        if (key[KEY_DOWN]) 
         if (coordY <= limite_pantalla_Y - size_coche_y/4 )  { coordY = coordY + incremento_corrdenadas; }  

//--------------------------------------------------------------------------aleatorio mostrar avisos--------------
  aleatorio =  rand() % dificultad_aleatorio;
  if (( aleatorio == 69 ) && (activar_punto_rojo==true)) {  punto_rojo_en_pantalla = true;  }
  if ( punto_rojo_en_pantalla == true ) 
  { 
  draw_sprite(screen, punto_rojo, x_aleatorio, y_aleatorio); 
  play_sample(choque, 255, 0, 2000, FALSE); 
  vida_ppal -- ;
  }
  
  if (( aleatorio == 666 ) && (activar_punto_amarillo == true)) {  punto_amarillo_en_pantalla = true;  }
  if ( punto_amarillo_en_pantalla == true ) 
  { 
  draw_sprite(screen, punto_amarillo, x_aleatorio, y_aleatorio); 
  play_sample(choque, 255, 0, 3000, FALSE); 
  vida_ppal -- ;
  }  
  
//------------------------------------------------------------------------tema raton. le doy x pixels para que detecte posicion.
    switch (mouse_b)
      {
      case 0:
      draw_sprite(screen, punto_mira, mouse_x, mouse_y);   
      break ;
      case 1:
      draw_sprite(screen, punto_mira_disparado, mouse_x, mouse_y);
      play_sample(choque, 255, 255, 1700, FALSE);                               
      balas --;
      break ;
      default: 
      draw_sprite(screen, punto_mira, mouse_x, mouse_y); 
      }      
   if((mouse_b & 1) &&
     (punto_rojo_en_pantalla == 1 ) &&
     (mouse_x >= x_aleatorio +20) && (mouse_x <= x_aleatorio +40) && 
     (mouse_y >= y_aleatorio +20) && (mouse_y <= y_aleatorio +40))
       {         
       mouse_b  = 0;
       punto_rojo_en_pantalla = 0;
       balas = balas + 15;
       }
   
   if ((key[KEY_SPACE]) && (punto_amarillo_en_pantalla == true))
   {punto_amarillo_en_pantalla = false;}


//------------------------------------------------------------------------------colores que rodean al coche. para choques
  color_en_x_coche_arriba_izda =  _getpixel16 (screen, coordX , coordY);          //probado tambien con _getpixel16 y _getpixel . 
  color_en_x_coche_arriba_decha = _getpixel16 (screen, coordX + size_coche_x, coordY);
  color_en_y_coche_abajo_izda =   _getpixel16 (screen, coordX , coordY + size_coche_y);
  color_en_y_coche_abajo_decha =  _getpixel16 (screen, coordX + size_coche_x , coordY + size_coche_y );   
       
//------------------------------------------------------------------------------fuera / dentro del circuito 
  if( (color_en_x_coche_arriba_izda  == 0 )  
  &&  (color_en_x_coche_arriba_decha == 0 ) 
  &&  (color_en_y_coche_abajo_izda   == 0 )  
  &&  (color_en_y_coche_abajo_decha  == 0 ) 
  &&  (fin_juego == 0) )
  {
  puntos_ppal ++;  
  }
  else 
     { 
      //textout(screen, font, "estas fuera del circuito", 160,80, palette_color[15]);
      play_sample(choque, 255, 0, 1000, FALSE); //int play_sample(const SAMPLE *spl, int vol, int pan, int freq, int loop);
      vida_ppal --;
     }    
     
//-----------------------------------------------------------------------------puntos, vida , salida , incrementos.
  if (keypressed()) 
  {
    switch (readkey() >> 8) 
    {
        case KEY_F1:
            velocidad_scroll ++;
            break;
        case KEY_F2:
            if ( velocidad_scroll < 1) { velocidad_scroll = 1; puntos_ppal --;}
            velocidad_scroll --;
            break;
        case KEY_F3:
            numero_bicis_a_incrementar ++;
            mostramos_bicis =   true;
            break;
        case KEY_F4:
            numero_coches_a_incrementar ++;
            mostramos_coches =  true;
            break;
        case KEY_F9:
            activar_punto_rojo= true;
            break;
        case KEY_F10:
            activar_punto_amarillo= true;
            break;
        case KEY_F11:
            retraso_pintar ++ ;
            break;
        case KEY_F12:
            retraso_pintar=0;
            break;
        case KEY_P:
            puntos_ppal= puntos_ppal + 1000;                                    //haciendo trampas 
            break;
    }
  }    
  //------------------------------------------trampas y puntos
  if ( (puntos_ppal > 1000000) ) { velocidad_scroll = 10; }
  if ( (puntos_ppal > 2000000) ) { velocidad_scroll = 25; }
  if ( (puntos_ppal > 500000) )  { retraso_pintar = 0; }                
  if (  vida_ppal == 0 ) { 
        fin_juego = 1; textout(screen, font, 
        "Vida principal terminada. FIN de JUEGO", 200,200, palette_color[15]); 
        rest (2000); 
        SALIDA(); }

rest (retraso_pintar);     
 } //--------------------------------------------------------------------------fin del ciclo for de recorrer fondos y juego
} while (fin_juego==0);//------------------------------------------------------fin juego

 SALIDA ();

//------------------------------------------------------------------------------salir de allegro, con alegría.
 poll_keyboard(); // no deberia ser necesario , pero parece que lo es.
 clear_keybuf();
 allegro_exit();
//------------------------------------------------------------------------------destruyo todas las memorias graficas
 destroy_bitmap(fondo1);
 destroy_bitmap(fondo2);
 destroy_bitmap(fondo3);
 destroy_bitmap(fondo4);
 destroy_bitmap(fondo5);
 destroy_bitmap(fondo6);
 destroy_bitmap(fondo7);
 destroy_bitmap(fondo8);
 destroy_bitmap(fondo9);
 destroy_bitmap(cochePPAL);
 destroy_bitmap(punto_mira);
 destroy_bitmap(punto_mira_disparado);
 destroy_bitmap(portada_y_salida);
 destroy_bitmap(coches_extra);
 destroy_bitmap(bicis_extra);
 
//------------------------------------------------------------------------------destruyo todas las memorias audio
 destroy_sample(choque);
 destroy_sample(motor1);
//------------------------------------------------------------------------------remove the sound driver
 remove_sound();
return ;     
}     
END_OF_MAIN();
