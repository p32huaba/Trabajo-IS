
 

#include <iostream>

#include <cstdlib>

 

using namespace std;

 

void pausa();

 

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
		  cout<<"1- A�adir Paciente"<<endl;
          cout<<"2- Modificar nombre"<<endl;
          cout<<"3- Modificar direccion"<<endl;
          cout<<"4- Borar direcc�n"<<endl;
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
			cout<<"1- A�adir cita"<<endl;
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
			 cout<<"1- A�adir antecedente"<<endl;
             cout<<"2- Modificar antecedente"<<endl;
             cout<<"3- Borrar antecedente"<<endl;
             cout<<"4- A�adir alergia"<<endl;
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
			cout<<"1- A�adir tratamiento"<<endl;
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











