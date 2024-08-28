#include "include/list.h"
#include "include/database.h"

using namespace std;

int main(int argc, char const *argv[]){
    List simpleList;
    Database data;

    if (argc > 1){
        simpleList.name = argv[1];
        simpleList.mainList =  data.read();
        simpleList.find_userList();
        simpleList.print_menu();
    }else{
        cout << "Username not supplied... exiting the program" << endl;
    }
    
    return 0;
}
