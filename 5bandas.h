#include <iostream>
#include <string>
#include <stdio.h>
#include <Windows.h>
#include <cstring>
#include <string.h>

using namespace std;

   int controlador2=0; //variable de control  para el menu principal  
   int banda1=0; // variable para almacenar valor de  banda 1
   int banda2=0; // variable para almacenar valor de  banda 2
   int banda3=0; // variable para almacenar valor de  banda 3
   int controlador3=0; // variable de control para la opcion de banda 1 de colores
   int controlador4=0; // variable de control para la opcion  de banda 2 de colores
   int controlador9=0; // variable de control para la opcion de la banda 3.


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
           cout<<"\t\t\t\t\tOpcion no valida, Selecione alguna de las opciones existente";
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
           cout<<"\t\t\t\t\tOpcion no valida, Selecione alguna de las opciones existente";
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
           cout<<"\t\t\t\t\tOpcion no valida, Selecione alguna de las opciones existente";
           controlador9=0;
           banda3=0;
           system("PAUSE");
           system("cls");
        
        }
    } while (controlador9!=1);
   
   
    return 0;
 }