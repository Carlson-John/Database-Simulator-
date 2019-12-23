#include <iostream>
#include <fstream>
#include "Database.h"


using namespace std;
void Database::loadInput()
{
    ifstream myFile;
    string line;

    myFile.open("Database.txt"); ///Opens "Database.txt" output file to load the database


   while (getline(myFile, line)){ ///Using a while loop we are able to get each line in the .txt file and output it properly.

    cout << line << "\n";
   }
    cout<<endl;

};

