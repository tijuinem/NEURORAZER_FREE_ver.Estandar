void PRESENTACION (void)
{
      portada_y_salida = load_bitmap ("graficos/portada-y-salida.pcx", paleta); 
      draw_sprite(screen, portada_y_salida, 0, 0);
      clear_keybuf();
     
     do
     {    
     textprintf(screen, font, 20,250, palette_color[12], "NEURORAZER, Edicion Estandar.");
     textprintf(screen, font, 20,265, palette_color[10], "COCHE 1 - CURSOR - y el RATON para Eliminar el Punto Rojo");

     
     textprintf(screen, font, 175,350, palette_color[10], "PULSA ENTER-INTRO cuando estes listo");
     textprintf(screen, font, 175,370, palette_color[10], "PULSA ESC para abandonar el juego");
              
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