#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <fstream>


using namespace std;

struct paciente
{
	char nombre[50];
	int edad;
	char sexo[10];
	string direccion;
	int telefono;
};

void pausa();
//void crear();
void introducirPaciente();
void listado();
void consulta();
void modificar();




int main()
{


    bool bandera=false;

    char tecla;
    char opc;


do
{
 system("cls");
 cin.clear();

cout<<"Hola, Bienvenidos a su clinica"<<endl;
cout << "\n Menu de Opciones:";
cout<<endl<<"===================="<<endl;
cout<< "A- Paciente"<<endl;
cout<< "B- Citas "<<endl;
cout<< "C- Hsitorial Medico"<<endl;
cout<< "D- Historial de tratamientos"<<endl;
cout<< "E- Salir"<<endl;
cout<< "\nElija su opcion: ";


cin >> tecla;


		switch(tecla)

		{

			case 'A':

				system("cls");
          
		  cout<<" Elija la opcion deseada: "<<endl;
          cout<<"============================="<<endl;
		  cout<<"1- Añadir Paciente"<<endl;
          cout<<"2- Modificar nombre"<<endl;
          cout<<"3- Modificar direccion"<<endl;
          cout<<"4- Borar direccón"<<endl;
          cout<<"5- Modificar telefono"<<endl;
          cout<<"6- Borrar telefono"<<endl;
          cout<<"7- Mostrar datos del paciente"<<endl;
          cout<<"============================="<<endl;
          cin>>opc;
				
				switch(opc)
		{
					
					case'1':
					
					pausa();
					break;
					
					
					case'2':
					
					pausa();
					break;
					
					
					case'3':
					
					pausa();
					break;
					
					
					case'4':
					
					pausa();
					break;
					
					
					case'5':
					
					pausa();
					break;
					
					
					case'6':
					
					pausa();
					break;
					
					
					case'7':
					
					pausa();
					break;
					
	             }								
					
				break;	
					
					

			case 'B':

				system("cls");

            cout<<" Elija la opcion deseada: "<<endl; 
		    cout<<"============================="<<endl;
			cout<<"1- Añadir cita"<<endl;
            cout<<"2- Modificar cita"<<endl;
            cout<<"3- Eliminar cita"<<endl;
            cout<<"4- Mostrar citas del dia"<<endl;
            cout<<"5- Mostrar citas por paciente"<<endl;
            cout<<"============================="<<endl;
			cin>>opc;
				
			switch(opc)
		{
					
					case'1':
					
					pausa();
					break;
					
					
					case'2':
					
					pausa();
					break;
					
					
					case'3':
					
					pausa();
					break;
					
					
					case'4':
					
					pausa();
					break;
					
					
					case'5':
					
					pausa();
					break;
					
	             }								
				
			break;
 

			case 'C':

				system("cls");

             cout<<" Elija la opcion deseada: "<<endl;
             cout<<"============================="<<endl;
			 cout<<"1- Añadir antecedente"<<endl;
             cout<<"2- Modificar antecedente"<<endl;
             cout<<"3- Borrar antecedente"<<endl;
             cout<<"4- Añadir alergia"<<endl;
             cout<<"5- Modificar alergia"<<endl;
             cout<<"6- Borrar alergia"<<endl;
             cout<<"7- Mostrar Historial Medico"<<endl;
             cout<<"============================="<<endl;
             cin>>opc;
             
             	switch(opc)
		{
					
					case'1':
					
					pausa();
					break;
					
					
					case'2':
					
					pausa();
					break;
					
					
					case'3':
					
					pausa();
					break;
					
					
					case'4':
					
					pausa();
					break;
					
					
					case'5':
					
					pausa();
					break;
					
					
					case'6':
					
					pausa();
					break;
					
					
					case'7':
					
					pausa();
					break;
					
	             }							

                break;

			
			
			case 'D':

				system("cls");

			cout<<" Elija la opcion deseada: ";
            cout<<"============================="<<endl;
			cout<<"1- Añadir tratamiento"<<endl;
            cout<<"2- Modificar tratamiento"<<endl;
            cout<<"3- Eliminar tratamiento"<<endl;
            cout<<"4- Mostrar tratamiento"<<endl;
            cout<<"============================="<<endl;
			cin>>opc;
            
            switch(opc)
		{
					
					case'1':
					
					pausa();
					break;
					
					
					case'2':
					
					pausa();
					break;
					
					
					case'3':
					
					pausa();
					break;
					
					
					case'4':
					
					pausa();
					break;
					
	             }								
			
            break;  	
				  
		      
			  case 'E':

				bandera=true;

				//exit(1);

				break;

 

			default:

				system("cls");

				cout << "Opcion no valida.\a\n";

				pausa();

				break;

		}

    }while(bandera!=true);

 

    return 0;

}

 

void pausa()

{

    cout << "Pulsa una tecla para continuar...";

    getwchar();

    getwchar();

}

/*
void crear(){
	ofstream arch("Registro.dat", ios::out | ios::binary);
	if(arch==NULL){
		exit (1);
	}
	fclose(arch);
	pausa();
}
*/


void introducirPaciente(){

	ofstream arch("Registro.dat", ios::out | ios::binary);

	paciente paci;
	cout << "Ingrese el nombre completo del paciente:";
	cin >> paci.nombre;

	cout << "Ingrese la edad del paciente:";
	cin >> paci.edad;

	cout << "Ingrese el sexo del paciente:";
	cin >> paci.sexo;

	cout << "Ingrese la direccion del paciente:";
	cin >> paci.direccion;

	cout << "Ingrese el telefono del paciente:";
	cin >> paci.telefono;

	arch.write(reinterpret_cast<char *>(&paci), sizeof(paciente));
	arch.close();

	pausa();
}

void listado(){

	paciente paci;
	ifstream arch("Registro.dat", ios::in | ios::binary);
	arch.read(reinterpret_cast<char *>(&paci), sizeof(paciente));

	while(!arch.eof()){
		cout << paci.nombre << endl;
		cout << paci.edad << endl;
		cout << paci.sexo << endl;
		cout << paci.direccion << endl;
		cout << paci.telefono << endl;
		arch.read(reinterpret_cast<char *>(&paci), sizeof(paciente));
	}
	arch.close();
	pausa();
}

void consulta(){

	paciente paci;
	ifstream arch("Registro.dat", ios::in | ios::binary);
	
	cout << "Introduce el nombre del paciente que quiere consultar:";
	char aux;
	cin >> aux;
	int existe=0;
	arch.read(reinterpret_cast<char *>(&paci), sizeof(paciente));
	
	while(!arch.eof()){

		if(aux==paci.nombre){
			cout << paci.nombre << endl;
			cout << paci.edad << endl;
			cout << paci.sexo << endl;
			cout << paci.direccion << endl;
			cout << paci.telefono << endl;
			existe=1;
			break;
		}
		arch.read(reinterpret_cast<char *>(&paci), sizeof(paciente));
	}

	if(existe==0){
		cout << "No existe un paciente con ese nombre" << endl;
	}
	arch.close();
	pausa();
}

void modificar(){

	paciente paci;
	
}
