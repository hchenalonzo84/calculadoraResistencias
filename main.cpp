#include <iostream>
#include <string>
#include <stdio.h>
#include <Windows.h>
#include <cstring>
#include <string.h>
#include "generales.h"
#include "4bandas.h"
#include "5bandas.h"

using namespace std;

//declaracion de variables y metodos  globales

int main(int argc, char const *argv[])
{
    //declaracionde variables locales
    int controlador1=0;
    int controlador2=0;
    int tipoBanda=0;
    do
    {
        do
        {
             // arreglo bidimensional para mostrar logo UMG
        int matriz[7][31]={
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,1,0,0,1,1,0,1,1,1,1,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,1,1,0,1,0,1,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,1,0,1,0,1,1,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0,0,0,0,1,0,1,1,1,1,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        };
        
        // ciclo para recorrer las filas del arreglo
        for (int i = 0; i < 7; i++)
        {    
            cout<<"\t\t\t\t\t";
            //ciclo para recorrer columnas del arreglo
            for (int j = 0; j < 31; j++)
            {
            // condicional que evaluar cuando hay 1 en cada fila y columna   y lo mande a imprimir en consola
            if (matriz[i][j]==1) cout<<char(219), Sleep(10); 
            else  cout<<" ";      // caso contrario solo imprime un espacio 
            }
             cout<<endl; //saldo de linea al terminar de leer cada fila
             Sleep(30);
        } 

        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        cout<<"\t\t\t\t\t-      Bienvendio seleccione una opcion      -"<<endl;
        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        cout<<endl;
        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        cout<<"\t\t\t\t\t-      Escoga  el tipo de resistencia        -"<<endl;
        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        cout<<endl;
        cout<<"\t\t\t\t\t--1. resistencia de 4 bandas de colores-------"<<endl;
        cout<<"\t\t\t\t\t--2. resistencia de 5 bandas de colores-------"<<endl;
        cout<<"\t\t\t\t\t--7. Salir del sistema------------------------"<<endl;
        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        // leyendo y guardando opcion seleccionada
        cin>>tipoBanda;
        // condicional que evalua la tipoBanda seleccionada
        if (tipoBanda>=1 && tipoBanda<=3)
        {
           controlador2=1;
        }else
        {
           cout<<" Opcion no valida, Selecione alguna de las opciones existente";
           controlador2=0;
           tipoBanda=0;
           system("PAUSE");
           system("cls");
        //    _sleep(2000);
        }

        } while (controlador2!=0);
        
        switch (tipoBanda)
        {
        case 1:
                 tipo4bandas();
            break;
        case 2:
                 tipo5bandas();
            break;
         case 3:
                 salirSistema();
            break;
        default:
            break;
        }

    } while (controlador1!=1);
    
    
    
    return 0;
}
