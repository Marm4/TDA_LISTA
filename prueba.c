#include "lista.h"
#include <stdio.h>

void mostrar_int(void* entero, void* ignorar){
  if(!entero)
    return;
  printf("%i ", *(int*)entero);
}
void romper1(){
  lista_t* lista = lista_crear();
  printf("Inserto 4 elementos en la lista\n");
  
  lista_insertar(lista, NULL);
  lista_insertar(lista, NULL);
  lista_insertar(lista, NULL);
  lista_insertar(lista, NULL);
  printf("Cantidad de elementos en la lista: %i\n", lista_elementos(lista));
  lista_destruir(lista);
}
void romper2(){
  lista_t* lista1 = lista_crear();
  lista_t* lista2 = lista_crear();
  int elementos[]={1,2,3,4};
  lista_insertar(lista1, elementos+0);
  lista_insertar(lista1, elementos+1);
  lista_insertar(lista2, elementos+0);
  lista_insertar(lista2, elementos+1);
  lista_insertar(lista1, elementos+2);
  lista_insertar(lista1, elementos+3);
  lista_insertar(lista2, elementos+2);
  lista_insertar(lista2, elementos+3);
  printf("Muestro lista 1\n");
  lista_con_cada_elemento(lista1, mostrar_int, NULL);
  printf("\nMuestro lista 2\n");
  lista_con_cada_elemento(lista2, mostrar_int, NULL);
  lista_borrar(lista1);
  lista_borrar(lista1);
  lista_borrar(lista1);
  lista_borrar(lista1);
  lista_borrar(lista2);
  lista_borrar(lista2);
  lista_borrar(lista2);
  lista_borrar(lista2);
  
  lista_destruir(lista1);
  lista_destruir(lista2);
}
int main(){
  printf("Romper 1\n\n");
    romper1();
  printf("\n\n\nRomper 2\n\n");
  romper2();
}
