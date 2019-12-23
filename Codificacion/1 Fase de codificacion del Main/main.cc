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

//Struct para registrar las citas
typedef struct
	{
	char hora[10];
	char fecha[10];
	char consulta[10];
	char id[100];
	char medico[20];
	} citas;
	
//Struct para registrar los tratamientos
typedef struct
	{
	char tratamiento[100];
	char fechainicio[15];
	char fechafinal[15];
	} tratamiento;

//Struct para registrar el historial médico
typedef struct
	{
	char id[100];
	char antecedente[100];
	char alergia[100];
	} historial;

//Funciones para crear, leer y modificar pacientes.
void introducirPaciente();
void listadoPacientes();
void consultarPaciente();
void modificarPaciente();
void borrarDatos();

//Funciones para crear, leer y modificar tratamientos.
void introducirTratamiento();
void consultarTratamiento();

//Funciones para crear, mostrar y modificar las citas.
void Introducircita();
void Modificarcita();
void Eliminarcita();
void Mostrarcitadia();
void Mostrarcitapaciente();

//Funciones para crear, mostrar y modificar el historial médico.
void Introducirantecedente();
void Modificarantecedente();
void Borrarantecedente();
void Introduciralergia();
void Modificaralergia();
void Borraralergia();
void Mostrarhistorial();


int main()
{


    bool bandera=false;

    char tecla;
    char opc;


	do{
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
          
	  		cout<<" Elija la opcion deseada: "<<endl;
        	cout<<"===================================="<<endl;
 	  		cout<<"1- Introducir nuevo paciente"<<endl;
        	cout<<"2- Listado de pacientes"<<endl;
        	cout<<"3- Consultar datos de un paciente"<<endl;
        	cout<<"4- Modificar datos de un paciente"<<endl;
        	cout<<"5- Borrar datos de un paciente"<<endl;
        	cout<<"===================================="<<endl;
        	cin>>opc;
				
				switch(opc){
					
					case'1':
					introducirPaciente();
					break;
					
					case'2':
					listadoPacientes();
					break;
					
					case'3':
					consultarPaciente();
					break;
					
					case'4':
					modificarPaciente();
					break;

					case'5':
					borrarDatos();
					break;
	            }												
			break;	
					
					

			case '2':

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
					
				break;
					
					
				case'2':
					
				break;
					
					
				case'3':
					
				break;
					
					
				case'4':
					
				break;
					
					
				case'5':
					
				break;					
	        }								
				
			break;
 

			case '3':

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
					
				break;
					
					
				case'2':
					
				break;
					
					
				case'3':
					
				break;
					
					
				case'4':
					
				break;
					
					
				case'5':
					
				break;
					
					
				case'6':
					
				break;
					
					
				case'7':
					
				break;					
	        }	

            break;

			
			
			case '4':

	    	cout<<" Elija la opcion deseada: "<<endl;
            cout<<"========================================="<<endl;
	    	cout<<"1- Añadir tratamiento a un paciente"<<endl;
            cout<<"2- Consultar tratamiento de un paciente"<<endl;
            cout<<"3- Modificar tratamiento de un paciente"<<endl;
            cout<<"========================================="<<endl;
			cin>>opc;
            
            switch(opc){
					
				case'1':
				introducirTratamiento();
				break;
					
					
				case'2':
				consultarTratamiento();	
				break;
					
					
				case'3':
				introducirTratamiento();	
				break;
	        }								
			
            break;  	
				  
		      
			case '5':

			bandera=true;

			//exit(1);

			break;

 

			default:

			cout << "Opcion no valida.\a\n";

			break;
		}
    }while(bandera!=true);

    return 0;
}


void introducirPaciente(){

	paciente paci;
	ofstream arch("Registro.dat", ios::out | ios::trunc | ios::binary);

	if(arch.good()){

			cout << "Bienvenido a la creacion de registro para un nuevo paciente" << endl;
			cout << "===============================================================" << endl;	

			cout << "Ingrese el nombre y apellidos del paciente: ";
			cin.ignore();
			cin.getline(paci.nombre, 40);

			cout << "Ingrese la edad del paciente: ";
			cin >> paci.edad;

			cout << "Ingrese el sexo del paciente: ";
			cin >> paci.sexo;

			cout << "Ingrese la direccion del paciente: ";
			cin.ignore();
			cin.getline(paci.direccion, 100);

			cout << "Ingrese el telefono del paciente: ";
			cin >> paci.telefono;

			cout << "Ingrese el Id del paciente: ";
			cin >> paci.id;


			cout << "===============================================================" << endl;
			streampos pos = arch.tellp();
			arch.seekp(pos, ios::beg);
			arch.write((char *)&paci, sizeof(paciente));
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

void borrarDatos(){

	paciente paci;
	fstream arch("Registro.dat", ios::in | ios::out | ios::binary);

	if(arch.good()){
		cout << "Introduce el Id del paciente que quiere borrar: " << endl;
		int aux;
		cin >> aux;
		cout << endl;
		int existe=0;
		arch.read(reinterpret_cast<char *>(&paci), sizeof(paciente));
	
		while(!arch.eof()){

			if(aux==paci.id){

				cout << "=====================================================" << endl;
				paci.nombre==0;
				paci.edad=0;
				paci.sexo==0;
				paci.direccion==0;
				paci.telefono=0;
				paci.id=0;				
				cout << "Los datos han sido borrados con exito" << endl;
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
			cout << "No existe un paciente con ese Id" << endl;
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
			cout << "No existe un paciente con ese Id" << endl;
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

void Introducircita()
	{
	citas cita;
	paciente paci;
	fstream arch("Citas.dat", ios::in | ios::out | ios::binary);
	
	if(arch.good() )
		{
		cout << "Introduce el identificador del paciente:" <<endl;	
		int aux;
		cin >> aux;
		cout << endl;
		int existe=0;
		arch.read(reinterpret_cast<char *>(&cita), sizeof(citas));
		
		while(!arch.eof() ) 
			{
			if(aux == paci.id)
				{
				cout << "Introduzca la hora de la cita: ";
				cin.ignore();
				cin.getline(cita.hora, 100);
				cout << endl;

				streampos pos = arch.tellg();
				arch.seekp(pos, ios::beg);
				arch.write(reinterpret_cast<char *>(&cita), sizeof (citas));

				existe=1;
				break;
				}
			arch.read(reinterpret_cast<char *>(&cita), sizeof (citas));
			}
		if (existe == 0)
			{
			cout << "No existe un paciente con ese nombre" <<endl;
			}
		}
	else{
		cout << "El archivo de citas no esta disponible" <<endl;
		if (arch.fail()) cout << "Bit fail activo" << endl;
		if (arch.eof()) cout << "Bit eof activo" << endl;
		if (arch.bad()) cout << "Bit bad activo" << endl;
		}
	arch.close();
	}

void Modificarcita()
	{
	citas cita;
	paciente paci;
	fstream arch("Citas.dat", ios::in | ios::out | ios::binary);

	if(arch.good())
		{
		cout << "Introduce el ID del paciente que quiere modificar su cita: " <<endl;
		int aux;
		cin >> aux;
		cout << endl;
		int existe=0;
		arch.read(reinterpret_cast<char *>(&cita), sizeof(citas));
	
		while(!arch.eof())
			{
			if(aux==paci.id)
				{
				cout << "=====================================" << endl;
				cout << "Hora: ";
				cout << cita.hora <<endl;
				cout << "Fecha: ";
				cout << cita.fecha <<endl;
				cout << "Consulta: ";
				cout << cita.consulta <<endl;
				cout << "ID: ";
				cout << cita.id << endl;
				cout << "Medico: " <<endl;
				cout << cita.medico <<endl;
				cout << "=====================================" << endl;
				cout << "Ahora, proceda a introducir los nuevos datos de la cita" <<endl;
				cout << "=====================================" << endl;
			
				cout << "Ingrese la hora de la nueva cita: ";
				cin.ignore();
				cin.getline(cita.hora, 10);
				cout <<endl;
				
				cout << "Ingrese la fecha de la nueva cita: ";
				cin >> cita.fecha;
				cout << endl;

				cout << "Introduzca la consulta de la nueva cita: ";
				cin >> cita.consulta;
				cout << endl;
				
				cout << "Introduzca el nombre del paciente: ";
				cin >> cita.id;
				cout << endl;
	
				cout << "Introduzca el nombre del médico: ";
				cin >> cita.medico;
				cout << endl;
				cout << "=====================================" << endl;

				streampos pos = arch.tellg();
				arch.seekp(0, ios::beg);
				arch.write(reinterpret_cast<char *>(&cita), sizeof(citas));

				existe=1;
				break;
				}
			arch.read(reinterpret_cast<char *>(&cita), sizeof(citas));
			}
		}			
	}

void Eliminarcita()
	{
	citas cita;
	paciente paci;
	fstream arch("Citas.dat", ios::in | ios::out | ios::binary);
	
	if(arch.good())
		{
		cout << "Introduzca el ID del Paciente que desea borrar la cita: " <<endl;
		int aux;
		cin >> aux;
		cout <<endl;
		int existe=0;
		arch.read(reinterpret_cast<char *>(&cita), sizeof(citas));

		while(!arch.eof())
			{
			if(aux==paci.id)
				{
				cout << "=====================================" << endl;
				cita.hora==0;
				cita.fecha==0;
				cita.consulta==0;
				cita.id==0;
				cita.medico==0;
				cout << "Los datos han sido borrados" <<endl;
				cout << "=====================================" << endl;

				streampos pos = arch.tellg();
				arch.seekp(pos, ios::beg);
				arch.write(reinterpret_cast<char *>(&cita), sizeof(citas));

				existe=1;
				break;
				}
			arch.read(reinterpret_cast<char *>(&cita), sizeof(citas));
			}
		if(existe==0)
			{
			cout<<"No existe un paciente con ese ID" <<endl;
			}
		}

	else{
		cout <<"El fichero del registro no esta disponible" << endl;
		if(arch.fail()) cout << "Bit fail activo" << endl;
		if(arch.eof()) cout << "Bit eof activo" << endl;
		if(arch.bad()) cout << "Bit bad activo" << endl;
		}
	arch.close();
	}

void Mostrarcitadia()
	{
	citas cita;
	paciente paci;
	ifstream arch("Citas.dat", ios::in | ios::binary);
	
	if(!arch.eof())
		{
		arch.read(reinterpret_cast<char *>(&cita), sizeof(citas));
		
		while(!arch.eof() )
			{
			cout << "=====================================" << endl;
			cout << "Hora: ";
			cout << cita.hora <<endl;
			cout << "Fecha: ";
			cout << cita.fecha <<endl;
			cout << "Consulta: ";
			cout << cita.consulta <<endl;
			cout << "ID: ";
			cout << cita.id << endl;
			cout << "Medico: " <<endl;
			cout << cita.medico <<endl;
			cout << "=====================================" << endl;
			arch.read(reinterpret_cast<char *>(&cita), sizeof(citas));
			}
		}
	else{
		cout << "El Fichero del registro no esta disponible" <<endl;
		if(arch.fail()) cout << "Bit fail activo" <<endl;
		if(arch.eof()) cout << "Bit eof activo" <<endl;
		if(arch.bad()) cout << "Bit bad activo" <<endl;
		}
	arch.close();
	}

void Mostrarcitapaciente()
	{
	citas cita;
	paciente paci;
	ifstream arch("Citas.dat", ios::in | ios::binary);
	
	if(!arch.eof())
		{
		arch.read(reinterpret_cast<char *>(&cita), sizeof(citas));
		
		while(!arch.eof() )
			{
			cout << "=====================================" << endl;
			cout << "Hora: ";
			cout << cita.hora <<endl;
			cout << "Fecha: ";
			cout << cita.fecha <<endl;
			cout << "Consulta: ";
			cout << cita.consulta <<endl;
			cout << "ID: ";
			cout << cita.id << endl;
			cout << "Medico: " <<endl;
			cout << cita.medico <<endl;
			cout << "=====================================" << endl;
			arch.read(reinterpret_cast<char *>(&cita), sizeof(citas));
			}
		}
	else{
		cout << "El Fichero del registro no esta disponible" <<endl;
		if(arch.fail()) cout << "Bit fail activo" <<endl;
		if(arch.eof()) cout << "Bit eof activo" <<endl;
		if(arch.bad()) cout << "Bit bad activo" <<endl;
		}
	arch.close();
	}

void Introducirantecedente()
	{
	historial hist;
	paciente paci;
	fstream arch("Historial.dat", ios::in | ios::out | ios::binary);
	
	if(arch.good() )
		{
		cout << "Introduce el identificador del paciente:" <<endl;	
		int aux;
		cin >> aux;
		cout << endl;
		int existe=0;
		arch.read(reinterpret_cast<char *>(&hist), sizeof(historial));
		
		while(!arch.eof() ) 
			{
			if(aux == paci.id)
				{
				cout << "Introduzca el antecedente del paciente: ";
				cin.ignore();
				cin.getline(hist.antecedente, 100);
				cout << endl;

				streampos pos = arch.tellg();
				arch.seekp(pos, ios::beg);
				arch.write(reinterpret_cast<char *>(&hist), sizeof (historial));

				existe=1;
				break;
				}
			arch.read(reinterpret_cast<char *>(&hist), sizeof (historial));
			}
		if (existe == 0)
			{
			cout << "No existe un paciente con ese nombre" <<endl;
			}
		}
	else{
		cout << "El archivo Historial Médico no esta disponible" <<endl;
		if (arch.fail()) cout << "Bit fail activo" << endl;
		if (arch.eof()) cout << "Bit eof activo" << endl;
		if (arch.bad()) cout << "Bit bad activo" << endl;
		}
	arch.close();
	}

void Introducirantealergia()
	{
	historial hist;
	paciente paci;
	fstream arch("Historial.dat", ios::in | ios::out | ios::binary);
	
	if(arch.good() )
		{
		cout << "Introduce el identificador del paciente:" <<endl;	
		int aux;
		cin >> aux;
		cout << endl;
		int existe=0;
		arch.read(reinterpret_cast<char *>(&hist), sizeof(historial));
		
		while(!arch.eof() ) 
			{
			if(aux == paci.id)
				{
				cout << "Introduzca la alergia del paciente: ";
				cin.ignore();
				cin.getline(hist.alergia, 100);
				cout << endl;

				streampos pos = arch.tellg();
				arch.seekp(pos, ios::beg);
				arch.write(reinterpret_cast<char *>(&hist), sizeof (historial));

				existe=1;
				break;
				}
			arch.read(reinterpret_cast<char *>(&hist), sizeof (historial));
			}
		if (existe == 0)
			{
			cout << "No existe un paciente con ese nombre" <<endl;
			}
		}
	else{
		cout << "El archivo Historial Médico no esta disponible" <<endl;
		if (arch.fail()) cout << "Bit fail activo" << endl;
		if (arch.eof()) cout << "Bit eof activo" << endl;
		if (arch.bad()) cout << "Bit bad activo" << endl;
		}
	arch.close();
	}

void Modificarantecedente()
	{
	historial hist;
	paciente paci;
	fstream arch("Historial.dat", ios::in | ios::out | ios::binary);

	if(arch.good())
		{
		cout << "Introduce el ID del paciente que quiere modificar su antecedente: " <<endl;
		int aux;
		cin >> aux;
		cout << endl;
		int existe=0;
		arch.read(reinterpret_cast<char *>(&hist), sizeof(historial));
	
		while(!arch.eof())
			{
			if(aux==paci.id)
				{
				cout << "=====================================" << endl;
				hist.antecedente==0;
				cout << "=====================================" << endl;
				cout << "Ahora, proceda a introducir los nuevos datos del antecedente" <<endl;
				cout << "=====================================" << endl;
			
				cout << "Ingrese el antecedente: ";
				cin.ignore();
				cin.getline(hist.antecedente, 100);
				cout <<endl;
				cout << "=====================================" << endl;

				streampos pos = arch.tellg();
				arch.seekp(0, ios::beg);
				arch.write(reinterpret_cast<char *>(&hist), sizeof(historial));

				existe=1;
				break;
				}
			arch.read(reinterpret_cast<char *>(&hist), sizeof(historial));
			}
		}			
	}

void Modificaralergia()
	{
	historial hist;
	paciente paci;
	fstream arch("Historial.dat", ios::in | ios::out | ios::binary);

	if(arch.good())
		{
		cout << "Introduce el ID del paciente que quiere modificar su alergia: " <<endl;
		int aux;
		cin >> aux;
		cout << endl;
		int existe=0;
		arch.read(reinterpret_cast<char *>(&hist), sizeof(historial));
	
		while(!arch.eof())
			{
			if(aux==paci.id)
				{
				cout << "=====================================" << endl;
				hist.alergia==0;
				cout << "=====================================" << endl;
				cout << "Ahora, proceda a introducir los nuevos datos de la alergia" <<endl;
				cout << "=====================================" << endl;
			
				cout << "Ingrese la alergia: ";
				cin.ignore();
				cin.getline(hist.antecedente, 100);
				cout <<endl;
				cout << "=====================================" << endl;

				streampos pos = arch.tellg();
				arch.seekp(0, ios::beg);
				arch.write(reinterpret_cast<char *>(&hist), sizeof(historial));

				existe=1;
				break;
				}
			arch.read(reinterpret_cast<char *>(&hist), sizeof(historial));
			}
		}			
	}

void Borrarantecedente()
	{
	historial hist;
	paciente paci;
	fstream arch("Historial.dat", ios::in | ios::out | ios::binary);

	if(arch.good())
		{
		cout << "Introduce el ID del paciente que quiere borrar su antecedente: " <<endl;
		int aux;
		cin >> aux;
		cout << endl;
		int existe=0;
		arch.read(reinterpret_cast<char *>(&hist), sizeof(historial));
	
		while(!arch.eof())
			{
			if(aux==paci.id)
				{
				cout << "=====================================" << endl;
				hist.antecedente==0;
				cout << "=====================================" << endl;
				cout << "El antecedente ha sido borrado con exito" <<endl;
				cout << "=====================================" << endl;

				streampos pos = arch.tellg();
				arch.seekp(0, ios::beg);
				arch.write(reinterpret_cast<char *>(&hist), sizeof(historial));

				existe=1;
				break;
				}
			arch.read(reinterpret_cast<char *>(&hist), sizeof(historial));
			}
		}			
	}

void Borraralergia()
	{
	historial hist;
	paciente paci;
	fstream arch("Historial.dat", ios::in | ios::out | ios::binary);

	if(arch.good())
		{
		cout << "Introduce el ID del paciente que quiere borrar su alergia: " <<endl;
		int aux;
		cin >> aux;
		cout << endl;
		int existe=0;
		arch.read(reinterpret_cast<char *>(&hist), sizeof(historial));
	
		while(!arch.eof())
			{
			if(aux==paci.id)
				{
				cout << "=====================================" << endl;
				hist.alergia==0;
				cout << "=====================================" << endl;
				cout << "El antecedente ha sido borrado con exito" <<endl;
				cout << "=====================================" << endl;

				streampos pos = arch.tellg();
				arch.seekp(0, ios::beg);
				arch.write(reinterpret_cast<char *>(&hist), sizeof(historial));

				existe=1;
				break;
				}
			arch.read(reinterpret_cast<char *>(&hist), sizeof(historial));
			}
		}			
	}

void Mostrarhistorial()
	{
	historial hist;
	paciente paci;
	ifstream arch("Historial.dat", ios::in | ios::binary);

	if(arch.good()){
		arch.read(reinterpret_cast<char *>(&hist), sizeof(historial));

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
