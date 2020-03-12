/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "bst.h"
#include <stdlib.h>
#include <stdio.h>
struct no{
    struct no* dir;
    struct no* esq;
    int chave;
    
};


No* cria(){
    return NULL;
}

No* criaNo(int chave){
   No* novo=(No*)malloc(sizeof(No));
   novo->chave=chave;
   novo->dir=NULL;
   novo->esq=NULL;
   
   return novo;
}

No* insere(No* no,int chave){
    if(no==NULL) return criaNo(chave);
    
    if(chave<no->chave){
        no->esq=insere(no->esq,chave);
    }
    else if(chave>no->chave){
        no->dir=insere(no->dir,chave);
        
    return no;    
        
    }
}

void imprime(No* a){
    if (a != NULL) {
        imprime(a->esq);
        printf("%d ", a->chave);
        imprime(a->dir);
    }

}

No* libera(No* a) {
    if (a != NULL) {
        libera(a->esq);
        libera(a->dir);
        free(a);
    }
    return NULL;
}
