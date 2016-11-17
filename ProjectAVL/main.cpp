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
void opcMenuABB(int op);
void insertarABB(ABB &arb, int data);
void exit();

/*
 * 
 */
int main(int argc, char** argv) {
    menuPrincipal();
    return 0;
}

/**
 * Menu Principal
 */
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

/**
 * Selecciona el menu de acuerdo a la opcion ingresada en el menu principal
 * @param op
 */
void opcMenuPrincipal(int op) {
    switch (op) {
        case 1:
            menuABB();
            menuPrincipal();
            break;
        case 4:
            exit();
            break;
        default:
            printf("Ingrese una opcion acorde al menu\n");
            menuPrincipal();
            break;
    }
}

/**
 * Menu del Arbol Binario de Busqueda
 */
void menuABB() {
    int opc;
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
    printf("\t 12. Regresar al menu principal\n");
    scanf("%i", &opc);
    opcMenuABB(opc);
}

/**
 * Selecciona la funcion a ejecutar de acuerdo a la opcion ingresada en el menu de ABB
 * @param op
 */
void opcMenuABB(int op) {
    switch (op) {
        int data;
        case 1:
            printf("Ingrese el dato a insertar en el arbol:\n");
            scanf("%i", &data);
            insertarABB(arbol, data);
            menuABB();
            break;
        case 12:
            break;
        default:
            printf("Ingrese una opcion acorde al menu de ABB\n");
            menuABB();
            break;
    }
}

/**
 * Retorna un nuevo nodo para el arbol
 * @param data
 * @return 
 */
ABB crearNodo(int data) {
    ABB newNodo = new (struct nodoArbol);
    newNodo->nro = data;
    newNodo->izq = NULL;
    newNodo->der = NULL;
    return newNodo;
}

/**
 * Insertar en un arbol ABB
 * @param arbol
 * @param data
 */
void insertarABB(ABB &arb, int data) {
    if (arbol == NULL) {
        arb = crearNodo(data);
    } else if (data < arb->nro) {
        insertarABB(arb->izq, data);
    } else {
        insertarABB(arb->der, data);
    }
}

/**
 * Funcion para salir de la ejecucion
 */
void exit() {
    printf("Hasta Luego\n");
}