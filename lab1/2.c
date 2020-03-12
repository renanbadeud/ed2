/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
 
/*
 * File:   exe2.c
 * Author: renan
 *
 * Created on 11 de Março de 2020, 20:54
 */
 
#include <stdio.h>
#include <stdlib.h>
 
/*
 *
 */
typedef struct no No;
struct no{
    int num;
    struct No* prox;
};
 
No* newNo(int num){
   
    No* temp=(No*)malloc(sizeof(No));
    temp->prox=temp;
    temp->num=num;
}
 
void getUlt(int m,int tam){
    No* head=newNo(1);
    No* prev=head;
   
    for(int i=2;i<=tam;i++){
        prev->prox=newNo(i);
        prev=prev->prox;
    }
    prev->prox=head;
   
   
    No* p1;
    No* p2;
    p1=p2=head;
   
    int count = 1;
    while (count != m)
        {
            p2 = p1;
            p1 = p1->prox;
            count++;
        }
 
        /* Remove the m-th node */
        p2->prox = p1->prox;
        p1 = p2->prox;
    }
 
    printf("%d",p1->num);
}
 
 
void
int main(int argc, char** argv) {
    int n = 14, m = 2;
    getJosephusPosition(m, n);
    return 0;
    return (EXIT_SUCCESS);
}
