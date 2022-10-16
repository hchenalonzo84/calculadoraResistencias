#include <iostream>
#include <string>
#include <stdio.h>
#include <Windows.h>
#include <cstring>
#include <string.h>
#include "generales.h"
#include "4bandas.h"
#include "calculo4Bandas.h"
#include "5bandas.h"

using namespace std;

//SECCION DE METODOS GLOBALES
double tipo4bandas();
double tipo5Bandas();
int salirSistema();
double calculoMultiplicador(int opcion); // metodo para calcular el multiplicador de la banda
double concatenacionDeBandas(int banda1, int banda2, double bandaMulti);
double calculo4bandasConUnidades( double bandasUnidas,int opMedida);
//SECCION DE VARIABLES GLOBALES


int main(int argc, char const *argv[])
{
    //declaracionde variables locales
    int controlador2=0; //variable de control  para el menu principal  
    int tipoBanda=0;  
    int banda1=0; // variable para almacenar valor de  banda 1
    int banda2=0; // variable para almacenar valor de  banda 2
    int banda3=0; // variable para almacenar valor de  banda 3
    double bandasUnidas=0; // variable para almacenar las banda concatenadas.
    int controlador1=0; // variable de control para salir o permanecer en el sistema
    int controlador3=0; // variable de control para la opcion de banda 1 de colores
    int controlador4=0; // variable de control para la opcion  de banda 2 de colores
    int controlador5=0; // variable de control para la opcion de la banda multiplicador de colores
    int controlador6=0; // variable de control para la opcion de la banda de tolerancia
    int controlador7=0; // variable de control para unidad de medida
    int controlador8=0; // variable de control para realizar otra operacion en el menu principal o salir del sistema
    int controlador9=0; // variable de control para la opcion de la banda 3.
    double bandaMultiplicadora=0; // variable para almacenar banda multiplicadora 
    double opBandaMultiplicadora=0; // variable que almacena opcion de banda multiplicadora
    int tolerancia=0; // variables para almacenar la tolerancia de la resistencia
    int opMedida=0;
    string mensajeMedida="";
    string subOpc1ion="";
    double resultadoFinal=0;

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
        cout<<"\t\t\t\t\t--3. Salir del sistema------------------------"<<endl;
        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        // leyendo y guardando opcion seleccionada
        cin>>tipoBanda;
        // condicional que evalua la tipoBanda seleccionada
        if (tipoBanda>=1 && tipoBanda<=3)
        {
           controlador2=1;
           system("cls");
        }else
        {
           cout<<" Opcion no valida, Selecione alguna de las opciones existente";
           controlador2=0;
           tipoBanda=0;
           system("PAUSE");
           system("cls");     
        }
                                        
        } while (controlador2!=1);
        
        switch (tipoBanda)
        {
        case 1:
                tipo4bandas();
            break;
         case 2:
                tipo5Bandas();
            break;
        //  case 3:
        //          salirSistema();
        //     break;
        default:
                cout<<"error en el switch case opcion no detectada";
            break;
        }

    } while (controlador1!=1);
    
    
    
    return 0;
}
