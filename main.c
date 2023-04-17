#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
int main()
{
    // Ejercicio 1
    /*
    Pila pila1;
    Pila auxiliar1;

    inicpila(&pila1);
    inicpila(&auxiliar1);

    int sigue1;
    int suma1;

    while(sigue1 == 0){
        leer(&pila1);
        printf("0 para seguir, 1 para cortar la entrada de datos.\n");
        scanf("%i", &sigue1);
    }


    while(!pilavacia(&pila1)){
        suma1 += tope(&pila1);
        apilar(&auxiliar1, desapilar(&pila1));
    }
    while(!pilavacia(&auxiliar1)){
        apilar(&pila1, desapilar(&auxiliar1));
    }
    printf("Contador total de elementos: %i", suma1);

    // Ejercicio 2

    Pila pila2;
    Pila auxiliar2;

   inicpila(&pila2);
   inicpila(&auxiliar2);

   int sigue2 = 0;
   int contador2 = 0;


    while(sigue2==0){
        leer(&pila2);
        printf("0 para seguir,1 para cortar.\n");
        scanf("%i", &sigue2);
    }

    while(!pilavacia(&pila2)){
        contador2++;
        apilar(&auxiliar2, desapilar(&pila2));
    }

    while(!pilavacia(&auxiliar2)){
        apilar(&pila2, desapilar(&auxiliar2));
    }

    printf("La suma de elementos: %i", contador2);

    //Ejercicio 3

    Pila pila3;
    Pila auxiliar3;

    inicpila(&pila3);
    inicpila(&auxiliar3);

    int sigue3 = 0;
    int contador3 = 0;
    int acumulador3 = 0;
    int promedio3 = 0;

    while(sigue3 == 0){
        leer(&pila3);
        printf("0 para seguir - 1 para cortar\n");
        scanf("%i", &sigue3);
    }

    while(!pilavacia(&pila3)){
        acumulador3 += tope(&pila3);
        contador3++;
        apilar(&auxiliar3, desapilar(&pila3));
    }

    promedio3 = acumulador3 / contador3;
    printf("Promedio: %i", promedio3);

    // Ejercicio 4

    Pila pila4;
    Pila auxiliar4;
    Pila menor4;

    inicpila(&pila4);
    inicpila(&auxiliar4);
    inicpila(&menor4);

    int sigue4;

    while(sigue4 == 0){
        leer(&pila4);
        printf("0 para seguir, 1 para cortar\n");
        scanf("%i", &sigue4);
    }

    apilar(&menor4, desapilar(&pila4));

    while(!pilavacia(&pila4)){
        if(tope(&pila4) < tope(&menor4)){
            apilar(&auxiliar4, desapilar(&menor4));
            apilar(&menor4, desapilar(&pila4));
        }
        else{
            apilar(&auxiliar4, desapilar(&pila4));
        }
    }
    printf("Pila 4\n");
    mostrar(&pila4);
    printf("Auxiliar 4\n");
    mostrar(&auxiliar4);
    printf("Menor 4\n");
    mostrar(&menor4);

    // Ejercicio 5

    Pila pila5;
    Pila auxiliar5;
    Pila pedido5;

    inicpila(&pila5);
    inicpila(&auxiliar5);
    inicpila(&pedido5);
    printf("Inserte un numero para ingresarlo en la pila.\n");
    leer(&pedido5);

    for(int i = 20; i >= 2; i = i - 2){
        apilar(&pila5, i);
    }

    while(!pilavacia(&pila5) && !pilavacia(&pedido5)){
        if(tope(&pedido5) <= tope(&pila5)){
            apilar(&pila5, desapilar(&pedido5));
        }
        else{
            apilar(&auxiliar5, desapilar(&pila5));
        }
        if(pilavacia(&pila5)){
            apilar(&pila5, desapilar(&pedido5));
        }
    }

    while(!pilavacia(&auxiliar5)){
        apilar(&pila5, desapilar(&auxiliar5));
    }
    mostrar(&pila5);
    mostrar(&auxiliar5);

    */
    // Ejercicio 7

    /*Pila pila7;
    Pila auxiliar7;
    Pila pedido7;

    inicpila(&pila7);
    inicpila(&auxiliar7);
    inicpila(&pedido7);

    int sigue7 = 0;
    int flag7 = 0;
    int contador7 = 0;

    printf("Ahora, coloca un numero para ser buscado:\n");
    leer(&pedido7);
    printf("Ahora, ingresa los números propios de la pila\n");
    while(sigue7 == 0){
        leer(&pila7);
        printf("0 para seguir, 1 para cortar\n");
        scanf("%i", &sigue7);
    }

    while(!pilavacia(&pila7) && flag7 == 0){
        if(tope(&pila7) == tope(&pedido7)){
            flag7 = 1;
            printf("Encontrado!!, en indice %i - posicion: %i", contador7+1, contador7 + 2);
        }
        else{
            apilar(&auxiliar7, desapilar(&pila7));
            contador7++;
        }
    }*/

    // Ejercicio 8

    /*Pila auxiliar8, pila8, pedido8, descarte8;
    inicpila(&pila8);
    inicpila(&pedido8);
    inicpila(&auxiliar8);
    inicpila(&descarte8);
    int sigue8;
    int valor8;

    printf("Ingrese una lista de numeros\n");

    while(sigue8 == 0){
        leer(&pila8);
        printf("0 para seguir, 1 para cortar\n");
        scanf("%i", &sigue8);
    }

    printf("Ingrese el numero a eliminar de la pila\n");
    leer(&pedido8);

    while (!pilavacia(&pila8)) {
        if (tope(&pila8) == tope(&pedido8)) {
            apilar(&descarte8, desapilar(&pila8));
        } else {
            apilar(&auxiliar8, desapilar(&pila8));
        }
}

    while (!pilavacia(&auxiliar8)) {
        apilar(&pila8, desapilar(&auxiliar8));
        }


    mostrar(&pila8);*/

    // Ejercicio 9

    /*Pila pila9, copia9;
    inicpila(&copia9);
    inicpila(&pila9);
    int sigue9;

    printf("Ingrese una serie de numeros que formen capicua\n");

    while(sigue9 == 0){
        leer(&pila9);
        printf("0 para seguir, 1 para cortar\n");
        scanf("%i", &sigue9);
    }


    while (!pilavacia(&pila9)) {
        int elemento = desapilar(&pila9);
        apilar(&copia9, elemento);
        mostrar(&copia9);
    }
    mostrar(&pila9);

    while (!pilavacia(&pila9) && !pilavacia(&copia9)) {
        if (desapilar(&pila9) != desapilar(&copia9)) {
            printf("No es capicua");
        }
    }

    printf("Es capicua\n");
    mostrar(&pila9);
    mostrar(&copia9);*/

    // Ejercicio 10

    /*Pila ConjuntoA10, ConjuntoB10, ConjuntoC10, Auxiliar10, Iguales, AuxB10;
    inicpila(&ConjuntoA10);
    inicpila(&AuxB10);
    inicpila(&ConjuntoB10);
    inicpila(&ConjuntoC10);
    inicpila(&Auxiliar10);
    inicpila(&Iguales);
    int sigue10 = 0;
    int num10 = 0;

    printf("Ingrese los valores de la Pila A\n");
    while(sigue10 == 0){
        leer(&ConjuntoA10);
        printf("0 para seguir, 1 para cortar\n");
        scanf("%i", &sigue10);
    }

    printf("Ingrese los valores de la Pila B\n");
    while(num10 == 0){
        leer(&ConjuntoB10);
        printf("0 para seguir, 1 para cortar\n");
        scanf("%i", &num10);
    }

    while(!pilavacia(&ConjuntoB10)) {
            if(tope(&ConjuntoA10) == tope(&ConjuntoB10)) {
                apilar(&Iguales, desapilar(&ConjuntoA10));
            }else {
                apilar(&Auxiliar10, desapilar(&ConjuntoA10));
            }
            while(!pilavacia(&Auxiliar10)) {
                apilar(&ConjuntoA10, desapilar(&Auxiliar10));
            }
            apilar(&AuxB10, desapilar(&ConjuntoB10));
        }

        while(!pilavacia(&ConjuntoA10)) {
            apilar(&ConjuntoC10, desapilar(&ConjuntoA10));
        }
        while(!pilavacia(&AuxB10)) {
            apilar(&ConjuntoC10, desapilar(&AuxB10));
        }

    mostrar(&ConjuntoC10);
    mostrar(&Iguales);*/

    // Ejercicio 11

    /*Pila pila11_1, pila11_2, auxiliar11_1, auxiliar11_2, pilaFinal11;
    inicpila(&pila11_1);
    inicpila(&pila11_2);
    inicpila(&auxiliar11_1);
    inicpila(&auxiliar11_2);
    inicpila(&pilaFinal11);

    apilar(&pila11_1, 1);
    apilar(&pila11_1, 3);
    apilar(&pila11_1, 5);

    apilar(&pila11_2, 2);
    apilar(&pila11_2, 4);
    apilar(&pila11_2, 6);

    while(!pilavacia(&pila11_2)){
        if(tope(&pila11_1) < tope(&pila11_2)){
            apilar(&auxiliar11_1, desapilar(&pila11_1));
        }
        else{
            apilar(&auxiliar11_2, desapilar(&pila11_1));
        }
        apilar(&auxiliar11_2, desapilar(&pila11_2));
        while(!pilavacia(&auxiliar11_1)){
            apilar(&pila11_1, desapilar(&auxiliar11_1));
        }
    }

    apilar(&auxiliar11_2, desapilar(&pila11_1));
    while(!pilavacia(&auxiliar11_2)){
        apilar(&pilaFinal11, desapilar(&auxiliar11_2));
    }
    mostrar(&pilaFinal11);*/

    // Ejercicio 13

    /*Pila mazo13, jugador1, jugador2, totalPuntos;
    inicpila(&mazo13);
    inicpila(&jugador1);
    inicpila(&jugador2);
    inicpila(&totalPuntos);

    int sigue13 = 0;
    int winner = 0;
    int totalPuntosJugador1 = 0;
    int totalPuntosJugador2 = 0;

    apilar(&mazo13, 4);
    apilar(&mazo13, 8);
    apilar(&mazo13, 12);
    apilar(&mazo13, 16);

    for(int i = 0; i < 2; i++) {
        apilar(&jugador1, desapilar(&mazo13));
    }
    for(int i = 0; i < 2; i++) {
        apilar(&jugador2, desapilar(&mazo13));
    }

    while(!pilavacia(&jugador1)) {
        totalPuntosJugador1 += tope(&jugador1);
        apilar(&totalPuntos, desapilar(&jugador1));
    }
    while(!pilavacia(&jugador2)) {
        totalPuntosJugador2 += tope(&jugador2);
        apilar(&totalPuntos, desapilar(&jugador2));
    }

    if(totalPuntosJugador1 >= totalPuntosJugador2) {
        printf("El ganador es el jugador N°1, con %i puntos, contra los %i del jugador N°2. \N", totalPuntosJugador1, totalPuntosJugador2);

    }else{
        printf("El ganador es el jugador N°2, con %i puntos, contra los %i del jugador N°1. \N", totalPuntosJugador2, totalPuntosJugador1);
    }*/










return 0;
}
