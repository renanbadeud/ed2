/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   bst.h
 * Author: introcomp
 *
 * Created on 12 de Março de 2020, 10:38
 */

#ifndef BST_H
#define BST_H


typedef struct no No;
No* cria();
No* criaNo(int chave);
No* insere(No* no,int chave);
void imprime(No* a);
No* libera(No* a);
#endif /* BST_H */

