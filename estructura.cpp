#include <iostream>
using namespace std;

struct canciones{
	char genero[20];
	int anno;
	char nombre_cancion[30];

};
struct artistas{
	char nombre_vocalista[25];
	int integrantes;
	struct canciones dire;
};	
int main(int argc,char** argv){
	struct artistas A1[5];
	struct artistas *apuntador;
	
	apuntador=A1;
	
	for(int i=0; i<2; i++){
		cout<<"nombre de vocalista: ";
		cin.getline(apuntador->nombre_vocalista,25, '\n');
		cout<<"integrantes: ";
		cin>>apuntador->integrantes;
		cout<<"genero: ";
		fflush(stdin);
		cin.getline(apuntador->dire.genero,20, '\n');
	}
	
	cout<<endl<<"nombre_vocalista guardado: "<<apuntador->nombre_vocalista;
	cout<<endl<<"integrantes guardado: "<<apuntador->integrantes;
	cout<<endl<<"genero: "<<apuntador->dire.genero;
	
	//getch();
	return 0;
}
