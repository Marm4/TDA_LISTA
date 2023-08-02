#include "lista.h"
#include <stdio.h>

void mostrar_elemento(void* elemento, void* contador){
  if(elemento && contador)
    printf("Elemento %i: %c \n", (*(int*)contador)++, *(char*)elemento);
  
}

void pruebo_insertar_25_elementos(){
	lista_t* lista = lista_crear();
	char a='a', b='b', c='c', d='d', e='e', f='f', g='g', h='h', i='i', j='j', k='k', l='l', m='m', n='n', o='o', p='p', q='q', r='r'; 
	char uno='1', dos='2', tres='3', cuatro='4', cinco='5', porciento='%', punto='.';
	lista_insertar(lista, &a);
  	lista_insertar(lista, &b);
  	lista_insertar(lista, &c);
  	lista_insertar(lista, &d);
  	lista_insertar(lista, &e);
  	lista_insertar(lista, &f);
  	lista_insertar(lista, &g);
  	lista_insertar(lista, &h);
  	lista_insertar(lista, &i);
  	lista_insertar(lista, &j);
  	lista_insertar(lista, &k);
  	lista_insertar(lista, &l);
  	lista_insertar(lista, &m);
  	lista_insertar(lista, &n);
  	lista_insertar(lista, &o);
  	lista_insertar(lista, &p);
  	lista_insertar(lista, &q);
  	lista_insertar(lista, &r);
  	lista_insertar(lista, &uno);
  	lista_insertar(lista, &dos);
  	lista_insertar(lista, &tres);
  	lista_insertar(lista, &cuatro);
  	lista_insertar(lista, &cinco);
  	lista_insertar(lista, &porciento);
  	lista_insertar(lista, &punto);
  
  	printf("Contenido de la lista: ");
  	
	for(size_t i=0;i<=24;i++)
    	printf("%c ", *(char*)lista_elemento_en_posicion(lista, i));
  	printf("\n\n");
  	
	printf("Muestro los ultimos 10 elementos y lo elimino: ");
	
	for(int j=0; j<10; j++){
		printf(" %c", *(char*)lista_ultimo(lista));
		lista_borrar(lista);
	}

	printf("\n\n");
  	lista_destruir(lista);
}

void pruebo_insertar_en_posicion(){
	lista_t* lista = lista_crear();
	char a='a', b='b', c='c', d='d', e='e', f='f', g='g', h='h', i='i', j='j', k='k', l='l', m='m', n='n', o='o', p='p', q='q', r='r'; 
	char uno='1', dos='2', tres='3', cuatro='4', cinco='5', porciento='%', punto='.';
	lista_insertar_en_posicion(lista, &a, 3);
  	lista_insertar_en_posicion(lista, &b, 2);
  	lista_insertar_en_posicion(lista, &c, 10);
  	lista_insertar_en_posicion(lista, &d, 0);
	lista_insertar_en_posicion(lista, &e, 1);
  	lista_insertar_en_posicion(lista, &f, 100);
  	lista_insertar_en_posicion(lista, &g, 4);
  	lista_insertar_en_posicion(lista, &h, 6);
  	lista_insertar_en_posicion(lista, &i, 7);
  	lista_insertar_en_posicion(lista, &j, 8);
  	lista_insertar_en_posicion(lista, &k, 9);
  	lista_insertar_en_posicion(lista, &l, 10);
  	lista_insertar_en_posicion(lista, &m, 0);
  	lista_insertar_en_posicion(lista, &n, 8);
  	lista_insertar_en_posicion(lista, &o, 7);
  	lista_insertar_en_posicion(lista, &p, 6);
  	lista_insertar_en_posicion(lista, &q, 50);
  	lista_insertar_en_posicion(lista, &r, 1000);
  	lista_insertar_en_posicion(lista, &uno, 1);
  	lista_insertar_en_posicion(lista, &dos, 3);
  	lista_insertar_en_posicion(lista, &tres, 6);
  	lista_insertar_en_posicion(lista, &cuatro, 24);
  	lista_insertar_en_posicion(lista, &cinco, 30);
  	lista_insertar_en_posicion(lista, &porciento, 07);
  	lista_insertar_en_posicion(lista, &punto, 1996);
  	printf("Lista de elementos: %c", *(char*)lista_elemento_en_posicion(lista, 1));
  	printf("Elementos: ");
  	
  	lista_iterador_t* it = lista_iterador_crear(lista);
  	while(!lista_iterador_tiene_siguiente(it))
    	printf("%c ", *(char*)lista_iterador_siguiente(it));
 	printf("\n");
 	
 	printf("Muestro  10 elementos al azar y los elimino: ");
	for(size_t j=3; j<13; j++){
		printf(" %c", *(char*)lista_elemento_en_posicion(lista, j));
		lista_borrar_de_posicion(lista, j);
	}
	printf("\n\n");
	lista_destruir(lista);
	lista_iterador_destruir(it);
}

void pruebo_ambos_metodos_de_insertar(){
	lista_t* lista = lista_crear();
	char a='a', b='b', c='c', d='d', e='e', f='f', g='g', h='h', i='i', j='j', k='k', l='l', m='m', n='n', o='o', p='p', q='q', r='r'; 
	char uno='1', dos='2', tres='3', cuatro='4', cinco='5', porciento='%', punto='.';
	
	lista_insertar(lista, &a);
  	lista_insertar(lista, &b);
  	lista_insertar(lista, &c);
  	lista_insertar(lista, &d);
  	lista_insertar_en_posicion(lista, &e, 1);
  	lista_insertar_en_posicion(lista, &f, 100);
  	lista_insertar_en_posicion(lista, &g, 4);
  	lista_insertar_en_posicion(lista, &h, 6);
  	lista_insertar_en_posicion(lista, &i, 7);
  	lista_insertar(lista, &j);
  	lista_insertar(lista, &k);
  	lista_insertar(lista, &l);
  	lista_insertar_en_posicion(lista, &m, 9);
  	lista_insertar_en_posicion(lista, &n, 9);
  	lista_insertar(lista, &o);
  	lista_insertar_en_posicion(lista, &p, 3);
  	lista_insertar(lista, &q);
  	lista_insertar_en_posicion(lista, &r, 5);
  	lista_insertar(lista, &uno);
  	lista_insertar_en_posicion(lista, &dos, 2);
  	lista_insertar_en_posicion(lista, &tres, 3);
  	lista_insertar_en_posicion(lista, &cuatro, 4);
  	lista_insertar(lista, &cinco);
  	lista_insertar_en_posicion(lista, &porciento, 90);
  	lista_insertar(lista, &punto);

  	int contador=0;
  	lista_con_cada_elemento(lista, mostrar_elemento, (void*)&contador);
  	printf("\n");
  	
  	printf("Muestro los ultimos 3 elementos y los elimino:");
  	printf(" %c", *(char*)(lista_ultimo(lista)));
	lista_borrar(lista);
  	printf(" %c", *(char*)(lista_ultimo(lista)));
	lista_borrar(lista);
	printf(" %c", *(char*)(lista_ultimo(lista)));
	lista_borrar(lista);
	
	printf("\nMuestro 3 elementos al azar y los elimino:");
	printf(" %c", *(char*)lista_elemento_en_posicion(lista, 5));
	lista_borrar_de_posicion(lista, 5);
	printf(" %c", *(char*)lista_elemento_en_posicion(lista, 10));
	lista_borrar_de_posicion(lista, 10);
	printf(" %c", *(char*)lista_elemento_en_posicion(lista, 2));
	lista_borrar_de_posicion(lista, 2);
	
	printf("\n\n");
	
  lista_destruir(lista);
  
}

void pruebo_pila_un_elemento(){
	lista_t* pila = lista_crear();
	char porciento='%';
	lista_apilar(pila, &porciento);
	printf("Desapilo el elemento y lo muestro por pantalla: %c", *(char*)lista_tope(pila));
	printf("\n\n");
	lista_destruir(pila);
}

void pruebo_pila_25_elementos(){
	lista_t* pila = lista_crear();
	char* texto = ".otivalc nu ovalc otilbaP"; 
	
	for(int j=0; j<25; j++){
    	printf("Apilo %s\n", &texto[j]);
    	lista_apilar(pila, &texto[j]);
  	}
  	printf("\nDesapilo y muestro los elementos apilados: ");
  		while(!lista_vacia(pila)){
    		printf("%c", *(char*)lista_tope(pila));
    		lista_desapilar(pila);
  }
  printf("\n\n");
  lista_destruir(pila);
}

void pruebo_pila_desapilar_a_medias(){
		lista_t* pila = lista_crear();
	char* texto = "aelep ...neiuq otreum atse oN";  
	for(int j=0;texto[j]!= 0; j++){
    	printf("Apilo %s\n", &texto[j]);
    	lista_apilar(pila, &texto[j]);
    }
    printf("\nDesapilo a medias y muestro los elementos: ");
    for(int i=0; i<23; i++){
   		printf("%c", *(char*)lista_tope(pila));
    	lista_desapilar(pila);
  	}
  	printf("\n\n");
	lista_destruir(pila);
}

void pruebo_encolar_1_elemento(){
	lista_t* cola = lista_crear();
	int numero = 1996;
	
	printf("\nEncolo: %i\n", numero);
	lista_encolar(cola, &numero);
	
	printf("Desencolo: %i\n\n", numero);
	lista_desencolar(cola);
	
	lista_destruir(cola);
}

void pruebo_encolar_50_elementos(){
	lista_t* cola = lista_crear();
	int elementos[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
	
	for(size_t i=0;i<50;i++){
    printf("Encolo %i\n", elementos[i]);
    lista_encolar(cola, &elementos[i]);
	}
  
    printf("\nDesencolo los elementos y los muestro: ");
  	while(!lista_vacia(cola)){
    	printf("%i ", *(int*)lista_primero(cola));
    	lista_desencolar(cola);
  	}
  	printf("\n\n");
  	lista_destruir(cola);
}

void pruebo_desencolar_a_medias(){
	lista_t* cola = lista_crear();
	int 		elementos[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
	
	for(size_t i=0;i<50;i++){
	    printf("Encolo %i\n", elementos[i]);
	    lista_encolar(cola, &elementos[i]);
	}
	printf("\nDesencolo a medias los elementos y los muestro: ");
	for(int i=0; i<25; i++){
	    printf("%i ", *(int*)lista_primero(cola));
	    lista_desencolar(cola);
  }
  	printf("\n");	
  	lista_destruir(cola);
}

int main(){

	printf("\t\t ***LISTA***\n\n");
		printf("Pruebo insertar 25 elementos y mostrarlos por pantalla: \n");
		pruebo_insertar_25_elementos();
	
		printf("Pruebo insertar 25 elementos en posicion y mostrarlos por pantalla con iterador externo: \n");
		pruebo_insertar_en_posicion();
		
		printf("Pruebo ambos metodos de insercion y muestro con iterador interno: \n");
		pruebo_ambos_metodos_de_insertar();

	printf("\t\t ***PILA***\n\n");
		printf("Pruebo apilar un unico elemento\n");
		pruebo_pila_un_elemento();
		
		printf("Pruebo apilar 25 elementos y mostrarlos por pantalla:\n");
		pruebo_pila_25_elementos();
		
		printf("Pruebo apilar 30 elementos y desapilar a medias:\n");
		pruebo_pila_desapilar_a_medias();
	
	printf("\t\t ***COLA***\n\n");
		printf("Pruebo cola 1 elemento y lo muestro por pantalla:\n");
		pruebo_encolar_1_elemento();
		
		printf("Pruebo cola 50 elementos y mostrarlos por pantalla:\n");
		pruebo_encolar_50_elementos();
		
		printf("Pruebo cola 50 elementos y desencolar a medias:\n");
		pruebo_desencolar_a_medias();
	
	return 0;
}
