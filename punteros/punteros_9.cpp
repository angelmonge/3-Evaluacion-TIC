// Manejo de punteros
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
int  medida(char palabra[]){
    int l = 0 ;
    while(palabra[l] != '\0'){
          l++;    
    }
    return l;
}
int  cuenta_vocales(char palabra[]){
    int nvocales = 0 ;
    int cont=0;
    while(palabra[cont] != '\0'){
          if(palabra[cont] =='a' || palabra[cont] =='e' || palabra[cont] =='i' || palabra[cont] =='o'|| palabra[cont] =='u'){
            nvocales++;
          }
          cont++;
    }
    return nvocales;
}

int  main () {
     char *lista[3];
     int salir;
     char palabra[30];
     int cont;
     int l;
     char *pauxiliar;
     int nveces;
     for(cont = 0 ; cont < 3 ; cont++) {
         std::cout<< " \ nPalabra "<< cont <<": ";
         std::cin>>palabra;  
         l = medida(palabra);
         //printf ( " % i \ n " , l);
         lista[cont]=(char *) malloc(l*sizeof(char ));
         strcpy(lista [cont], palabra);
     }
     for(cont = 0 ; cont < 3 ; cont++) {
           std::cout<< lista[cont];
           std::cout<< "\n";     
              
     }
     std::cout << "La palabra " <<lista[0]<< " tiene " <<cuenta_vocales(lista[0])<<" vocales";
   /*  // Ordenamiento
     para (nveces = 1 ; nveces < 3 ; nveces ++) {
      para (cont = 0 ; cont < 4 ; cont ++) {
        if (* lista [cont]> * lista [cont + 1 ]) {
            printf ( " \ n Cambio% s por% s " , lista [cont], lista [cont + 1 ]);
            pauxiliar = lista [cont];
            lista [cont] = lista [cont + 1 ];
            lista [cont + 1 ] = pauxiliar;
        }
      }
     }
     // Despues del ordenamiento
     printf ( " \ n LISTA ORDENADA: " );
     para (cont = 0 ; cont < 5 ; cont ++) {
         printf ( " \ n % s " , lista [cont]);
     }
     
     printf ( " \ n Toca cualquier tecla: " );
     scanf ( " % i " , & salir);
     */
       std::cout<< "\nToca cualquier letra para salir ";
       std::cin>>salir;
}
