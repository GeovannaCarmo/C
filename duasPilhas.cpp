#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
Pilha* intercala(Pilha *a, Pilha *b){//retorna o endereço de uma nova pilha
// contendo os dados intercalados das pilhas a e b
   Pilha *a1=pilha_cria();
   Pilha *b1=pilha_cria();
   Pilha *inter=pilha_cria();//pilha intercalada
   float x;
   //esvazia a pilha a em a1
   while(!pilha_vazia(a)){
   	  x=pilha_pop(a);
   	  pilha_push(a1,x);
   }
   //esvazia a pilha b em b1
    while(!pilha_vazia(b)){
   	  x=pilha_pop(b);
   	  pilha_push(b1,x);
   }
   //intercala as pilhas enquanto elas não estiverem vazias!!!
   while(!pilha_vazia(a1) ||!pilha_vazia(b1)){
   	 if (!pilha_vazia(a1)){
   	 	x=pilha_pop(a1);
   	 	pilha_push(a,x);
   	 	pilha_push(inter,x);
		}
	if (!pilha_vazia(b1)){
   	 	x=pilha_pop(b1);
   	 	pilha_push(b,x);
   	 	pilha_push(inter,x);
		}
	}
	pilha_libera(a1);
	pilha_libera(b1);
	return inter;
	
}
int main(){
	Pilha *p1, *p2;
	p1=pilha_cria();
	p2=pilha_cria();
	//empilha elementos em p1
	pilha_push(p1,1);
	pilha_push(p1,2);
	pilha_push(p1,3);
	//pilha_push(p1,4);
   //pilha_push(p1,5);
	//empilha elementos em p2
	pilha_push(p2,10);
	pilha_push(p2,20);
	pilha_push(p2,30);
	pilha_push(p2,40);
	
	Pilha *p3=intercala(p1, p2);
	
	pilha_mostra(p1);
	pilha_mostra(p2);
	pilha_mostra(p3);
}
	
