#include <iostream>
#include <string>
#include <stdio.h>
#include <Windows.h>
#include <cstring>
#include <string.h>

using namespace std;

int banda1=0; // variable para almacenar valor de  banda 1
int banda2=0; // variable para almacenar valor de  banda 1
double bandasUnidas=0;
int controlador1=0; // variable de control para salir o permanecer en el sistema
int controlador3=0; // variable de control para menu de banda 1 de colores
int controlador4=0; // variable de control para menu  de banda 2 de colores
int controlador5=0; // variable de control para menu  de banda 2 de colores
int controlador6=0; // variable de control para menu  de banda 2 de colores
int opMedida=0;
double bandaMultiplicadora=0; // variable para almacenar banda multiplicadora 
int tolerancia=0; // variables para almacenar la tolerancia de la resistencia
double opBandaMultiplicadora=0; // variable que almacena opcion de banda multiplicadora
string mensajeMedida="";
// string subOpcion="";
int controlador7=0; // variable de control para unidad de medida y banda multiplicador
int controlador8=0; // variable de control para realizar otra operacion en el menu principal o salir del sistema
double resultadoFinal=0;
double concatenacionDeBandas(int banda1, int banda2, double bandaMulti);
double calculo4bandasConUnidades( double bandasUnidas,int opMedida);
double calculoMultiplicador(int opcion);
 double tipo4bandas(){
   //ciclo de control  para evitar que escoga el usuario una opcion no valida
    do
    {
      // opciones para banda 1
        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        cout<<"\t\t\t\t\t-   Selecione el color de la primera Banda   -"<<endl;
        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        cout<<endl;
        cout<<"\t\t\t\t\t--0. color negro -----------------------------"<<endl;
        cout<<"\t\t\t\t\t--1. color cafe-------------------------------"<<endl;
        cout<<"\t\t\t\t\t--2. color rojo-------------------------------"<<endl;
        cout<<"\t\t\t\t\t--3. color naranja----------------------------"<<endl;
        cout<<"\t\t\t\t\t--4. color amarillo---------------------------"<<endl;
        cout<<"\t\t\t\t\t--5. color verde------------------------------"<<endl;
        cout<<"\t\t\t\t\t--6. color azul-------------------------------"<<endl;
        cout<<"\t\t\t\t\t--7. color morado-----------------------------"<<endl;
        cout<<"\t\t\t\t\t--8. color gris------------------------------"<<endl;
        cout<<"\t\t\t\t\t--9. color blanco-----------------------------"<<endl;
        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        // leyendo y guardando opcion seleccionada
        cin>>banda1;
          if (banda1>=0 && banda1<=9)
        {
           controlador3=1;
           system("cls");
        }else
        {
           cout<<" Opcion no valida, Selecione alguna de las opciones existente";
           controlador3=0;
           banda1=0;
           system("PAUSE");
           system("cls");
        
        }
    } while (controlador3!=1);

      //ciclo de control  para evitar que escoga el usuario una opcion no valida
    do
    {
      //opciones para banda 2
        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        cout<<"\t\t\t\t\t-   Selecione el color de la segundaa Banda  -"<<endl;
        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        cout<<endl;
        cout<<"\t\t\t\t\t--0. color negro -----------------------------"<<endl;
        cout<<"\t\t\t\t\t--1. color cafe-------------------------------"<<endl;
        cout<<"\t\t\t\t\t--2. color rojo-------------------------------"<<endl;
        cout<<"\t\t\t\t\t--3. color naranja----------------------------"<<endl;
        cout<<"\t\t\t\t\t--4. color amarillo---------------------------"<<endl;
        cout<<"\t\t\t\t\t--5. color verde------------------------------"<<endl;
        cout<<"\t\t\t\t\t--6. color azul-------------------------------"<<endl;
        cout<<"\t\t\t\t\t--7. color morado-----------------------------"<<endl;
        cout<<"\t\t\t\t\t--8. color gris-------------------------------"<<endl;
        cout<<"\t\t\t\t\t--9. color blanco-----------------------------"<<endl;
        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        // leyendo y guardando opcion seleccionada
        cin>>banda2;
          if (banda2>=0 && banda2<=9)
        {
           controlador4=1;
           system("cls");

        }else
        {
           cout<<" Opcion no valida, Selecione alguna de las opciones existente";
           controlador4=0;
           banda2=0;
           system("PAUSE");
           system("cls");
        
        }
    } while (controlador4!=1);

       //ciclo de control  para evitar que escoga el usuario una opcion no valida
    do
    {
      //opciones para banda  multiplicadora
        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        cout<<"\t\t\t\t\t-   Selecione color de Banda Multiplicadora  -"<<endl;
        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        cout<<endl;
        cout<<"\t\t\t\t\t--1. color negro    x 1-----------------------"<<endl;
        cout<<"\t\t\t\t\t--2. color cafe     x 10----------------------"<<endl;
        cout<<"\t\t\t\t\t--3. color rojo     x 100---------------------"<<endl;
        cout<<"\t\t\t\t\t--4. color naranja  x 1000--------------------"<<endl;
        cout<<"\t\t\t\t\t--5. color amarillo x 10000-------------------"<<endl;
        cout<<"\t\t\t\t\t--6. color verde    x 100000------------------"<<endl;
        cout<<"\t\t\t\t\t--7. color azul     x 1000000-----------------"<<endl;
        cout<<"\t\t\t\t\t--8. color morado   x 10000000----------------"<<endl;
        cout<<"\t\t\t\t\t--9. color gris     x 100000000- -------------"<<endl;
        cout<<"\t\t\t\t\t--10. color blanco  x 1000000000--------------"<<endl;
        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        // leyendo y guardando opcion seleccionada
        cin>>opBandaMultiplicadora;
          if (opBandaMultiplicadora>=1 && opBandaMultiplicadora<=10)
        {
           controlador5=1;
           system("cls");
        }else
        {
           cout<<" Opcion no valida, Selecione alguna de las opciones existente";
           controlador5=0;
           opBandaMultiplicadora=0;
           system("PAUSE");
           system("cls");
        
        }
    } while (controlador5!=1);
    
          //ciclo de control  para evitar que escoga el usuario una opcion no valida
    do
    {
      //opciones para banda  tolerancia
        cout<<"\t\t\t\t\t-----------------------------------------------"<<endl;
        cout<<"\t\t\t\t\t-  Selecione el color de  Banda de tolerancia -"<<endl;
        cout<<"\t\t\t\t\t-----------------------------------------------"<<endl;
        cout<<endl;
        cout<<"\t\t\t\t\t--1. color rojo     2% ------------------------"<<endl;
        cout<<"\t\t\t\t\t--2. color dorado   5% ------------------------"<<endl;
        cout<<"\t\t\t\t\t--3. color plata   10% ------------------------"<<endl;
       
        cout<<"\t\t\t\t\t-----------------------------------------------"<<endl;
        // leyendo y guardando opcion seleccionada
        cin>>tolerancia;
          if (tolerancia>=1 && tolerancia<=3)
        {
           controlador6=1;
           system("cls");
        }else
        {
           cout<<" Opcion no valida, Selecione alguna de las opciones existente";
           controlador6=0;
           tolerancia=0;
           system("PAUSE");
           system("cls");
        
        }
    } while (controlador6!=1);

    do
    {
        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        cout<<"\t\t\t\t\t-   Selecione la Unidad de media que  desea  -"<<endl;
        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        cout<<endl;
        cout<<"\t\t\t\t\t--1. Ohm   -----------------------------------"<<endl;
        cout<<"\t\t\t\t\t--2. K Ohm -----------------------------------"<<endl;
        cout<<"\t\t\t\t\t--3. M Ohm -----------------------------------"<<endl;
        cout<<"\t\t\t\t\t--4. G Ohm -----------------------------------"<<endl;
       cin>>opMedida;
           if (opMedida>=1 && opMedida<=4)
        {
             if (opMedida==1)
             {
               mensajeMedida="Ohm";
             }
             if (opMedida==2)
             {
               mensajeMedida="K Ohm";
             }
             if (opMedida==3)
             {
               mensajeMedida="M Ohm";
             } 
             if (opMedida==4)
             {
               mensajeMedida="G Ohm";
             }   
           controlador7=1;
           system("cls");
        }else
        {
           cout<<" Opcion no valida, Selecione alguna de las opciones existente";
           controlador7=0;
           opMedida=0;
           system("PAUSE");
           system("cls");
        
        }
    } while (controlador7!=1);
    

   cout<<endl;
  //  cout<<"la primera banda es:\t"<<banda1<<endl;
  
  bandaMultiplicadora= calculoMultiplicador(opBandaMultiplicadora);

   bandasUnidas= concatenacionDeBandas(banda1, banda2, bandaMultiplicadora);

   resultadoFinal= calculo4bandasConUnidades(bandasUnidas,opMedida); 
   cout<<endl;
   cout<<"el valor de la resistencia es de :"<<resultadoFinal<<" "<<mensajeMedida<<" con una tolerancia de: "<<tolerancia<<" % "<<endl;
   cout<<endl;
   system("pause");
    do
       {                      
          cout<<"si desea realizar otra operacion ingrese (si/no)";
          cin>>subOpcion;
          if (subOpcion=="si")
           {
              controlador8=1;
              controlador1=0;
              Sleep(1000);
              system("cls");
            }else if (subOpcion=="no")
            {
               cout<<endl;
               cout<<"-----------saliendo del sistema de calculo.....";
               Sleep(1000);// funcion que detiene el programa por 300 ms
               system("cls"); // funcion que limpia la consola
               exit(0);
            }else                       
            {
               cout<<endl;
               cout<<"Opcion no valida";
               subOpcion=="";
               controlador8=0;
            }
        } while (controlador8!=1);
 return 0;
 }
   