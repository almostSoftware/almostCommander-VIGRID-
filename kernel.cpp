#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>

using namespace std;

void kernel_installer()
{

    char znak;

    while (znak!='q')
            {

                cout<<"Aktualnie posiadasz następujące jądra systemu: "<<endl<<endl;
                system("mhwd-kernel -li");

                cout<<"\n\tDostępne do zainstalowania: "    <<endl<<endl;
                cout<<"[1] Linux46 - experymentalny"        <<endl;
                cout<<"[2] Linux45"                         <<endl;
                cout<<"[3] Linux44 LTS"                     <<endl;
                cout<<"[4] Linux42"                         <<endl;
                cout<<"[5] Linux41 LTS"                     <<endl;
                cout<<"[6] Linux319"                        <<endl;
                cout<<"[7] Linux318"                        <<endl;
                cout<<"[8] Linux316"                        <<endl;
                cout<<"[9] Linux314"                        <<endl;
                cout<<"[0] Linux313"                        <<endl<<endl;

                cout<<"[X] Odinstaluj kernel"               <<endl<<endl;


                cout<<"[q] Powrót"                          <<endl<<endl;

                cout<<"Wybieram: ";
                cin>>znak;

                system("clear");

                switch(znak)
                {
                    case '1':
                    {
                        system("clear");
                        system("sudo mhwd-kernel -i linux46");
                        cout<<"\nPowrót do MENU [enter]";
                        getchar();getchar();
                        system("clear");

                        break;
                    }

                    case '2':
                    {
                        system("clear");
                        system("sudo mhwd-kernel -i linux45");
                        cout<<"\nPowrót do MENU [enter]";
                        getchar();getchar();
                        system("clear");

                        break;
                    }

                    case '3':
                    {
                        system("clear");
                        system("sudo mhwd-kernel -i linux44");
                        cout<<"\nPowrót do MENU [enter]";
                        getchar();getchar();
                        system("clear");

                        break;
                    }

                    case '4':
                    {
                        system("clear");
                        system("sudo mhwd-kernel -i linux42");
                        cout<<"\nPowrót do MENU [enter]";
                        getchar();getchar();
                        system("clear");

                        break;
                    }

                    case '5':
                    {
                        system("clear");
                        system("sudo mhwd-kernel -i linux41");
                        cout<<"\nPowrót do MENU [enter]";
                        getchar();getchar();
                        system("clear");

                        break;
                    }

                    case '6':
                    {
                        system("clear");
                        system("sudo mhwd-kernel -i linux319");
                        cout<<"\nPowrót do MENU [enter]";
                        getchar();getchar();
                        system("clear");

                        break;
                    }

                    case '7':
                    {
                        system("clear");
                        system("sudo mhwd-kernel -i linux318");
                        cout<<"\nPowrót do MENU [enter]";
                        getchar();getchar();
                        system("clear");

                        break;
                    }

                    case '8':
                    {
                        system("clear");
                        system("sudo mhwd-kernel -i linux316");
                        cout<<"\nPowrót do MENU [enter]";
                        getchar();getchar();
                        system("clear");

                        break;
                    }

                    case '9':
                    {
                        system("clear");
                        system("sudo mhwd-kernel -i linux314");
                        cout<<"\nPowrót do MENU [enter]";
                        getchar();getchar();
                        system("clear");

                        break;
                    }

                    case '0':
                    {
                        system("clear");
                        system("sudo mhwd-kernel -i linux313");
                        cout<<"\nPowrót do MENU [enter]";
                        getchar();getchar();
                        system("clear");

                        break;
                    }

                    case 'X':
                    {
                        string kernel;
                        string program = "sudo mhwd-kernel -r ";

                        system("clear");

                        cout<<"Aktualnie posiadasz następujące jądra systemu: "<<endl<<endl;
                        system("mhwd-kernel -li");

                        cout << "\n\nPodaj nazwę kernela do usunięcia (np linux310): ";
                        cin>>kernel;
                        program+=kernel;
                        system (program.c_str()  );
                        cout<<"\nPowrót do MENU [enter]";
                        getchar();getchar();

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
