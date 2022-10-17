#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>  //
#include <iostream>
#include <string.h>
#include <string>

 using namespace std;

 string subOpcion="";
int controlador1=0;
 int controlador10=0;
void Color(int Background, int Text){ // Función para cambiar el color del fondo y/o pantalla
 HANDLE Console = GetStdHandle(STD_OUTPUT_HANDLE); // Tomamos la consola.
 int    New_Color= Text + (Background * 16);
 SetConsoleTextAttribute(Console, New_Color); // Guardamos los cambios en la Consola.
}

double calculoMultiplicador(int opcion){
    int op=0;
    op=  opcion;
    double operacionMultiplicador=0;
    switch (op)
    {
    case 1:
         operacionMultiplicador=1;
        return operacionMultiplicador;
        break;
    case 2:
         operacionMultiplicador=10;
        return operacionMultiplicador;
        break;
    case 3:
         operacionMultiplicador=100;
        return operacionMultiplicador;
        break;
    case 4:
         operacionMultiplicador=1000;
        return operacionMultiplicador;
        break;
    case 5:
         operacionMultiplicador=10000;
        return operacionMultiplicador;
        break;
    case 6:
         operacionMultiplicador=100000;
        return operacionMultiplicador;
        break;
    case 7:
         operacionMultiplicador=1000000;
        return operacionMultiplicador;
        break;
    case 8:
         operacionMultiplicador=10000000;
        return operacionMultiplicador;
        break;
    case 9:
         operacionMultiplicador=100000000;
        return operacionMultiplicador;
        break;
    case 10:
         operacionMultiplicador=1000000000;
        return operacionMultiplicador;
        break;
    default:
        cout<<"\t\t\t\t\terror fallo  switch calculo de multiplicador"<<endl;
        break;
    }
    return operacionMultiplicador;
}


double calculoMultiplicador5bandas(int opcion){
    int op=0;
    op=  opcion;
    double operacionMultiplicador=0;
    switch (op)
    {
    case 1:
         operacionMultiplicador=1;
        return operacionMultiplicador;
        break;
    case 2:
         operacionMultiplicador=10;
        return operacionMultiplicador;
        break;
    case 3:
         operacionMultiplicador=100;
        return operacionMultiplicador;
        break;
    case 4:
         operacionMultiplicador=1000;
        return operacionMultiplicador;
        break;
    case 5:
         operacionMultiplicador=10000;
        return operacionMultiplicador;
        break;
    case 6:
         operacionMultiplicador=100000;
        return operacionMultiplicador;
        break;
    case 7:
         operacionMultiplicador=1000000;
        return operacionMultiplicador;
        break;
    case 8:
         operacionMultiplicador=10000000;
        return operacionMultiplicador;
        break;
    case 9:
         operacionMultiplicador=0.1;
        return operacionMultiplicador;
        break;
    case 10:
         operacionMultiplicador=0.01;
        return operacionMultiplicador;
        break;
    default:
        cout<<"\t\t\t\t\terror fallo  switch calculo de multiplicador"<<endl;
        break;
    }
    return operacionMultiplicador;
}

int salirSistema(){
     system("cls");
                cout<<"\t\t\t\t\t-----------------------------------------------"<<endl;
                do
                {
                cout<<"\t\t\t\t\t---- ¿Seguro que desea salir del sistema (si/no)?-----"<<endl;
                cin>>subOpcion;
                  if (subOpcion=="si")
                  {
                    cout<<endl;
                    cout<<"\t\t\t\t\t-----------saliendo del sistema de calculo....."<<endl;
                    Sleep(1000);// funcion que detiene el programa por 300 ms
                    system("cls"); // funcion que limpia la consola
                    exit(0);
                  }
                  else if (subOpcion=="no")
                  {
                    controlador10=1;
                    controlador1=0;
                    Sleep(1000);
                    system("cls");
                  }
                  else
                  {
                    cout<<"\t\t\t\t\tOpcion no valida"<<endl;
                    cout<<endl;
                    subOpcion="";
                    controlador10=0;
                  }  
                } while (controlador10!=1);                
                cout<<"\t\t\t\t\t-----------------------------------------------"<<endl;
                cout<<endl;
   return 0;
}