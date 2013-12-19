void SALIDA (void)
{
     portada_y_salida = load_bitmap ("graficos/portada-y-salida.pcx", paleta);
     draw_sprite(screen, portada_y_salida, 0, 0);
     clear_keybuf();

     do
     {          
     textprintf(screen, font, 80,250, palette_color[12], "PUNTOS CONSEGUIDOS:    %d", puntos_ppal); 
     textprintf(screen, font, 80,265, palette_color[12], "PANTALLAS RECORRIDAS:  %d", pantallas_recorridas); 
     textprintf(screen, font, 80,280, palette_color[12], "NIVEL:                 %d", velocidad_scroll); 
     textprintf(screen, font, 80,295, palette_color[12], "DISPAROS:              %d", balas);          
 
     textprintf(screen, font, 10,350, palette_color[9], "El funcionamiento de NeuroRazer tiene la capacidad de poder intervenir en ");  
     textprintf(screen, font, 10,360, palette_color[9], "el envejecimiento neuronal, mejorando nuestras capacidades cognitivas.");
     textprintf(screen, font, 10,370, palette_color[9], "Es recomendable practicar de forma periodica. gracias por jugar !!! ");
    
     textprintf(screen, font, 222,420, palette_color[10], "     PULSA  -ESC- PARA SALIR ");   
     textprintf(screen, font, 222,440, palette_color[10], "PULSA  -ENTER- PARA JUGAR DE NUEVO");     
     
     if  (key[KEY_ENTER]) 
          {
          destroy_bitmap(portada_y_salida);
          PRESENTACION ();
          }           
     
     } while (!key[KEY_ESC]);
     destroy_bitmap(portada_y_salida);
     clear_keybuf();                   
     allegro_exit();
     remove_sound();
     poll_keyboard();
     return;
}
