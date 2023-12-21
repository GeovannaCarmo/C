#include <stdio.h>
#include <stdlib.h>
#include "filasmart.h"

Fila *quadrado(*Fila *q)
{
	float x;
	Fila *aux = fila_cria();
	Fila *quad = fila_cria();
	//retira fila aoriginal e coloca em aux e em quad
	while(!fila_vazia(q))
	{
		x = fila_retira(q);
		fila_insere(aux,x); 
		fila_insere(quad,x*x);
	}
	//restaurar a fila original a partir da auxiliar
	while (!fila_vazia(aux))
		fila_insere(q,fila_restaura(aux));
	
	fila_libera(aux);
	
	return quad; //retorna a fila com elementos ao quadrado
}

void concatenaFilas(Fila *p, Fila *q){ //concatena os dados da f2 em f1
	float x;
	Fila *a=fila_cria();
	//esvazia a fila q colocando os elementos nas filas p e a
	while(!fila_vazia(q)){
		x=fila_retira(q);
		fila_insere(a,x);
		fila_insere(p,x);
	}
	//restaura a fila q
	while(!fila_vazia(a)){//fila_vazia(a)==0
		fila_insere(q,fila_retira(a));
		}
	fila_libera(a);
}
//------------------------------------------------------
Fila *emendaFilas(Fila *a, Fila* b){
	float m;
	Fila *x=fila_cria();
	Fila *y=fila_cria();
	Fila *z=fila_cria();//fila nova criada com os elementos de a e b
	//esvazia a fila a em x e z
	while(!fila_vazia(a)){
		m=fila_retira(a);
		fila_insere(x,m);
		fila_insere(z,m);
	}
	//esvazia a fila b em y e z
	while(!fila_vazia(b)){
		m=fila_retira(b);
		fila_insere(y,m);
		fila_insere(z,m);
	}
	//restaura as filas originais a e b
	while(!fila_vazia(x))
		fila_insere(a, fila_retira(x));
	while(!fila_vazia(y))
		fila_insere(b, fila_retira(y));
	fila_libera(x);
	fila_libera(y);
	return z;
}
//-------------------------------------------------------
int main(){
	Fila *f1=fila_cria();
	Fila *f2=fila_cria();
	Fila *f3;//ponteiro para receber a fila criada na funçao emendaFilas
	//insere dados na fila f1
	fila_insere(f1,1);
	fila_insere(f1,2);
	fila_insere(f1,3);
	fila_insere(f1,4);
	//insere dados na fila f2
	fila_insere(f2,10);
	fila_insere(f2,20);
	fila_insere(f2,30);
	
	//concatenaFilas(f1,f2);
	f3=emendaFilas(f1,f2);
	fila_mostra(f1);
	fila_mostra(f2);
	fila_mostra(f3);
	
}
