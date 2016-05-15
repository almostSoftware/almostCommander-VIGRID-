#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>
#include <string>
#include <fstream>

#include "headers.h"

using namespace std;

char znak;

int main()
{
    system("clear");

    for(;;)
    {
        cout<<"\talmostCommander 'VIGRID' MENU:"    <<endl<<endl;

        cout<<"[1] Pacman & Yaourt"                 <<endl;
        cout<<"[2] Informacje o systemie"           <<endl;
        cout<<"[3] Zarządzanie Kernelami"           <<endl;
        cout<<"[4] Instalator środowisk graficzmych"<<endl;
        cout<<"[5] Inne"                            <<endl<<endl;

        cout<<"[6] Uruchom / Wykonaj"               <<endl<<endl;

        cout<<"[7] O 'Vigrid'"                      <<endl<<endl;

        cout<<"[q] Zakończ program"                 <<endl;

        cout<<"\nWybieram: ";
        cin>>znak;

        system("clear");

        switch(znak)
        {
            case'1':
            {
                pacman();
                break;
            }
            case '2':
            {
                sysinfo();
                break;
            }
            case '3':
            {
                kernel_installer();
                break;
            }
            case '4':
            {
                gui_installer();
                break;
            }
            case '5':
            {
                other();
                break;
            }

            case'6':
            {
                run();
                break;
            }

            case '7':	// O 'VIGRID'
            {

                cout<<"almostCommander 'VIGRID' to prosty programik konsolowy napisany w C++."
                       "\nJego głównym celem jest ułatwienie i przyspieszenie podstawowych operacji w terminalu."
                       "\nDodatkowo program został zaopatrzony m.in. w możliwość dobierania multimediów. "

                       "\n\nWszystkie dostępne opcje 'VIGRID' zostały wstępnie przetestowane i nie powinny stwarzać problemów, jednak..."

                       "\nJest to wersja testowa, proszę zachować szczególną ostrożność, najbezpieczniej będzie korzystać z programu"
                       "\nza pośrednictwem dystrybucji zainstalowanej na Virtualboxie lub LiveCD. "<<endl<<endl;


                cout<<"Powrót do MENU [enter]";

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
