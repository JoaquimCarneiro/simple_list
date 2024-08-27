#include "include/list.h"
#include "include/database.h"

using namespace std;

int main(int argc, char const *argv[]){
    List simpleList;
    Database data;

    if (argc > 1){
        simpleList.name = argv[1];
        simpleList.print_menu();

        data.write(simpleList.list);
        data.read();
    }else{
        cout << "Username not supplied... exiting the program" << endl;
    }
    
    return 0;
}
