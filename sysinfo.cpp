#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>

using namespace std;

void sysinfo()
{
    char znak;

    while (znak!='q')
        {
            cout<<"\tInformacje o systemie: "<<endl<<endl;
            cout<<"[1] OS, Kernel"<<endl;
            cout<<"[2] Screenfetch"<<endl;
            cout<<"[3] Menadżer procesów"<<endl<<endl;
            cout<<"[4] O użytkowniku "<<endl;
            cout<<"[5] Informacje o sprzęcie"<<endl;
            cout<<"[6] Informacje o CPU"<<endl;
            cout<<"[7] Informacje szczegółowe"<<endl<<endl;
            cout<<"[8] Czujniki"<<endl;
            cout<<"[9] Analiza startu systemu"<<endl<<endl;


            cout<<"[q] Powrót"<<endl;

            cout<<"\nWybieram: ";
            cin>>znak;

            switch(znak)
            {
                case '1': // Uname
                {
                    system("clear");
                    system("uname -a");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                    break;
                }

                case '2': // Screenfetch
                {
                    system("clear");
                    system("screenfetch");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                    break;
                }

                case '3': // Htop
                {
                    system("clear");
                    system("htop");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                    break;
                }

                case '4': // W
                {
                    system("clear");
                    system("w");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                    break;
                }

                case '5':
                {
                    system("clear");
                    system("inxi -Fxz");    //system("mhwd -lh -d");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                    break;
                }

                case '6':
                {
                    system("clear");
                    system("lscpu");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                    break;
                }

                case '7':
                {
                    system("clear");
                    system("mhwd -lh -d");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                    break;
                }


                case '8':
                {
                    system("clear");
                    system("sensors");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                    break;
                }

                case '9':
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
            }
       }
}
