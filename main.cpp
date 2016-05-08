#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>

#include "pacman.h"
#include "sysinfo.h"
#include "kernel.h"
#include "gui.h"
#include "other.h"

using namespace std;

char znak;

int main()
{
    cout<<" ";

    for(;;)
    {
        cout<<"\talmostCommander 'VIGRID' MENU:"<<endl;
        cout<<"\t******************************"<<endl;
        cout<<"1. Pacman & Yaourt"<<endl;
        cout<<"2. Informacje o systemie"<<endl;
        cout<<"3. Zarządzanie Kernelami"<<endl;
        cout<<"4. Instalator środowisk graficzmych"<<endl;
        cout<<"5. Inne"<<endl;
        cout<<"6. O 'Vigrid'"<<endl<<endl;
        cout<<"q. Zakończ program"<<endl;

        cout<<"\nWybieram: ";
        cin>>znak;

        system("clear");

        switch(znak)
            {
            case'1':    // Pacman
            {
                pacman();
                break;
            }
            case '2':	// Sys info
            {
                sysinfo();
                break;
            }
            case '3':
            {
                kernel_installer();
                break;
            }
            case '4':	// Gui
            {
                gui_installer();
                break;
            }
            case '5':	// Inne
            {
                other();
                break;
            }

            case '6':	// O 'VIGRID'
            {
                cout<<"almostCommander 'VIGRID' to prosty programik konsolowy napisany w C++. "
                      "Jego głównym celem jest ułatwienie i przyspieszenie podstawowych operacji w terminalu. "
                      "Dodatkowo program został zaopatrzony m.in. w możliwość dobierania multimediów. "
                      "\n\nWszystkie dostępne opcje 'VIGRID' zostały wstępnie przetestowane i nie powinny stwarzać problemów, jednak..."
                      "\n\nJest to wersja testowa, proszę zachować szczególną ostrożność, najbezpieczniej będzie korzystać z programu za pośrednictwem dystrybucji zainstalowanej na Virtualboxie lub LiveCD. "

                      "\n\nPowrót do MENU [enter]";

                 getchar();getchar();
                 system("clear");

                  break;
            }
                case 'q':
                exit(0);
        }


    }
    return 0;
}
