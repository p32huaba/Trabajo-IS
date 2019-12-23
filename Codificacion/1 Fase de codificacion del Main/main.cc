#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <fstream>


using namespace std;

//Struct para registrar los pacientes y sus datos.
typedef struct{
	int id;
	char nombre[40];
	int edad;
	char sexo[10];
	char direccion[100];
	int telefono;
	char tratamiento[100];
} paciente;

void pausa();

//Funciones para crear, leer y modificar pacientes.
void introducirPaciente();
void listadoPacientes();
void consultarPaciente();
void modificarPaciente();

//Funciones para crear, leer y modificar tratamientos.
void introducirTratamiento();
void consultarTratamiento();


int main()
{


    bool bandera=false;

    char tecla;
    char opc;


	do{
 		system("cls");
 		cin.clear();

		cout<<"Hola, Bienvenidos a su clinica"<<endl;
		cout<<"Menu de Opciones:"<<endl;
		cout<<"===================="<<endl;
		cout<< "1- Pacientes"<<endl;
		cout<< "2- Citas "<<endl;
		cout<< "3- Hsitoriales Medicos"<<endl;
		cout<< "4- Historiales de tratamientos"<<endl;
		cout<< "5- Salir"<<endl;
		cout<< "Elija su opcion: ";

		cin >> tecla;


		switch(tecla){

			case '1':

			system("cls");
          
	  		cout<<" Elija la opcion deseada: "<<endl;
        	cout<<"===================================="<<endl;
 	  		cout<<"1- Introducir nuevo paciente"<<endl;
        	cout<<"2- Listado de pacientes"<<endl;
        	cout<<"3- Consultar datos de un paciente"<<endl;
        	cout<<"4- Modificar datos de un paciente"<<endl;
        	cout<<"===================================="<<endl;
        	cin>>opc;
				
				switch(opc){
					
					case'1':
					introducirPaciente();
					pausa();
					break;
					
					
					case'2':
					listadoPacientes();
					pausa();
					break;
					
					
					case'3':
					consultarPaciente();
					pausa();
					break;
					
					
					case'4':
					modificarPaciente();
					pausa();
					break;
	            }												
			break;	
					
					

			case '2':

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
				
			switch(opc){
					
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
 

			case '3':

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
             
            switch(opc){
					
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

			
			
			case '4':

			system("cls");

	    	cout<<" Elija la opcion deseada: ";
            cout<<"========================================="<<endl;
	    	cout<<"1- Añadir tratamiento a un paciente"<<endl;
            cout<<"2- Consultar tratamiento de un paciente"<<endl;
            cout<<"3- Modificar tratamiento de un paciente"<<endl;
            cout<<"========================================="<<endl;
			cin>>opc;
            
            switch(opc){
					
				case'1':
				introducirTratamiento();
				pausa();
				break;
					
					
				case'2':
				consultarTratamiento();	
				pausa();
				break;
					
					
				case'3':
				introducirTratamiento();	
				pausa();
				break;
	        }								
			
            break;  	
				  
		      
			case '5':

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

    cout << "Pulsa una tecla para continuar..." << endl;

    getwchar();

    getwchar();

}

void introducirPaciente(){

	ofstream arch("Registro.dat", ios::out | ios::binary);

	if(arch.good()){
		paciente paci;

		cout << "Bienvenido a la creacion de registro para un nuevo paciente" << endl;
		cout << "===============================================================" << endl;	

		cout << "Ingrese el nombre y apellidos del paciente: ";
		cin.ignore();
		cin.getline(paci.nombre, 40);
		cout << endl;

		cout << "Ingrese la edad del paciente: ";
		cin >> paci.edad;
		cout << endl;

		cout << "Ingrese el sexo del paciente: ";
		cin >> paci.sexo;
		cout << endl;

		cout << "Ingrese la direccion del paciente: ";
		cin.ignore();
		cin.getline(paci.direccion, 100);
		cout << endl;

		cout << "Ingrese el telefono del paciente: ";
		cin >> paci.telefono;
		cout << endl;	

		cout << "Ingrese un ID para el paciente: ";
		cin >> paci.id;

		cout << "===============================================================" << endl;
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
			cout << "ID: ";
			cout << paci.id << endl;
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

void consultarPaciente(){

	paciente paci;
	ifstream arch("Registro.dat", ios::in | ios::binary);
	
	if(arch.good()){
		cout << "Introduce el ID del paciente: ";
		int aux;
		cin >> aux;
		int existe=0;
		arch.read(reinterpret_cast<char *>(&paci), sizeof(paciente));
	
		while(!arch.eof()){

			if(aux==paci.id){
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
			cout << "No existe un paciente con ese ID" << endl;
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
		cout << "Introduce el Id del paciente que quiere modificar: " << endl;
		int aux;
		cin >> aux;
		cout << endl;
		int existe=0;
		arch.read(reinterpret_cast<char *>(&paci), sizeof(paciente));
	
		while(!arch.eof()){

			if(aux==paci.id){

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
				cin.ignore();
				cin.getline(paci.nombre, 40);
				cout << endl;

				cout << "Ingrese la edad del paciente: ";
				cin >> paci.edad;
				cout << endl;

				cout << "Ingrese el sexo del paciente: ";
				cin >> paci.sexo;
				cout << endl;

				cout << "Ingrese la direccion del paciente: ";
				cin.ignore();
				cin.getline(paci.direccion, 100);
				cout << endl;

				cout << "Ingrese el telefono del paciente: ";
				cin >> paci.telefono;
				cout << endl;				
				cout << "=====================================================" << endl;
				
				streampos pos = arch.tellg();
				arch.seekp(pos, ios::beg);
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

void introducirTratamiento(){

	paciente paci;
	fstream arch("Registro.dat", ios::in | ios::out | ios::binary);

	if(arch.good()){
		cout << "Introduce el Id del paciente: " << endl;
		int aux;
		cin >> aux;
		cout << endl;
		int existe=0;
		arch.read(reinterpret_cast<char *>(&paci), sizeof(paciente));
	
		while(!arch.eof()){

			if(aux==paci.id){

				cout << "=========================================================" << endl;				 				

				cout << "Introduzca el nuevo tratamiento que va a seguir el paciente: ";
				cin.ignore();
				cin.getline(paci.tratamiento, 100);
				cout << endl;
				
				cout << "=========================================================" << endl;
				
				streampos pos = arch.tellg();
				arch.seekp(pos, ios::beg);
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

void consultarTratamiento(){

	paciente paci;
	ifstream arch("Registro.dat", ios::in | ios::binary);
	
	if(arch.good()){
		cout << "Introduce el ID del paciente: ";
		int aux;
		cin >> aux;
		int existe=0;
		arch.read(reinterpret_cast<char *>(&paci), sizeof(paciente));
	
		while(!arch.eof()){

			if(aux==paci.id){
				cout << "=====================================================" << endl;				
				cout << "Paciente: ";
				cout << paci.nombre << endl;
				cout << "Tratamiento actual: ";
				cout << paci.tratamiento << endl;
				cout << "=====================================================" << endl;				
				existe=1;
				break;
			}
			arch.read(reinterpret_cast<char *>(&paci), sizeof(paciente));
		}

		if(existe==0){
			cout << "No existe un paciente con ese ID" << endl;
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