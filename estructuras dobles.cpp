//programa que muestre un menu de la suscripcion a una revista utilizando estructuras y apuntadores.
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<locale>
using namespace std;
//estructura dentro de otra estructura

struct suscriptor{
    char nombre[25];
    int suscripcion;
    char revista[25];
};
//menu alta y baja de suscripciones
int main(){
    char *locale;
    locale=setlocale(LC_ALL,"");
    struct suscriptor P[10];
    struct suscriptor *apuntador;
    apuntador=P;
    int opcion,c;
    char borrar[25];
    for(int i=0; i<10; i++)
        P[i].nombre[0]='n';
    cout<<"\n\t\tMENÚ\n :::SUSCRIPCION A REVISTAS:::\n 1. dar de alta una suscripcion\n 2. Eliminar suscripcion \n 3. Salir\n¿que opcion desea elejir? "; cin>>opcion;
    switch (opcion){
        case 1:
            for(int i=0;i<10; i++){
                if(P[i].nombre[0]=='n'){
                    cout<<"Nombre: "; fflush(stdin);cin.getline(P[i].nombre,25,'\n');
                    cout<<"tiempo de subscripcion: "; cin>>P[i].suscripcion;
                    cout<<"tipo de revista: "; fflush(stdin); cin.getline(P[i].revista,25,'\n');
                    cout<<'\n';
                    break;
                    }else
                    cout<<"El "<<i+1<<"º ESPACIO OCUPADO"<<endl;
        }break;
        case 2:
            cout<<"introduce el nombre que desea dar de baja: ";fflush(stdin);cin.getline(borrar,25,'\n');
            for(int i=0; i<10; i++){
                c=strcmp(apuntador->nombre,borrar);
                if (c!=0)
                    apuntador++;
                else{
                    P[i].nombre[0]='n';
                    cout<<"SE A ELIMINADO CORRECTAMENTE";
                    break;
                }
            }
            break;
        case 3:
		for(int i=0; i<1; i++){
		cout<<"\tDATOS GUARDADOS"<<endl;
        cout<<"Nombre: "<<apuntador->nombre<<endl;
        cout<<"Tiempo: "<<apuntador->suscripcion<<endl;
        cout<<"Tipo de la Revista:"<<apuntador->revista<<endl;
    }
        	break;
        case 4:
            cout<<"Gracias por visitar!"<<endl;
            break;

    }

    }
