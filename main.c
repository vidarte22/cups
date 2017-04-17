/* 
 * File:   main.c
 * Author: Alumnos
 *
 * Created on 19 de septiembre de 2016, 16:37
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int entero1;
    int entero2;
    int resultadoentero;
    float flotante1;
    float flotante2;
    float resultadoflotante;
    
    entero1 = 2;
    entero2 = 5;
    flotante1 = 7.0;
    flotante2 = 8.5;
    
    resultadoentero = flotante1 /entero1;
    printf ("resultado de la div de flotante y entero :%d", resultadoentero);
    
    resultadoflotante = entero2 / flotante2;
    printf("\n resultado de la div entero y flotante; %f", resultadoflotante);
    
    resultadoflotante = (float)entero1 / (float) entero2;
    printf ("\n resultado de la div de entero mostrado en flotante:%f", resultadoflotante);
    
    resultadoentero = (int)flotante2 / (int)flotante1;
    printf ("\n resultado de la div de flotantes mostrado en entero:%d", resultadoentero);
    return (EXIT_SUCCESS);
    
    //fghfghfgutjfhy
    //fghhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhmio
}

