#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>
#include <string>

using namespace std;

void run()
{

        string run;

        system("clear");

        cout << "Uruchom: " << run;

        cin.ignore();
        getline(cin, run);

        system(run.c_str() );

        cout<<"\nPowrót do MENU [enter]";

        getchar();
        system("clear");

}
