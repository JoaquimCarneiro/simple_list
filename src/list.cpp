#include "include/list.h"

void List::print_menu(){
    system("clear");
    int choice;
    cout << "************************************\n";
    cout << "1 - Print list\n";
    cout << "2 - Add to list\n";
    cout << "3 - Delete from list\n";
    cout << "4 - Quit\n";
    cout << "Enter your choice and press enter\n";
    cout << "************************************\n";

    cin >> choice;
    if (choice == 4){
        exit(0);
    }else if(choice == 3){
        delete_item();
    }else if(choice == 2){
        add_item();
    }else if(choice == 1){
        print_list();
    }else{
        cout << "Invalid Option! Quiting...";
        exit(1);
    }
    
}

void List::print_list(){
    system("clear");
    cout << "************************************\n";
    cout << "************ Print Item ************\n";
    for (unsigned int i = 0; i < list.size(); i++){
        cout << i + 1 << " - " << list[i] << endl;
    }

    cout << "M - Menu\n";
    char choice;
    cin >> choice;

    if (choice == 'M' || choice == 'm' ){
        print_menu();    
    }else{
        cout << "Invalid Choice. Quiting...\n";
    }
    
}
void List::add_item(){
    system("clear");
    string item;
    cout << "************************************\n";
    cout << "************* Add Item *************\n";
    cout << "Type in a item and press enter\n:";

    cin >> item;
    list.push_back(item);

    cout << "Successufully added an item to the list.\n";
    cin.clear();
    print_menu();
}
void List::delete_item(){
    system("clear");
    int item;
    cout << "************************************\n";
    cout << "************* Del Item *************\n";
    cout << "Select an item index number to delete\n";

    if (list.size() > 0){
        for (unsigned int i = 0; i < list.size(); i++){
            cout << i << " - " << list[i] << endl;
        }
        cin >> item;
        list.erase(list.begin() + item);
    }else{
        cout << "The list is empty\n";
    }
    

    //cin >> item;
    //list.erase(item);

    print_menu();
}