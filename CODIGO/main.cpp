#include "funciones.h"



int main() {
    vector<input> data_hub; 
    database_in(data_hub);
    cout<<"INGRESE EL COMANDO Y LA FECHA CON SU EVENTO SI ES NECESARIO"<<endl;
    while (true) {
        string command;
        cin>>command;
        cin.ignore();
        if (command == "Add" || command == "ADD" || command == "add") {
            check_data (command, data_hub);
            database_out(data_hub);
        }
        else if (command == "Del" || command == "DEL" || command == "del") {
            delete_identical_events(data_hub);
            ascending_order(data_hub);
            check_data (command, data_hub);
            database_out(data_hub);
        }
        else if (command == "Find" || command == "FIND" || command == "find") {
            delete_identical_events(data_hub);
            ascending_order(data_hub);
            check_data (command, data_hub);
        }
        else if (command == "Print" || command == "PRINT" || command == "print") {
            delete_identical_events(data_hub);
            ascending_order(data_hub);
            print(data_hub);
            database_out(data_hub);
        }
        else {
            cout<<"Unknown command: "<<command<<endl;
        }
    }

    return 0;
}

