#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <fstream>


using namespace std;

//Struct para registrar los pacientes y sus datos.
struct paciente
{
	char nombre[50];
	int edad;
	char sexo[10];
	char direccion[50];
	int telefono;
};

void pausa();

//Funciones para crear, leer y modificar pacientes.
void introducirPaciente();
void listadoPacientes();
void consultaPaciente();
void modificarPaciente();

//Funciones para crear, leer y modificar tratamientos.


int main()
{


    bool bandera=false;

    char tecla;
    char opc;


do
{
 system("cls");
 cin.clear();

std::cout<<"Hola, Bienvenidos a su clinica"<<endl;
std::cout << "\n Menu de Opciones:";
cout<<endl<<"===================="<<endl;
cout<< "A- Pacientes"<<endl;
cout<< "B- Citas "<<endl;
cout<< "C- Hsitoriales Medicos"<<endl;
cout<< "D- Historiales de tratamientos"<<endl;
cout<< "E- Salir"<<endl;
cout<< "\nElija su opcion: ";


cin >> tecla;


		switch(tecla)

		{

			case 'A':

				system("cls");
          
	      cout<<" Elija la opcion deseada: "<<endl;
          cout<<"============================="<<endl;
 	      cout<<"1- A�adir Paciente"<<endl;
          cout<<"2- Modificar paciente"<<endl;
          cout<<"3- Mostrar listado de pacienetes"<<endl;
          cout<<"4- Mostrar datos del paciente"<<endl;
          cout<<"============================="<<endl;
          cin>>opc;
				
				switch(opc)
		{
					
					case'1':
					introducirPaciente();
					pausa();
					break;
					
					
					case'2':
				    modificarPaciente();
					pausa();
					break;
					
					
					case'3':
					listadoPacientes();
					pausa();
					break;
					
					
					case'4':
					consultaPaciente();
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

void introducirPaciente(){

	ofstream arch("Registro.dat", ios::out | ios::trunc | ios::binary);

	if(arch.good()){
		paciente paci;

		cout << "Bienvenido a la creacion de registro para un nuevo paciente";
		cout << "===============================================================" << endl;		
		cout << "Ingrese el nombre y apellidos del paciente:";
		cin >> paci.nombre;
		cout << endl;

		cout << "Ingrese la edad del paciente:";
		cin >> paci.edad;
		cout << endl;

		cout << "Ingrese el sexo del paciente:";
		cin >> paci.sexo;
		cout << endl;

		cout << "Ingrese la direccion del paciente:";
		cin >> paci.direccion;
		cout << endl;

		cout << "Ingrese el telefono del paciente:";
		cin >> paci.telefono;
		cout << endl;		
		cout << "=====================================================" << endl;

		arch.write(reinterpret_cast<char *>(&paci), sizeof(paciente));
	}

	else{
		cout << "El Fichero del registro no esta disponible" << endl;
		if(arch.fail()) cout << "Bit fail activo" << endl;
		if(arch.eof())  cout << "Bit eof activo" << endl;
		if(arch.bad())  cout << "Bit bad activo" << endl;
	}	
	arch.close();
	
}

void listadoPacientes(){

	paciente paci;
	ifstream arch("Registro.dat", ios::in | ios::binary);

	if(arch.good()){
		arch.read(reinterpret_cast<char *>(&paci), sizeof(paciente));

		while(!arch.eof()){
			cout << "=====================================================" << endl;			
			cout << "Paciente: ";
			cout << paci.nombre << endl;
			cout << "Edad: ";
			cout << paci.edad << endl;
			cout << "Sexo: ";
			cout << paci.sexo << endl;
			cout << "Direccion: ";
			cout << paci.direccion << endl;
			cout << "Telefono: ";
			cout << paci.telefono << endl;
			cout << "=====================================================" << endl;
			arch.read(reinterpret_cast<char *>(&paci), sizeof(paciente));
		}
	}

	else{
		cout << "El Fichero del registro no esta disponible" << endl;
		if(arch.fail()) cout << "Bit fail activo" << endl;
		if(arch.eof())  cout << "Bit eof activo" << endl;
		if(arch.bad())  cout << "Bit bad activo" << endl;
	}
	arch.close();
	
}

void consultaPaciente(){

	paciente paci;
	ifstream arch("Registro.dat", ios::in | ios::binary);
	
	if(arch.good()){
		cout << "Introduce el nombre del paciente que quiere consultar:";
		char* aux;
		cin >> aux;
		int existe=0;
		arch.read(reinterpret_cast<char *>(&paci), sizeof(paciente));
	
		while(!arch.eof()){

			if(aux=paci.nombre){
				cout << "=====================================================" << endl;				
				cout << "Paciente: ";
				cout << paci.nombre << endl;
				cout << "Edad: ";
				cout << paci.edad << endl;
				cout << "Sexo: ";
				cout << paci.sexo << endl;
				cout << "Direccion: ";
				cout << paci.direccion << endl;
				cout << "Telefono: ";
				cout << paci.telefono << endl;
				cout << "=====================================================" << endl;				
				existe=1;
				break;
			}
			arch.read(reinterpret_cast<char *>(&paci), sizeof(paciente));
		}

		if(existe==0){
			cout << "No existe un paciente con ese nombre" << endl;
		}
	}

	else{
		cout << "El Fichero del registro no esta disponible" << endl;
		if(arch.fail()) cout << "Bit fail activo" << endl;
		if(arch.eof())  cout << "Bit eof activo" << endl;
		if(arch.bad())  cout << "Bit bad activo" << endl;
	}
	arch.close();
	
}

void modificarPaciente(){

	paciente paci;
	fstream arch("Registro.dat", ios::in | ios::out | ios::binary);

	if(arch.good()){
		cout << "Introduce el nombre y apellidos del paciente que quiere modificar: ";
		char* aux;
		cin >> aux;
		cout << endl;
		int existe=0;
		arch.read(reinterpret_cast<char *>(&paci), sizeof(paciente));
	
		while(!arch.eof()){

			if(aux=paci.nombre){

				cout << "=====================================================" << endl;
				cout << "Paciente: ";
				cout << paci.nombre << endl;
				cout << "Edad: ";
				cout << paci.edad << endl;
				cout << "Sexo: ";
				cout << paci.sexo << endl;
				cout << "Direccion: ";
				cout << paci.direccion << endl;
				cout << "Telefono: ";
				cout << paci.telefono << endl;
				cout << "=====================================================" << endl;
				cout << "Ahora introduzca los nuevos datos" << endl;
				cout << "=====================================================" << endl;				 				

				cout << "Ingrese el nombre y apellidos del paciente: ";
				cin >> paci.nombre;
				cout << endl;

				cout << "Ingrese la edad del paciente: ";
				cin >> paci.edad;
				cout << endl;

				cout << "Ingrese el sexo del paciente: ";
				cin >> paci.sexo;
				cout << endl;

				cout << "Ingrese la direccion del paciente: ";
				cin >> paci.direccion;
				cout << endl;

				cout << "Ingrese el telefono del paciente: ";
				cin >> paci.telefono;
				cout << endl;				
				cout << "=====================================================" << endl;
				
				//int pos=ftell(arch)-sizeof(paciente);
				//fseek(arch, pos, SEEK_SET);
				arch.write(reinterpret_cast<char *>(&paci), sizeof(paciente));

				existe=1;
				break;
			}
			arch.read(reinterpret_cast<char *>(&paci), sizeof(paciente));
		}

		if(existe==0){
			cout << "No existe un paciente con ese nombre" << endl;
		}
	}

	else{
		cout << "El Fichero del registro no esta disponible" << endl;
		if(arch.fail()) cout << "Bit fail activo" << endl;
		if(arch.eof())  cout << "Bit eof activo" << endl;
		if(arch.bad())  cout << "Bit bad activo" << endl;
	}
	arch.close();
	
}