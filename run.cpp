#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>
#include <string>

using namespace std;



void run()
{

        string uruchom;

        system("clear");

        cout << "Uruchom: " << uruchom;

        cin.ignore();
        getline(cin, uruchom);

        system(uruchom.c_str() );
        //uruchom = "";
        uruchom.clear();

        cout<<"\nPowrót do MENU [enter]";

        getchar();
        system("clear");

}
