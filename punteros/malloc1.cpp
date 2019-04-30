#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>

int main(){
    int salir;
    //definimos el vector de PUNTEROS
    int nletras;
    int cont;
    char *palabra;
    char *lista[3];//3 posicones de memoria que apuntan a 3 palabras
    //procedimiento
    for(cont=0;cont<3;cont++){
        //1. Leo una palabra
        std::cout<<"palabra: ";
        std::cin>>palabra;
        //2. Averiguo cuantas letras tiene
        nletras=strlen(palabra);
        //3. Reservo memoria para guardar la palabra
        lista[cont]=malloc(nletras*sizeof(char));
        //4. Escribo la palabra en la memoria reservada
        strcpy(lista[cont],palabra);//copia palabra en lista 
        //5. Volvemos la punto 1.
        }
    printf("\nToca cualquier tecla");
    scanf("%i",&salir);
    }
