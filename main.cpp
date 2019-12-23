#include<iostream>
#include<fstream>
#include "Database.h"
using namespace std;




int main()
{
    int input=0;
cout<<"Choice 1 prints the current Database "<<endl;
cout<<endl;
cout<<"Choice 2 ends the program "<<endl;
cout<<endl;
cout<<"Choice: ";
cin>>input;



switch(input){

    case 1:


    if(input == 1)
    {   cout<<endl;
        Database run;
        run.loadInput();
    }
    break;
    case 2:

        if (input==2)
        {


        }
        cin.get();
        return 0;
    if (input!=1||input!=2)
    {
    default:

    cout<<endl;
    cout <<"Error please enter either 1 or 2 "<<endl;
    cout <<"thanks "<<endl;
    cout <<endl;
    }
}

return 0;

}

