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
  
  for (numero_coches_a_mostrar_pantalla = 1; numero_coches_a_mostrar_pantalla <= coches_a_mostrar_pantalla; numero_coches_a_mostrar_pantalla ++)
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
    blit(coches_extra, fondo1, size_coche_extra_x*numero_coches_a_mostrar_pantalla, 0, x_aleatorio_coche_extra, y_aleatorio_coche_extra, size_coche_extra_x, size_coche_extra_y);                                                                  
  }          
return ;     
}

//------------------------------------------------------------------------------mas vehículos a mostrar---BICIS----------
void bicis_a_mostrar (int bicis_a_mostrar_pantalla)
{
  int size_bici_extra_x = 50;
  int size_bici_extra_y = 100;
  int x_aleatorio_bici_extra = 0;
  int y_aleatorio_bici_extra = 0;
  int color_para_posicionarx11=1, color_para_posicionarx22=1, 
      color_para_posicionarx33=1, color_para_posicionarx44=1;
  int numero_bicis_a_mostrar_pantalla=1;

  
  for (numero_bicis_a_mostrar_pantalla = 1; numero_bicis_a_mostrar_pantalla <= bicis_a_mostrar_pantalla; numero_bicis_a_mostrar_pantalla ++)
  {  
    do
    {
    x_aleatorio_bici_extra = rand() % size_mapa_x;
    y_aleatorio_bici_extra = rand() % size_mapa_y;
    color_para_posicionarx11 =  _getpixel16 (fondo1, x_aleatorio_bici_extra - size_bici_extra_x, y_aleatorio_bici_extra+10);
    color_para_posicionarx22 =  _getpixel16 (fondo1, x_aleatorio_bici_extra + size_bici_extra_x, y_aleatorio_bici_extra);                          
    color_para_posicionarx33 =  _getpixel16 (fondo1, x_aleatorio_bici_extra + size_bici_extra_x, y_aleatorio_bici_extra + size_bici_extra_y);                          
    color_para_posicionarx44 =  _getpixel16 (fondo1, x_aleatorio_bici_extra + size_bici_extra_x/2, y_aleatorio_bici_extra + size_bici_extra_y/2);                          
      
    }   while 
    ((color_para_posicionarx11 !=0) && 
    ( color_para_posicionarx22 !=0) && 
    ( color_para_posicionarx33 !=0) && 
    ( color_para_posicionarx44 !=0)); 

    blit(bicis_extra, fondo1, size_bici_extra_x*numero_bicis_a_mostrar_pantalla, 0, x_aleatorio_bici_extra, y_aleatorio_bici_extra, size_bici_extra_x, size_bici_extra_y);                                                                  
 
  
  }          
return ;     
}
//------------------------------------------------------------------------------mas vehículos a mostrar
