#include "include/database.h"

void Database::write(vector<vector<string>> mainList){
    ofstream db;
    db.open("db/lists.sl");

    if(db.is_open()){
        for (unsigned int user = 0; user < mainList.size(); user++){
            for (unsigned int item = 0; item < mainList[user].size(); item++){
                db << mainList[user][item] << "\n";
            }
        }
    }else{
        cout << "cannot open file for writing.\n";
    }

    db.close();
}

vector<vector<string>> Database::read(){
    ifstream db;
    db.open("db/lists.sl");

    string line;
    vector<string> userList;

    if(db.is_open()){
        while (getline(db, line, '\n')){
            if(line.front() == '#'){
                cout << "Found a hashtag: " << line << endl;
                line.erase(line.begin());
                userList.push_back(line);
            }else if (line.front() == '%'){
                cout << "Found an percentage: " << line << endl;
                mainList.push_back(userList);
                userList.clear();
            }else{
                cout << "Found an item: " << line << endl;
                userList.push_back(line);
            }   
        }
    }else{
        cout << "cannot open file for reading.\n";
    }
    db.close();

    return mainList;
}