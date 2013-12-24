//------------------------------------------------------------------------------mas vehículos a mostrar
//------------------------------------------------------------------------------mas vehículos a mostrar---COCHES----------
void coches_a_mostrar (int coches_a_mostrar_pantalla)
{
  int size_coche_extra_x = 50;
  int size_coche_extra_y = 100;
  int x_aleatorio_coche_extra = 0;
  int y_aleatorio_coche_extra = 0;
  int color_para_posicionarx1=1, color_para_posicionarx2=1, 
      color_para_posicionarx3=1, color_para_posicionarx4=1, 
      color_para_posicionarx5=1;
  int numero_coches_a_mostrar_pantalla=1;
  
  for (numero_coches_a_mostrar_pantalla = 0; numero_coches_a_mostrar_pantalla <= coches_a_mostrar_pantalla-1; numero_coches_a_mostrar_pantalla ++)
  {  
    do
      {
    x_aleatorio_coche_extra = rand() % size_mapa_x;
    y_aleatorio_coche_extra = rand() % size_mapa_y;
    color_para_posicionarx1 =  getpixel (fondo1, x_aleatorio_coche_extra , y_aleatorio_coche_extra);
    color_para_posicionarx2 =  getpixel (fondo1, x_aleatorio_coche_extra + size_coche_extra_x, y_aleatorio_coche_extra);                          
    color_para_posicionarx3 =  getpixel (fondo1, x_aleatorio_coche_extra , y_aleatorio_coche_extra + size_coche_extra_y);                          
    color_para_posicionarx4 =  getpixel (fondo1, x_aleatorio_coche_extra + size_coche_extra_x, y_aleatorio_coche_extra + size_coche_extra_y);                          
    color_para_posicionarx5 =  getpixel (fondo1, x_aleatorio_coche_extra + size_coche_extra_x/2, y_aleatorio_coche_extra + size_coche_extra_y/2);                             
      }   while 
          ((color_para_posicionarx1 !=0000) && 
          ( color_para_posicionarx2 !=0000) && 
          ( color_para_posicionarx3 !=0000) && 
          ( color_para_posicionarx4 !=0000) &&       
          ( color_para_posicionarx5 !=0000));         
              
    if (x_aleatorio_coche_extra >= 600)   {x_aleatorio_coche_extra = x_aleatorio_coche_extra - 150; }   
    if (x_aleatorio_coche_extra <= 100)   {x_aleatorio_coche_extra = x_aleatorio_coche_extra + 150; }  
    if (y_aleatorio_coche_extra >= 7850)  {x_aleatorio_coche_extra = x_aleatorio_coche_extra - 200; }   
    if (y_aleatorio_coche_extra <= 200)   {x_aleatorio_coche_extra = x_aleatorio_coche_extra + 200; } 
    
    coches_extra_doble_buffer = create_bitmap(size_coche_extra_x, size_coche_extra_y);  
    blit(coches_extra, coches_extra_doble_buffer, size_coche_extra_x*numero_coches_a_mostrar_pantalla, 0 , 0, 0, size_coche_extra_x, size_coche_extra_y );   
    draw_sprite(fondo1, coches_extra_doble_buffer, x_aleatorio_coche_extra, y_aleatorio_coche_extra);
  }          
return ;     
}
//------------------------------------------------------------------------------mas vehículos a mostrar
//------------------------------------------------------------------------------mas vehículos a mostrar---BICIS----------
void bicis_a_mostrar (int bicis_a_mostrar_pantalla)
{
  int size_bici_extra_x = 50;
  int size_bici_extra_y = 100;
  int x_aleatorio_bici_extra = 0;
  int y_aleatorio_bici_extra = 0;
  int color_para_posicionarx1=1, color_para_posicionarx2=1, 
      color_para_posicionarx3=1, color_para_posicionarx4=1,
      color_para_posicionarx5=1;
  int numero_bicis_a_mostrar_pantalla=1;
  
  for (numero_bicis_a_mostrar_pantalla = 0; numero_bicis_a_mostrar_pantalla <= bicis_a_mostrar_pantalla-1; numero_bicis_a_mostrar_pantalla ++)
  {  
    do
    {
    x_aleatorio_bici_extra = rand() % size_mapa_x;
    y_aleatorio_bici_extra = rand() % size_mapa_y;
    color_para_posicionarx1 =  getpixel (fondo1, x_aleatorio_bici_extra , y_aleatorio_bici_extra);
    color_para_posicionarx2 =  getpixel (fondo1, x_aleatorio_bici_extra + size_bici_extra_x, y_aleatorio_bici_extra);                          
    color_para_posicionarx3 =  getpixel (fondo1, x_aleatorio_bici_extra , y_aleatorio_bici_extra + size_bici_extra_y);                          
    color_para_posicionarx4 =  getpixel (fondo1, x_aleatorio_bici_extra + size_bici_extra_x, y_aleatorio_bici_extra + size_bici_extra_y);                          
    color_para_posicionarx5 =  getpixel (fondo1, x_aleatorio_bici_extra + size_bici_extra_x/2, y_aleatorio_bici_extra + size_bici_extra_y/2);     }   while 
          ((color_para_posicionarx1 !=0000) && 
          ( color_para_posicionarx2 !=0000) && 
          ( color_para_posicionarx3 !=0000) && 
          ( color_para_posicionarx4 !=0000) &&       
          ( color_para_posicionarx5 !=0000));            
                                      
   if (x_aleatorio_bici_extra >= 600)   {x_aleatorio_bici_extra = x_aleatorio_bici_extra - 150; }   
   if (x_aleatorio_bici_extra <= 100)   {x_aleatorio_bici_extra = x_aleatorio_bici_extra + 150; } 
   if (y_aleatorio_bici_extra >= 7850)  {x_aleatorio_bici_extra = x_aleatorio_bici_extra - 200; }   
   if (y_aleatorio_bici_extra <= 200)   {x_aleatorio_bici_extra = x_aleatorio_bici_extra + 200; }
      
         
   bicis_extra_doble_buffer = create_bitmap(size_bici_extra_x, size_bici_extra_y);  
   blit(bicis_extra, bicis_extra_doble_buffer, size_bici_extra_x*numero_bicis_a_mostrar_pantalla, 0 , 0, 0, size_bici_extra_x, size_bici_extra_y );   
   draw_sprite(fondo1, bicis_extra_doble_buffer, x_aleatorio_bici_extra, y_aleatorio_bici_extra);
    
  }          
return ;     
}
//------------------------------------------------------------------------------mas vehículos a mostrar
//------------------------------------------------------------------------------mas vehículos a mostrar---CAMIONES----------
void camiones_a_mostrar (int camiones_a_mostrar_pantalla)
{
  int size_camion_extra_x = 100;
  int size_camion_extra_y = 200;
  int x_aleatorio_camion_extra = 0;
  int y_aleatorio_camion_extra = 0;
  int color_para_posicionarx1=1, color_para_posicionarx2=1, 
      color_para_posicionarx3=1, color_para_posicionarx4=1, 
      color_para_posicionarx5=1;
  int numero_camiones_a_mostrar_pantalla=1;
  
  for (numero_camiones_a_mostrar_pantalla = 0; numero_camiones_a_mostrar_pantalla <= camiones_a_mostrar_pantalla-1; numero_camiones_a_mostrar_pantalla ++)
  {  
    do
      {
    x_aleatorio_camion_extra = rand() % size_mapa_x;
    y_aleatorio_camion_extra = rand() % size_mapa_y;
    color_para_posicionarx1 =  getpixel (fondo1, x_aleatorio_camion_extra , y_aleatorio_camion_extra);
    color_para_posicionarx2 =  getpixel (fondo1, x_aleatorio_camion_extra + size_camion_extra_x, y_aleatorio_camion_extra);                          
    color_para_posicionarx3 =  getpixel (fondo1, x_aleatorio_camion_extra , y_aleatorio_camion_extra + size_camion_extra_y);                          
    color_para_posicionarx4 =  getpixel (fondo1, x_aleatorio_camion_extra + size_camion_extra_x, y_aleatorio_camion_extra + size_camion_extra_y);                          
    color_para_posicionarx5 =  getpixel (fondo1, x_aleatorio_camion_extra + size_camion_extra_x/2, y_aleatorio_camion_extra + size_camion_extra_y/2);                             
      }   while 
          ((color_para_posicionarx1 !=0000) && 
          ( color_para_posicionarx2 !=0000) && 
          ( color_para_posicionarx3 !=0000) && 
          ( color_para_posicionarx4 !=0000) &&       
          ( color_para_posicionarx5 !=0000));         
              
    if (x_aleatorio_camion_extra >= 600)   {x_aleatorio_camion_extra = x_aleatorio_camion_extra - 150; }   
    if (x_aleatorio_camion_extra <= 100)   {x_aleatorio_camion_extra = x_aleatorio_camion_extra + 150; }   
    if (y_aleatorio_camion_extra >= 7850)  {x_aleatorio_camion_extra = x_aleatorio_camion_extra - 200; }   
    if (y_aleatorio_camion_extra <= 200)   {x_aleatorio_camion_extra = x_aleatorio_camion_extra + 200; }
    
    camiones_extra_doble_buffer = create_bitmap(size_camion_extra_x, size_camion_extra_y);  
    blit(camiones_extra, camiones_extra_doble_buffer, size_camion_extra_x*numero_camiones_a_mostrar_pantalla, 0 , 0, 0, size_camion_extra_x, size_camion_extra_y );   
    draw_sprite(fondo1, camiones_extra_doble_buffer, x_aleatorio_camion_extra, y_aleatorio_camion_extra);
  }          
return ;     
}
//------------------------------------------------------------------------------mas vehículos a mostrar
