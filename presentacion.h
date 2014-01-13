void PRESENTACION (void)
{
      portada_y_salida = load_bitmap ("graficos/portada-y-salida.pcx", paleta); 
      draw_sprite(screen, portada_y_salida, 0, 0);
      clear_keybuf();
      
     do
     {                
     textprintf(screen, font, 20,250, palette_color[12], "NEURORAZER, Edicion Estandar. CONTROLES:");
     textprintf(screen, font, 20,263, palette_color[10], "* Control del COCHE con el -CURSOR- ");
     textprintf(screen, font, 20,278, palette_color[10], "* TECLAS -F1/F2- Para Aumentar/Disminuir la Velocidad.");
     textprintf(screen, font, 20,293, palette_color[10], "* TECLAS -F3/F4- para activar y aumentar la presencia de Bicicletas.");
     textprintf(screen, font, 20,308, palette_color[10], "* TECLAS -F5/F6- para activar y aumentar la presencia de Coches.");
     textprintf(screen, font, 20,323, palette_color[10], "* TECLAS -F7/F8- para activar y aumentar la presencia de Camiones.");    
     textprintf(screen, font, 20,338, palette_color[10], "* TECLA -F9- para activar o quitar  la segunda tarea   (Punto Rojo) -> RATON");
     textprintf(screen, font, 20,353, palette_color[10], "* TECLA -F10-para activar la tercera tarea (P.Amarillo) -> BARRA ESPACIADORA");
     textprintf(screen, font, 20,367, palette_color[10], "* Consulta el archivo HELP para ampliar esta INFORMACION");
     
     textprintf(screen, font, 175,390, palette_color[12], " PULSA ENTER cuando estes listo  ");
     textprintf(screen, font, 175,400, palette_color[10], "PULSA ESC para abandonar el juego");
              
     textprintf(screen, font, 20,450, palette_color[9], "Distribuido Open Source bajo licencias GPL-GNU. Y bajo las condiciones CC");
     textout(screen, font,  programadores , 20, 460, palette_color[9]); 
     textout(screen, font,  version_ultima, 20, 470, palette_color[9]);                     
         
          if  (key[KEY_ESC]) 
          {
          destroy_bitmap(portada_y_salida);
          allegro_exit();
          remove_sound();
          poll_keyboard();
          } 
  
     } while (!key[KEY_ENTER]);
      clear_keybuf();
      destroy_bitmap(portada_y_salida);   
      return;     
}
