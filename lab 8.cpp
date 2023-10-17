 #include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>
#include <algorithm>
#include <cstring>
#include <limits.h>
#include <stdlib.h>
#include <fstream>
#include<cstdlib>
using namespace std;
//colas--------------------------------------------------------------------------------
struct nodoCola {
char dato; /* define dato como un char */
struct nodoCola *ptrSiguiente; /* apuntador nodoCola */ }; /* fin de la estructura nodoCola */
typedef struct nodoCola NodoCola; 
typedef NodoCola *ptrNodoCola;
/* prototipos de las funciones */
void imprimeCola( ptrNodoCola ptrActual );
char estaVacia2( ptrNodoCola ptrCabeza ); 
void agregar ( ptrNodoCola *ptrCabeza, ptrNodoCola *ptrTalon, char valor );
void buscarEImprimir(ptrNodoCola *ptrCabeza, char valor);
char eliminarValores(ptrNodoCola *ptrCabeza, ptrNodoCola *ptrTalon);
//listas-------------------------------------------------------------------------------
struct nodoLista {
	char dato; /* cada nodoLista contiene un caracter */
	struct nodoLista *ptrSiguiente; /* apuntador al siguiente nodo */
};
typedef struct nodoLista NodoLista; /* sinónimo para la estructura nodoLista */
typedef NodoLista *ptrNodoLista;

void insertar( ptrNodoLista *ptrS, char valor );
int estaVacia( ptrNodoLista ptrS );
void imprimeLista( ptrNodoLista ptrActual );
void destruirLista(ptrNodoLista *ptrS);
void buscarEImprimirlista(ptrNodoLista *ptrCabeza, char numeroBuscado) ;
//pilas-------------------------------------------------------------------
struct nodoPila{
	char dato;
	struct nodoPila *ptrSiguiente;
};
typedef struct nodoPila NodoPila;
typedef NodoPila *ptrNodoPila;

void push(ptrNodoPila *ptrCima, char info);//inserta
int estaVacia1(ptrNodoPila ptrCima);
void imprimePila(ptrNodoPila ptrActual);
void destruirPila(ptrNodoPila &cima);
void buscarEnPila(ptrNodoPila *ptrCabeza, char numeroBuscado);
//Instrucciones------------------------------------------------------------------
	void instrucciones( void );
	void instrucciones1( void );
	void instrucciones2( void );
	void instrucciones3( void );
	void instrucciones4( void );	
//Variables----------------------------------------------------------------------
	ptrNodoPila ptrPila =NULL;
	int op,op1;
	char valor;
	ptrNodoLista ptrInicial = NULL;
	char elemento;
	ptrNodoCola ptrCabeza = NULL; /* incializa ptrCabeza */
	ptrNodoCola ptrTalon = NULL; /* incializa ptrTalon */

int main(){
	srand(time(NULL));
	do{
	system("cls");
	instrucciones(); /* despliega el menú */
	printf( "\n  Ingrese su opci%cn:\t ",162 );
	scanf( "%d", &op );
//----------------------------------------------------------------------------	
	if(op==1){
		int i=0;
		do{
		system("cls");	
		instrucciones1(); /* despliega el menú */
		printf( "\n  Ingrese su opci%cn:\t ",162 );
		scanf( "%i", &op1 );
		if (op1==1){
			printf("Bienvenido a Insercion de datos\nPorfavor indiquenos cuantos datos aleatorios desea agregar\nCabe aclarar que el limite de valores es de 20 y el minimo 1.\n\n");
			int cant;
			cin>>cant;
			while(cant>20 or cant<1){
				printf("ERROR\n\n");
				printf("Bienvenido a Insercion de datos\nPorfavor indiquenos cuantos datos aleatorios desea agregar\nCabe aclarar que el limite de valores es de 20 y el minimo 1.\n\n");
				cin>>cant;
			}
			while(cant!=i){
				i=i+1;
			if(i==21){
					printf("ha llegado al limite de 20 valores\n\n");
					break;
				}
			else{
				if(i%2==0){
				elemento = 'a' + rand() % 26;
				insertar( &ptrInicial, elemento ); /* inserta el elemento en la lista */
				
			}
			else{
				elemento = 'A' + rand() % 26;
				insertar( &ptrInicial, elemento ); /* inserta el elemento en la lista */
			}	
			}}
			imprimeLista( ptrInicial );	
			system("pause");
			
		}
		if (op1==2){
			if(!estaVacia( ptrInicial )){
			imprimeLista( ptrInicial );	}
			else{
				printf("La lista esta vacia");
			}
			system("pause");
		}
	}while(op1!=3);}
//------------------------------------------------------------------------------------------------------------------
	if (op==2){
	int i=0;
	do{
	system("cls");	
		instrucciones2(); /* despliega el menú */
		printf( "\n  Ingrese su opci%cn:\t ",162 );
		scanf( "%i", &op1 );
		if (op1==1){
			printf("Bienvenido a Insercion de datos\nPorfavor indiquenos cuantos datos aleatorios desea agregar\nCabe aclarar que el limite de valores es de 20 y el minimo 1.\n\n");
			int cant;
			cin>>cant;
			while(cant>20 or cant<1){
				printf("ERROR\n\n");
				printf("Bienvenido a Insercion de datos\nPorfavor indiquenos cuantos datos aleatorios desea agregar\nCabe aclarar que el limite de valores es de 20 y el minimo 1.\n\n");
				cin>>cant;
			}
			while(cant!=i){
				i=i+1;
			if(i==21){
					printf("ha llegado al limite de 20 valores\n\n");
					break;
				}
			else{
				if(i%2==0){
				elemento = 'a' + rand() % 26;
				push(&ptrPila, elemento); /* inserta el elemento en la lista */
				
			}
			else{
				elemento = 'A' + rand() % 26;
				push(&ptrPila, elemento); /* inserta el elemento en la lista */
			}	
			}}
			imprimePila(ptrPila);
			system("pause");		
		} 
		if (op1==2){
			if(!estaVacia1(ptrPila)){
					imprimePila(ptrPila);
				}
			else{
				printf("La Pila esta vacia\n");
			}
			system("pause");	
		}
		
	}	while(op1!=3);}
//----------------------------------------------------------------------------------
	if(op==3){
		int i=0;
		do{
	system("cls");	
		instrucciones3(); /* despliega el menú */
		printf( "\n  Ingrese su opci%cn:\t ",162 );
		scanf( "%i", &op1 );
			if (op1==1){
			printf("Bienvenido a Insercion de datos\nPorfavor indiquenos cuantos datos aleatorios desea agregar\nCabe aclarar que el limite de valores es de 20 y el minimo 1.\n\n");
			int cant;
			cin>>cant;
			while(cant>20 or cant<1){
				printf("ERROR\n\n");
				printf("Bienvenido a Insercion de datos\nPorfavor indiquenos cuantos datos aleatorios desea agregar\nCabe aclarar que el limite de valores es de 20 y el minimo 1.\n\n");
				cin>>cant;
			}
			while(cant!=i){
				i=i+1;
			if(i==21){
					printf("ha llegado al limite de 20 valores\n\n");
					break;
				}
			else{
				if(i%2==0){
				elemento = 'a' + rand() % 26;
				agregar (&ptrCabeza, &ptrTalon, elemento ); /* inserta el elemento en la lista */
				
			}
			else{
				elemento = 'A' + rand() % 26;
				agregar (&ptrCabeza, &ptrTalon, elemento ); /* inserta el elemento en la lista */
			}	
			}}
			imprimeCola( ptrCabeza );
			system("pause");
			}
			if (op1==2){
			if(!estaVacia2( ptrCabeza )){
					imprimeCola( ptrCabeza );
				}
			else{
				printf("La Cola esta vacia\n");
			}
			system("pause");	
		}	
			}
		while(op1!=3);}
//----------------------------------------------------------------------------------	
	if(op==4){
		if(!estaVacia1(ptrPila)){
			imprimePila(ptrPila);}
		else{
			printf("La Pila esta vacia\n");
				}
				
		if(!estaVacia( ptrInicial )){
			imprimeLista( ptrInicial );	}
		else{
			printf("La lista esta vacia\n");
			}		
		
		if(!estaVacia2( ptrCabeza )){
					imprimeCola( ptrCabeza );
				}
			else{
				printf("La Cola esta vacia\n");
			}
		system("pause");
	
	}	
//-----------------------------------------------------------------------------------	
	if(op==5){
		
	if(ptrInicial==NULL){
			printf("lista vacia\n");}
		else{
		destruirLista(&ptrInicial)	;
		printf("Se ha Destruido la lista con exito\n");		
		}
	if(ptrPila==NULL){
			printf("Pila vacia\n");}
		else{
		destruirPila(ptrPila);
		printf("Se ha Destruido la Pila con exito\n");		
		}
	if(ptrCabeza==NULL){
			printf("cola vacia\n");}
		else{
		eliminarValores(&ptrCabeza,&ptrTalon);
		printf("Se ha Destruido la cola con exito\n");		
		}	
		
	system("pause");	
	}
//----------------------------------------------------------------------------------------
if(op==6){
do{
		system("cls");	
		instrucciones4(); /* despliega el menú */
		printf( "\n  Ingrese su opci%cn:\t ",162 );
		scanf( "%i", &op1 );
if (op1==1){
	printf("Porfavor, ingrese el caracter que desea buscar en la lista\n");
	scanf("\n%c", &elemento );	
	buscarEImprimirlista( &ptrInicial, elemento);
	imprimeLista( ptrInicial );
	system("pause");
}
if (op1==2){
	printf("Porfavor, ingrese el numero que desea buscar en la pila\n");
	scanf("\n%c", &elemento );	
	buscarEnPila( &ptrPila, elemento);
	imprimePila( ptrPila );
	system("pause");
}
if (op1==3){
	printf("Porfavor, ingrese el caracter que desea buscar en la cola\n");
	scanf("\n%c", &elemento );	
	buscarEImprimir( &ptrCabeza, elemento);
	imprimeCola( ptrCabeza );
	system("pause");
}
	
}while(op1!=0);}
	}while(op!=0);{printf("Programa Finalizado\nQue tenga un excelente dia");}	
}
//Instrucciones----------------------------------------------------------------------
void instrucciones( void )
 {
 	printf( "Introduzca su opci%cn:\n"
 	" 1 Listas \n"
 	" 2 Pilas  \n"
 	" 3 Colas\n"
 	" 4 Mostrar Estructuras\n"
 	" 5 Destruir Estructuras\n"
 	" 6 Buscar elemento en estrutura\n"
 	" 0 SALIR.\n",162 );
 }
 void instrucciones1( void )
 {
 	printf( "Introduzca su opci%cn:\n"
 	" 1 Insertar Elementos Aleatorios \n"
 	" 2 Mostrar la lista\n"
 	" 3 SALIR.\n",162 );
 }
 void instrucciones2( void )
 {
 	printf( "Introduzca su opci%cn:\n"
 	" 1 Colocar elementos aleatorios \n"
 	" 2 Mostrar Pila\n"
 	" 3 SALIR.\n",162 );
 }
void instrucciones3( void )
 {
 	printf( "Introduzca su opci%cn:\n"
 	" 1 Colocar elementos aleatorios \n"
 	" 2 Mostrar cola\n"
 	" 3 SALIR.\n",162 );
 }
void instrucciones4( void )
 {
 	printf( "Introduzca su opci%cn:\n"
 	" 1 Listas \n"
 	" 2 Pilas  \n"
 	" 3 Colas\n"
 	" 0 SALIR.\n",162 );
 }
//Funciones pilas--------------------------------------------------------------------
void push( ptrNodoPila *ptrCima, char info )//insertar
{
ptrNodoPila ptrNuevo; /* apuntador al nuevo nodo */
ptrNuevo = (NodoPila*)malloc(sizeof( NodoPila ));
//ptrNuevo = malloc( sizeof(NodoPila) );
/* inserta el nodo en La cima de La pila */
if ( ptrNuevo != NULL ) {
ptrNuevo->dato = info;
ptrNuevo->ptrSiguiente = *ptrCima;
*ptrCima = ptrNuevo;
} /* fin de if */
else { /* no queda espacio disponible */
printf( "%d no se inserto. Memoria insuficiente. \n", info );
} /* fin de else */ 
} /* fin de La función push */

/* Imprime La pila */
void imprimePila( ptrNodoPila ptrActual )
{
/* si La pila está vacía */
if ( ptrActual == NULL ) {
printf( "La pila est%c vacia. \n\n",160 );
} /* fin de if */
else {
printf( "La pila es:\n" );
int i=0;
/* mientras no sea el final de La pila */
while ( ptrActual != NULL ) {
i=i+1;	
printf( "%d) %c\n",i, ptrActual->dato );
 ptrActual = ptrActual->ptrSiguiente;
} /* fin de while */
printf( "NULL\n\n" );
} /* fin de else */
 /* fin de La función imprimePila */
}

/* Devuelve 1 si La pila está vacía, de Lo contrario 0 */
int estaVacia1( ptrNodoPila ptrCima )
{
return ptrCima == NULL;
} /* fin de La función estaVacia */

//funciones listas-------------------------------------------------------------------
void insertar( ptrNodoLista *ptrS, char valor )
 {
 	ptrNodoLista ptrNuevo; /* apuntador a un nuevo nodo */
 	ptrNodoLista ptrAnterior; /* apuntador a un nodo previo de la lista */
 	ptrNodoLista ptrActual; /* apuntador al nodo actual de la lista */
 	ptrNuevo = (NodoLista*)malloc(sizeof( NodoLista )); /* crea un nodo por medio de memoria dinamica */
	if ( ptrNuevo != NULL ) { /* es espacio disponible */
 		ptrNuevo->dato = valor; /* coloca el valor en el nodo */
 		ptrNuevo->ptrSiguiente = NULL; /* el nodo no se liga a otro nodo */
 		ptrAnterior = NULL;
 		ptrActual = *ptrS;
	 /* ciclo para localizar la ubicación correcta en la lista */
 		while ( ptrActual != NULL && valor > ptrActual->dato ) {
 				ptrAnterior = ptrActual; /* entra al ... */
 				ptrActual = ptrActual->ptrSiguiente; /* ... siguiente nodo */
		 } /* fin de while */
 	/* inserta un nuevo nodo al principio de la lista */
		if ( ptrAnterior == NULL ) {
 			ptrNuevo->ptrSiguiente = *ptrS;
 			*ptrS = ptrNuevo;
 		} /* fin de if */
 		else { /* inserta un nuevo nodo entre ptrAnterior y ptrActual */
 			ptrAnterior->ptrSiguiente = ptrNuevo;
 			ptrNuevo->ptrSiguiente = ptrActual;
 		} /* fin de else */
 	} /* fin de if */
 	else {
 		printf( "No se inserto %c. No hay memoria disponible.\n", valor );
	} /* fin de else */
} /* fin de la función insertar */

int estaVacia( ptrNodoLista ptrS )
{
 	return ptrS == NULL;
} /* fin de la función function estaVacia */

void imprimeLista( ptrNodoLista ptrActual )
{
if ( ptrActual == NULL ) {
	printf( "La lista esta vacia.\n\n" );
} 
else {
	printf( "La lista es:\n" );
 	while ( ptrActual != NULL ) {
 		printf( "%c -> ", ptrActual->dato );
 		ptrActual = ptrActual->ptrSiguiente;
 	} 
 	printf( "NULL\n\n" );
} 
} 
// destruir--------------------------------------------------------------------------------
void destruirLista(ptrNodoLista *ptrS) {
    ptrNodoLista actual = *ptrS; // apuntador al nodo actual
    ptrNodoLista siguiente; // apuntador al nodo siguiente

    // recorre la lista y libera la memoria de cada nodo
    while (actual != nullptr) {
        siguiente = actual->ptrSiguiente;
        delete actual;
        actual = siguiente;
    }

    *ptrS = nullptr; // actualiza el apuntador al primer nodo
}
void destruirPila(ptrNodoPila &cima) {
    ptrNodoPila aux;

    while (cima != NULL) {
        aux = cima;
        cima = cima->ptrSiguiente;
        delete aux;
    }
}

//colas--------------------------------------------------------------------------------------
void agregar (ptrNodoCola *ptrCabeza, ptrNodoCola *ptrTalon, char valor )
{
ptrNodoCola ptrNuevo; /* apuntador a un nuevo nodo */ 
ptrNuevo = (NodoCola*)malloc(sizeof( NodoCola ) );
if (ptrNuevo != NULL) { /* es espacio disponible */ 
ptrNuevo->dato = valor;
ptrNuevo->ptrSiguiente = NULL;
/* si está vacía inserta un nodo en La cabeza */ 
if (estaVacia2( *ptrCabeza ) ) {
*ptrCabeza = ptrNuevo;
} /* fin de if */
else {
( *ptrTalon )->ptrSiguiente = ptrNuevo;
} /* fin de else */
*ptrTalon = ptrNuevo;
} /* fin de if */
else {
printf("no se inserto %i. No hay memoria disponible.\n", valor );
} /* fin de else */
} 
/*elimina el nodo de la cabeza de la cola */
int retirar (ptrNodoCola *ptrCabeza, ptrNodoCola *ptrTalon )
{
int valor; /* valor del nodo */
ptrNodoCola tempPtr; /* apuntador a un nodo temporal */
valor=(*ptrCabeza)->dato;
tempPtr = *ptrCabeza;
*ptrCabeza = ( *ptrCabeza )->ptrSiguiente;
/* si la cola está vacía */
if (*ptrCabeza == NULL) { 
*ptrTalon = NULL;
} /* fin de if */
free (tempPtr);
return valor;
} /* fin de la función retirar */
/* Devuelve 1 si la cola está vacía, de lo contrario devuelve @ */
char estaVacia2( ptrNodoCola ptrCabeza )
{
return ptrCabeza == NULL;
} /* fin de la función estaVacia */ /* Imprime La cola */
void imprimeCola( ptrNodoCola ptrActual )
{
	int i=1;
/* si la cola está vacía */
if (ptrActual == NULL) {
printf("La cola esta vacia.\n\n" ); } /* fin de if */
else {
printf("La cola es:\n" );
/* mientras no sea el final de la cola */ 
while (ptrActual != NULL) {
printf("%i) %c \n",i, ptrActual->dato ); 
ptrActual = ptrActual->ptrSiguiente;
i++; } /* fin de while */ 
printf("NULL\n\n" ); } /* fin de else */
} /* fin de la función imprimeCola */

void buscarEImprimir(ptrNodoCola *ptrCabeza, char numeroBuscado) {
    ptrNodoCola ptrActual = *ptrCabeza;
    int posicion = 1;
    while (ptrActual != NULL) {
        if (ptrActual->dato == numeroBuscado) {
            cout << "El elemento " << numeroBuscado << " se encuentra en la posicion " << posicion << endl;
            return;
        }
        ptrActual = ptrActual->ptrSiguiente;
        posicion++;
    }
    cout << "El elemento " << numeroBuscado << " no se encontró en la cola" << endl;
}

char eliminarValores(ptrNodoCola *ptrCabeza, ptrNodoCola *ptrTalon) {
  int cantidad=20, valorEliminado; /* cantidad de valores a eliminar y valor del nodo eliminado */
  int i = 0,k;
  ptrNodoCola tempPtr; /* apuntador a un nodo temporal */

  

  for (i = 0; i < cantidad; i++) {
    valorEliminado = (*ptrCabeza)->dato;
    tempPtr = *ptrCabeza;
    *ptrCabeza = (*ptrCabeza)->ptrSiguiente;

    /* si la cola está vacía */
    if (*ptrCabeza == NULL) { 
      *ptrTalon = NULL;
    }

    free(tempPtr);
    
  }

  return cantidad;
}

void buscarEImprimirlista(ptrNodoLista *ptrCabeza, char numeroBuscado) {
    ptrNodoLista ptrActual = *ptrCabeza;
    int posicion = 1;
    while (ptrActual != NULL) {
        if (ptrActual->dato == numeroBuscado) {
            cout << "El elemento " << numeroBuscado << " se encuentra en la posicion " << posicion << endl;
            return;
        }
        ptrActual = ptrActual->ptrSiguiente;
        posicion++;
    }
    cout << "El elemento " << numeroBuscado << " no se encontró en la lista" << endl;
}

void buscarEnPila(ptrNodoPila *ptrCabeza, char numeroBuscado) {
    ptrNodoPila ptrActual = *ptrCabeza;
    int posicion = 1;
    while (ptrActual != NULL) {
        if (ptrActual->dato == numeroBuscado) {
            cout << "El elemento " << numeroBuscado << " se encuentra en la posicion " << posicion << endl;
            return;
        }
        ptrActual = ptrActual->ptrSiguiente;
        posicion++;
    }
    cout << "El elemento " << numeroBuscado << " no se encontró en la pila" << endl;
}


