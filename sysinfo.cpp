#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>

#include "headers.h"

using namespace std;

void sysinfo()
{
    char znak;

    while (znak!='q')
        {
            cout<<"\tInformacje o systemie: "            <<endl;

            cout<<"[1] Screenfetch"                      <<endl;
            cout<<"[2] Menadżer procesów"                <<endl<<endl;

            cout<<"[3] Informacje o CPU        (lscpu)"  <<endl;
            cout<<"[4] Informacje o sprzęcie   (inxi)"   <<endl;
            cout<<"[5] Informacje szczegółowe  (mhwd)"   <<endl;
            cout<<"[6] Poszczególne podzespoły (hwinfo) "<<endl<<endl;

            cout<<"[7] Czujniki"                         <<endl;
            cout<<"[8] Analiza startu systemu"           <<endl<<endl;

            cout<<"[q] Powrót"                           <<endl;

            cout<<"\nWybieram: ";
            cin>>znak;
            
            system("clear");

            switch(znak)
            {

                case '1': // Screenfetch
                {
                    system("clear");
                    system("screenfetch");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                    break;
                }

                case '2': // Htop
                {
                    system("clear");
                    system("htop");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                    break;
                }

                case '3':
                {
                    system("clear");
                    system("lscpu");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                    break;
                }

                case '4':
                {
                    system("clear");
                    system("inxi -Fxz");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                    break;
                }

                case '5':
                {
                    system("clear");
                    system("mhwd -lh -d");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                    break;
                }

                case '6':
                {
                    hwinfo();

                    break;
                }

                case '7':
                {
                    system("clear");
                    system("sensors");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                    break;
                }

                case '8':
                {
                    system("systemd-analyze time");
                    system("systemd-analyze blame");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                    break;
                }


                case 'q':
                {
                    system("clear");
                    break;
                }
                
                default:
                {
                    cout<<"Proszę podać poprawną wartość!"<<endl<<endl;
                    sleep(1);
                    system("clear");
                }
            }
       }
}
