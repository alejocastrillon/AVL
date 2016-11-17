/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: alejandro
 *
 * Created on 16 de noviembre de 2016, 01:44 PM
 */

#include <cstdlib>
#include <stdio.h>

using namespace std;

/*
 *Definicion de estructura de arbol
 */
struct nodoArbol {
    int nro;
    char color [30];
    struct nodoArbol *izq, *der;
};

//Definicion del arbol
typedef nodoArbol *ABB;
ABB arbol = NULL;

//Prototipo de las funciones
void menuPrincipal();
void opcMenuPrincipal(int op);
void menuABB();

/*
 * 
 */
int main(int argc, char** argv) {
    menuPrincipal();
    return 0;
}

void menuPrincipal() {
    int opc;
    printf("\t\t MENU PRINCIPAL ARBOLES \n");
    printf("Seleccione el tipo de arbol que desea implementar:\n");
    printf("\t 1. ABB\n");
    printf("\t 2. Arboles AVL\n");
    printf("\t 3. Arboles Rojo-Negro\n");
    printf("\t 4. Salir\n");
    scanf("%i", &opc);
    opcMenuPrincipal(opc);
}

void opcMenuPrincipal(int op) {
    switch(op){
        case 1:
          menuABB();
//          menuPrincipal();
          break;
        default:
            printf("Ingrese una opcion acorde al menu\n");
            menuPrincipal();
            break;
    }
}

void menuABB(){
    printf("\t\t MENU ABB\n");
    printf("Seleccione la opcion que desea realizar\n");
    printf("\t 1. Insertar dato en el arbol\n");
    printf("\t 2. Eliminar dato en el arbol\n");
    printf("\t 3. Buscar dato en el arbol\n");
    printf("\t 4. Ver el arbol\n");
    printf("\t 5. Recorrer el arbol In-Orden\n");
    printf("\t 6. Recorrer el arbol Pre-Orden\n");
    printf("\t 7. Recorrer el arbol Post-Orden\n");
    printf("\t 8. Calcular el peso del arbol\n");
    printf("\t 9. Calcular el altura del arbol\n");
    printf("\t 10. Calcular la cantidad de hojas del arbol\n");
    printf("\t 11. Padre de un nodo\n");
}