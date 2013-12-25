

//-------------------CODIGO DESECHADO o PRUEBAS --------------------------------


/*
  comprobacion de los datos cogidos
  textprintf(screen, font, 
  coordX,                 
  coordY, 
  palette_color[12],"%d", color_en_x_coche_arriba_izda);
  textprintf(screen, font, 
  coordX + size_coche_x,  
  coordY, 
  palette_color[12],"%d", color_en_x_coche_arriba_decha);
  textprintf(screen, font, 
  coordX,  
  coordY + size_coche_y, 
  palette_color[12],  "%d", color_en_y_coche_abajo_izda);
  textprintf(screen, font, 
  coordX + size_coche_x,  
  coordY + size_coche_y, 
  palette_color[12], "%d", color_en_y_coche_abajo_decha);
  fin de comprobacion de los datos cogidos  
  
  
        
      //textprintf(screen, font, 110,70, palette_color[12], "Raton en %d   %d", mouse_x, mouse_y);
      //textprintf(screen, font, 110,80, palette_color[12], "Boton %d", mouse_b);
      //textprintf(screen, font, 110,90, palette_color[12], "Aleatorio  %d", aleatorio);
      //textprintf(screen, font, 110,100, palette_color[12], "P. Rojo  %d %d", x_aleatorio, y_aleatorio);
      
      
        //set_keyboard_rate(0, 0);
      
        //if (  key[KEY_F1] ) { velocidad_scroll=velocidad_scroll+1;}
  //if (  key[KEY_F2] ) {clear_keybuf(); velocidad_scroll  --;clear_keybuf(); }

 
   //------------------------------------------mostrar vechiculos  y activar tareas
  if (  key[KEY_3] ) {velocidad_scroll = 3;}
  if (  key[KEY_4] ) {velocidad_scroll = 4;}
  if (  key[KEY_5] ) {velocidad_scroll = 5;}
  if (  key[KEY_6] ) {velocidad_scroll = 6;}
  if (  key[KEY_7] ) {velocidad_scroll = 7;}
  if (  key[KEY_8] ) {velocidad_scroll = 8;}
  if (  key[KEY_9] ) {velocidad_scroll = 9;}
  if (  key[KEY_0] ) {velocidad_scroll = 20;}

  if (  key[KEY_B] ) {mostramos_bicis = true;}
  if (  key[KEY_C] ) {mostramos_coches =true;}
  if (  key[KEY_R] ) {activar_punto_rojo =true;}
  
  
      
      
  
     switch (puntos_ppal)
      {
      case 0:
      velocidad_scroll = 1; 
      retraso_pintar = 1; 
      break ;
      case 1000:
      velocidad_scroll = 5;
      retraso_pintar = 1; 
      break ;
      case 5000:
      velocidad_scroll = 20;
      retraso_pintar = 1; 
      break ;
      default: 
      velocidad_scroll = 1; 
      retraso_pintar = 1; 
      }         
      
  
                 
  
  if ( (puntos_ppal > 0)     && (puntos_ppal  < 50000 ) )   { velocidad_scroll = 1;  }
  if ( (puntos_ppal > 50000) && (puntos_ppal  < 75000 ) )   { velocidad_scroll = 2;  }
  if ( (puntos_ppal > 20000) && (puntos_ppal  < 30000 ) )   { velocidad_scroll = 3;  }
  if ( (puntos_ppal > 30000) && (puntos_ppal  < 40000 ) )   { velocidad_scroll = 4;  }
  if ( (puntos_ppal > 40000) && (puntos_ppal  < 50000 ) )   { velocidad_scroll = 5;  }
  if ( (puntos_ppal > 50000) && (puntos_ppal  < 60000 ) )   { velocidad_scroll = 6;  }
  if ( (puntos_ppal > 60000) && (puntos_ppal  < 70000 ) )   { velocidad_scroll = 7;  }
  if ( (puntos_ppal > 70000) && (puntos_ppal  < 100000 ) )  { velocidad_scroll = 8; }
  if ( (puntos_ppal > 100000) && (puntos_ppal < 150000 ) )  { velocidad_scroll = 9; }
  if ( (puntos_ppal > 150000) && (puntos_ppal < 300000 ) )  { velocidad_scroll = 10; }
  if ( (puntos_ppal > 300000) && (puntos_ppal < 900000 ) )  { velocidad_scroll = 15; }
  if ( (puntos_ppal > 1000000) ) { velocidad_scroll = 25; }
  if ( (puntos_ppal > 300000) )  { retraso_pintar = 0; }
  
  
  
  
  
  
  
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
      textout(screen, font, "estas fuera del circuito", 160,80, palette_color[15]);
      play_sample(choque, 255, 0, 1000, FALSE); //int play_sample(const SAMPLE *spl, int vol, int pan, int freq, int loop);
      vida_ppal --;
     } 
     
     
//--------------------------------------------------------------------------------------------------------scroll.
int size_mapa_x = 640, size_mapa_y = 8000;
int recorre_y =0;
int size_pantalla_mostar = 480;
do
{ 
 if (recorre_y <= size_mapa_y +480 )
  {
      recorre_y ++;
      blit(fondo1, screen, 0, size_mapa_y - 480 - recorre_y , 0, 0, 640, 480 );     
      //void blit(BITMAP *source, BITMAP *dest, int source_x, int source_y, int dest_x, int dest_y, int width, int height);
      textprintf(screen, font, 10,10, palette_color[12], "recorre_y  %d",recorre_y );
      textprintf(screen, font, 10,20, palette_color[12], "Pantalla  %d", fondo_pantalla);

 if ( (recorre_y >= size_mapa_y   ) &&  (fin_juego == 0)) 
          {
          fondo_pantalla =  rand() % pantallas_en_disco ;                   
          recorre_y = -480;
          carga_pantalla (fondo_pantalla);                         
          } 
//----------------------------------------------------------------------------------------------------------
     
     
     
     
     
     
     
     
     
     
*/
    
