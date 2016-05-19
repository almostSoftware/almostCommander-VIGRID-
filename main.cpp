#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string>

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
        cout<<"[5] Inne"                            <<endl;
        cout<<"[6] Uruchom / Wykonaj"               <<endl<<endl;

        //cout<<"[7] O 'Vigrid'"                    <<endl<<endl;

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

            /*case '7':	// O 'VIGRID'
            {
            
            }*/
            case 'q':
                exit(0);
                
            default:
            {
                cout<<"Proszę podać poprawną wartość!"<<endl<<endl;
                sleep(1);
                system("clear");
            }
        }


    }
    return 0;
}
