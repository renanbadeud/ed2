/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: introcomp
 *
 * Created on 12 de Março de 2020, 09:49
 */

#include <stdio.h>
#include <stdlib.h>
#include "bst.h"
/*
 * 
 */
int main(int argc, char** argv) {
    No* a=cria();
    
    a=insere(a,1);
    a=insere(a,5);
    a=insere(a,3);
    a=insere(a,6);
    a=insere(a,2);
    
    imprime(a);
    a=libera(a);
    
    
    
    return (EXIT_SUCCESS);
}

