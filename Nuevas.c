#include "lista.c"
#include <stdio.h>

int main(){
lista_t *lista = lista_crear();
char uno='1', dos='2', tres='3', cuatro='4';//, cinco='5';
lista_insertar(lista, &uno);
lista_insertar_en_posicion(lista, &uno, 90);
lista_insertar_en_posicion(lista, &dos, 90);
lista_insertar_en_posicion(lista, &tres, 0);
lista_insertar_en_posicion(lista, &cuatro, 1);
lista_borrar(lista);
lista_borrar(lista);
//printf("Cantidad de elementos %c", *(char*)lista_ultimo(lista));
lista_destruir(lista);
return 0;
}
