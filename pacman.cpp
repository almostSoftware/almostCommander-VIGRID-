#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>

using namespace std;

void pacman()
{

    char znak;

    while (znak!='q')
        {
            cout<<"\tAktualizacje:"                     <<endl;
            cout<<"[1] Aktualizacja Systemu"            <<endl;
            cout<<"[2] Aktualizacja Systemu (wymuszona)"<<endl;
            cout<<"[3] Aktualizacja Systemu (+AUR)"     <<endl;
            cout<<"[4] Klucze Pacman "                  <<endl;
            cout<<"[5] Odblokuj Bazę Danych"            <<endl<<endl;

            cout<<"\tInstalacja pakietów:"              <<endl;
            cout<<"[6] Instalacja Pakietu"              <<endl;
            cout<<"[7] Instalacja Pakietu (AUR)"        <<endl;
            cout<<"[8] Znajdź pakiet"                   <<endl;
            cout<<"[9] Usuń Pakiet"                     <<endl;
            cout<<"[0] Wyczyść Cache"                   <<endl<<endl;

            cout<<"\tRepozytoria Manjaro:"   <<endl;
            cout<<"[U] Repozytoria Niestabilne"         <<endl;
            cout<<"[T] Repozytoria Testowe"             <<endl;
            cout<<"[S] Repozytoria Stabilne "           <<endl<<endl;

            cout<<"[q] Powrót"                          <<endl;

            cout<<"\nWybieram: ";
            cin>>znak;

            system("clear");

            switch(znak)
            {
                case '1': // Aktualizacja
                {
                    system("clear");
                    system("sudo pacman -Syu");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                    break;
                }

                case '2': // Aktualizacja wymuszona
                {
                    system("clear");
                    system("sudo pacman --force -Syu");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                    break;
                 }

                case '3': // Aktualizacja  AUR
                {
                    system("clear");
                    system("yaourt -Syua");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                    break;
                }

                case '4': // Klucze
                {
                    system("clear");
                    system("sudo pacman -Sy archlinux-keyring manjaro-keyring && sudo pacman-key --refresh-keys && sudo pacman -Su");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                    break;
                }

                case '5': // Baza danych
                {
                    system("clear");
                    system("sudo rm /var/lib/pacman/db.lck && pacman -Syu");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                    break;
                }

                case '6': // Instalacja
                {
                    system("clear");
                    string pakiet;
                    string program = "sudo pacman -S ";
                    cout << "Podaj nazwę pakietu(ów) do zainstalowania: ";

                    cin.ignore();
                    getline(cin, pakiet);

                    program+=pakiet;
                    system (program.c_str()  );
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();
                    system("clear");

                    break;
                }

                case '7': // Yaourt
                {
                    system("clear");
                    string pakiet;
                    string program = "yaourt -S ";
                    cout << "Podaj nazwę pakietu(ów) do zainstalowania: ";

                    cin.ignore();
                    getline(cin, pakiet);

                    program+=pakiet;
                    system (program.c_str()  );
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();
                    system("clear");

                    break;
                }

                case '8': // Szukaj
                {
                    system("clear");
                    string pakiet;
                    string program = "pacman -Ss ";
                    cout << "Podaj nazwę pakietu: ";
                    cin >> pakiet;
                    program+=pakiet;
                    system (program.c_str()  );
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                    break;
                }

                case '9': // Usuń
                {
                    system("clear");
                    string pakiet;
                    string program = "sudo pacman -R ";
                    cout << "Podaj nazwę pakietu(ów) do usunięcia: ";

                    cin.ignore();
                    getline(cin, pakiet);

                    program+=pakiet;
                    system (program.c_str()  );
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();
                    system("clear");

                    break;
                }

                case '0': //Cache
                {
                    system("clear");
                    system("sudo pacman -Sc");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");
                    break;
                }

                case 'U': // Unstable Repo
                {
                    system("clear");
                    system("sudo pacman-mirrors -g -b unstable && sudo pacman -Syu");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                    break;
                }

                case 'T': // Testing Repo
                {
                    system("clear");
                    system("sudo pacman-mirrors -g -b testing && sudo pacman -Syu");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                    break;
                }

                case 'S': // Stable Repo
                {
                    system("clear");
                    system("sudo pacman-mirrors -g -b stable && sudo pacman -Syu");
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
                }

            }
       }
}
