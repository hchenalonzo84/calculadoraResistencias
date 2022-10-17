#include <iostream>
#include <string>
#include <stdio.h>
#include <Windows.h>
#include <cstring>
#include <string.h>

using namespace std;

  int banda3=0;
  int controlador9=0;
 

   double calculoMultiplicador5bandas(int opcion);
   double concatenacionDe5Bandas(int banda1, int banda2,int banda3, double multi);
   double calculo5bandasConUnidades( double bandasUnidas,int opMedida);


 double tipo5Bandas(){
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
           cout<<"\t\t\t\t\tOpcion no valida, Selecione alguna de las opciones existente"<<endl;
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
           cout<<"\t\t\t\t\tOpcion no valida, Selecione alguna de las opciones existente"<<endl;
           controlador4=0;
           banda2=0;
           system("PAUSE");
           system("cls");
        
        }
    } while (controlador4!=1);
   
       //ciclo de control  para evitar que escoga el usuario una opcion no valida
    do
    {
      //opciones para banda 3
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
        cin>>banda3;
          if (banda3>=0 && banda3<=9)
        {
           controlador9=1;
           system("cls");

        }else
        {
           cout<<"\t\t\t\t\tOpcion no valida, Selecione alguna de las opciones existente"<<endl;
           controlador9=0;
           banda3=0;
           system("PAUSE");
           system("cls");
        
        }
    } while (controlador9!=1);
   
          //ciclo de control  para evitar que escoga el usuario una opcion no valida
    do
    {
      //opciones para banda  multiplicadora
        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        cout<<"\t\t\t\t\t-   Selecione color de Banda Multiplicadora  -"<<endl;
        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        cout<<endl;
        cout<<"\t\t\t\t\t--1. color negro     x 1----------------------"<<endl;
        cout<<"\t\t\t\t\t--2. color cafe      x 10---------------------"<<endl;
        cout<<"\t\t\t\t\t--3. color rojo      x 100--------------------"<<endl;
        cout<<"\t\t\t\t\t--4. color naranja   x 1,000-------------------"<<endl;
        cout<<"\t\t\t\t\t--5. color amarillo  x 10,000------------------"<<endl;
        cout<<"\t\t\t\t\t--6. color verde     x 100,000-----------------"<<endl;
        cout<<"\t\t\t\t\t--7. color azul      x 1,000,000----------------"<<endl;
        cout<<"\t\t\t\t\t--8. color morado    x 10,000,000---------------"<<endl;
        cout<<"\t\t\t\t\t--9. color dorado    x 0.1--------------------"<<endl;
        cout<<"\t\t\t\t\t--10. color plateado x 0.01-------------------"<<endl;
        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        // leyendo y guardando opcion seleccionada
        cin>>opBandaMultiplicadora;
          if (opBandaMultiplicadora>=1 && opBandaMultiplicadora<=10)
        {
           controlador5=1;
           system("cls");
        }else
        {
           cout<<"\t\t\t\t\tOpcion no valida, Selecione alguna de las opciones existente"<<endl;
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
        cout<<"\t\t\t\t\t--1. color negro    1% -------------------------"<<endl;
        cout<<"\t\t\t\t\t--2. color cafe     2% -------------------------"<<endl;
        cout<<"\t\t\t\t\t--3. color verde    0.5% -----------------------"<<endl;
        cout<<"\t\t\t\t\t--4. color azul     0.25% ----------------------"<<endl;
        cout<<"\t\t\t\t\t--5. color morado   0.10% ----------------------"<<endl;
        cout<<"\t\t\t\t\t--6. color gris     0.05% ----------------------"<<endl;
        cout<<"\t\t\t\t\t--7. color dorado   5% -------------------------"<<endl;
        cout<<"\t\t\t\t\t--8. color plateado 10% ------------------------"<<endl;
       
        cout<<"\t\t\t\t\t-----------------------------------------------"<<endl;
        // leyendo y guardando opcion seleccionada
        cin>>tolerancia;
          if (tolerancia>=1 && tolerancia<=8)
        {
          if (tolerancia==1)
          {
            mensajeTolerancia="1%";
          }
          if (tolerancia==2)
          {
            mensajeTolerancia="2%";
          }
          if (tolerancia==3)
          {
            mensajeTolerancia="0.5%";
          }
          if (tolerancia==4)
          {
            mensajeTolerancia="0.25%";
          }
          if (tolerancia==5)
          {
            mensajeTolerancia="0.10%";
          }
          if (tolerancia==6)
          {
            mensajeTolerancia="0.05%";
          }
          if (tolerancia==7)
          {
            mensajeTolerancia="5%";
          }
          if (tolerancia==8)
          {
            mensajeTolerancia="10%";
          }
          
           controlador6=1;
           system("cls");
        }else
        {
           cout<<"\t\t\t\t\tOpcion no valida, Selecione alguna de las opciones existente"<<endl;
           controlador6=0;
           tolerancia=0;
           system("PAUSE");
           system("cls");
        
        }
    } while (controlador6!=1);

        // ciclo de control para elegir tolerancia de la resistencia
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
            // coondicional que evlaua las opciones selecionadas por el usuario
           if (opMedida>=1 && opMedida<=4)
        {
            // condicional  que evalua la opcion  de la unidad de medida a mostrar
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
           cout<<"\t\t\t\t\tOpcion no valida, Selecione alguna de las opciones existente"<<endl;
           controlador7=0;
           opMedida=0;
           system("PAUSE");
           system("cls");
        
        }
    } while (controlador7!=1);

   cout<<endl;
   // se  manda a llamar  a metodo que devuelve el valor a multiplicar por las bandas concatenadas
   bandaMultiplicadora = calculoMultiplicador5bandas(opBandaMultiplicadora);

   // se  manda a llamar metodo
   bandasUnidas= concatenacionDe5Bandas(banda1, banda2, banda3, bandaMultiplicadora);

   resultadoFinal= calculo5bandasConUnidades(bandasUnidas,opMedida); 

   cout<<endl;
   cout<<"\t\t\t\t\tel valor de la resistencia es de :"<<resultadoFinal<<" "<<mensajeMedida<<" con una tolerancia de: "<<mensajeTolerancia<<endl;
   cout<<endl;
   system("pause");

   do
       {                      
          cout<<"\t\t\t\t\tsi desea realizar otra operacion ingrese (si/no)"<<endl;
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
               cout<<"\t\t\t\t\t-----------saliendo del sistema de calculo....."<<endl;
               Sleep(1000);// funcion que detiene el programa por 300 ms
               system("cls"); // funcion que limpia la consola
               exit(0);
            }else                       
            {
               cout<<endl;
               cout<<"\t\t\t\t\tOpcion no valida"<<endl;
               subOpcion=="";
               controlador8=0;
            }
        } while (controlador8!=1);
    return 0;
 }