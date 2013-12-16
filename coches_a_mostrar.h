void coches_a_mostrar (int coches_a_mostrar_pantalla)
{
  int size_coche_extra_x = 50;
  int size_coche_extra_y = 100;
  int x_aleatorio_coche_extra = 0;
  int y_aleatorio_coche_extra = 0;
  int color_para_posicionarx1=0, color_para_posicionarx2=0;
  int numero_coches_a_mostrar_pantalla=0;
  
  for (numero_coches_a_mostrar_pantalla = 1; numero_coches_a_mostrar_pantalla <= coches_a_mostrar_pantalla; numero_coches_a_mostrar_pantalla ++)
  {  
    do
    {
    x_aleatorio_coche_extra = rand() % 550;
    y_aleatorio_coche_extra = rand() % 7900;
    color_para_posicionarx1 =  _getpixel16 (fondo1, x_aleatorio_coche_extra , y_aleatorio_coche_extra);
    color_para_posicionarx2 =  _getpixel16 (fondo1, x_aleatorio_coche_extra + size_coche_extra_x, y_aleatorio_coche_extra);                          
    }   while ((color_para_posicionarx1 != 0) && ((color_para_posicionarx2) !=0));                            
    blit(coches_extra, fondo1, size_coche_extra_x*numero_coches_a_mostrar_pantalla, 0, x_aleatorio_coche_extra, y_aleatorio_coche_extra, size_coche_extra_x, size_coche_extra_y);                                                                  
  }
          
return ;     
}
