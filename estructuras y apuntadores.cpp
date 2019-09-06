#include <iostream>
using namespace std;

struct suscriptor{
	char nombre[20];
	int edad;
	char revista[30];

};
struct revistas{
	char tipo[25];
	int anno;
	struct suscriptor dire;
};	
int main(int argc,char** argv){
	struct revistas R1[10];
	struct revistas *apuntador;
	
	apuntador=R1;
	
	for(int i=0; i<10; i++){
		cout<<"tipo de revista: ";
		cin.getline(apuntador->tipo,25, '\n');
		cout<<"año de publicacion: ";
		cin>>apuntador->anno;
		cout<<"nombre del subcriptor: ";
		fflush(stdin);
		cin.getline(apuntador->dire.nombre,20, '\n');
	}
	
	cout<<endl<<"tipo de revista guardado: "<<apuntador->tipo;
	cout<<endl<<"año de publicacion guardado: "<<apuntador->anno;
	cout<<endl<<"subcritor: "<<apuntador->dire.nombre;
	
	//getch();
	return 0;
}
