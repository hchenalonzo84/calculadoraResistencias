#include <iostream>
#include <string>
#include <stdio.h>
#include <Windows.h>
#include <cstring>
#include <string.h>

using namespace std;

double concatenacionDeBandas(int banda1, int banda2, double multi){
    // creando variables tipo string
    string banda1str="";
    string banda2str="";
    int bandasUnidas=0;
    double resultado=0;
    string bandasUnidasStr="";
    banda1str= to_string(banda1);
    banda2str = to_string(banda2);

    bandasUnidasStr = banda1str+banda2str;
    
    bandasUnidas = stoi(bandasUnidasStr);    
    
    resultado = bandasUnidas*multi;
    

    return resultado;
}

double calculo4bandasConUnidades(double bandasUnidas, int opMedida){
        double bandaUnida = bandasUnidas;
        int operacion= opMedida;
        double resultado=0;
        if (operacion==1)
        {
            resultado = bandaUnida/1;
            
        }
        if (operacion==2)
        {
             resultado = bandaUnida/1000;
        }
        if (operacion==3)
        {
            resultado = bandaUnida/1000000;
        }
        if (operacion==4)
        {
            resultado = bandaUnida/1000000000;
        }
    return resultado;
}

