#include "include/list.h"

using namespace std;

int main(int argc, char const *argv[]){
    if (argc > 1){
        List simpleList;
        simpleList.name = argv[1];
        simpleList.print_menu();
    }else{
        cout << "Username not supplied... exiting the program" << endl;
    }
    
    return 0;
}
