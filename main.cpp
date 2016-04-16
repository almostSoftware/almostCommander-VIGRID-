#include <iostream>
#include <cstdlib>
#include <unistd.h>

using namespace std;

char znak;

int main()
{
    cout<<" ";

    for(;;)
    {
        Menu:

    // cout<<endl<<"Proszę wybrać jedną z opcji dostepną w menu:"<<endl<<endl;

        cout<<"\talmostCommander 'VIGRID' MENU:"<<endl;
        cout<<"\t******************************"<<endl;
        cout<<"1. Pacman & Yaourt"<<endl;
        cout<<"2. Informacje o systemie"<<endl;
        cout<<"3. Instalator środowisk graficzmych"<<endl;
        cout<<"4. Inne"<<endl;
        cout<<"5. O 'Vigrid'"<<endl<<endl;
        cout<<"q. Zakończ program"<<endl;

        cout<<"\nWybieram: ";
        cin>>znak;

        system("clear");

        switch(znak)
        {

        //################################################################################

            case '1':	//pacman & Yaourt
            {
                while (znak!='q')
                    {
                        cout<<"Pacman & Yaourt:"<<endl<<endl;
                        cout<<"[1] Aktualizacja Systemu"<<endl;
                        cout<<"[2] Aktualizacja Systemu (wymuszona)"<<endl;
                        cout<<"[3] Aktualizacja Systemu (+AUR)"<<endl;
                        cout<<"[4] Instalacja Pakietu"<<endl;
                        cout<<"[5] Instalacja Pakietu (AUR)"<<endl;
                        cout<<"[6] Klucze Pacman "<<endl;
                        cout<<"[7] Odblokuj Bazę Danych"<<endl;
                        cout<<"[8] Wyczyść Cache"<<endl;
                        cout<<"[9] Usuń Pakiet"<<endl;
                        cout<<"[0] Znajdź Pakiet"<<endl<<endl;

                        cout<<"Dostęp do repozytoriów Manjaro:"<<endl<<endl;
                        cout<<"[U] Repozytoria Niestabilne"<<endl;
                        cout<<"[T] Repozytoria Testowe"<<endl;
                        cout<<"[S] Repozytoria Stabilne "<<endl<<endl;

                        cout<<"[q] Powrót"<<endl;

                        cout<<"\nWybieram: ";
                        cin>>znak;

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

                            case '4': // Instalacja
                            {
                                system("clear");
                                string pakiet;
                                string program = "sudo pacman -S ";
                                cout << "Podaj nazwę pakietu: ";
                                cin >> pakiet;
                                program+=pakiet;
                                system (program.c_str()  );
                                cout<<"\nPowrót do MENU [enter]";
                                getchar();getchar();
                                system("clear");

                                break;
                            }

                            case '5': // Yaourt
                            {
                                system("clear");
                                string pakiet;
                                string program = "yaourt -S ";
                                cout << "Podaj nazwę pakietu: ";
                                cin >> pakiet;
                                program+=pakiet;
                                system (program.c_str()  );
                                cout<<"\nPowrót do MENU [enter]";
                                getchar();getchar();
                                system("clear");

                                break;
                            }

                            case '6': // Klucze
                            {
                                system("clear");
                                system("sudo pacman -Sy archlinux-keyring manjaro-keyring && sudo pacman-key --refresh-keys && sudo pacman -Su");
                                cout<<"\nPowrót do MENU [enter]";
                                getchar();getchar();
                                system("clear");

                                break;
                            }

                            case '7': // Baza danych
                            {
                                system("clear");
                                system("sudo rm /var/lib/pacman/db.lck && pacman -Syu");
                                cout<<"\nPowrót do MENU [enter]";
                                getchar();getchar();
                                system("clear");

                                break;
                            }

                            case '8': //Cache
                            {
                                system("clear");
                                system("sudo pacman -Sc");
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
                                cout << "Podaj nazwę pakietu: ";
                                cin >> pakiet;
                                program+=pakiet;
                                system (program.c_str()  );
                                cout<<"\nPowrót do MENU [enter]";
                                getchar();getchar();
                                system("clear");

                                break;
                            }

                            case '0': // Szukaj
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
                                goto Menu;
                            }
                        }
                    }
            }

            //################################################################################

            case '2':	// Sys info
            {
            while (znak!='q')
                    {
                        cout<<"Informacje o systemie: "<<endl<<endl;
                        cout<<"[1] OS, Kernel"<<endl;
                        cout<<"[2] Screenfetch"<<endl;
                        cout<<"[3] Menadżer Procesów"<<endl;
                        cout<<"[4] O Użytkowniku "<<endl;

                        cout<<"[5] Informacje O Sprzęcie"<<endl; //lshw
                        cout<<"[6] Informacje O CPU"<<endl<<endl;	//lscpu

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

                            case '5': // lshw
                            {
                                system("clear");
                                system("mhwd -lh -d");
                                cout<<"\nPowrót do MENU [enter]";
                                getchar();getchar();
                                system("clear");

                                break;
                            }

                            case '6': // lscpu
                            {
                                system("clear");
                                system("lscpu");
                                cout<<"\nPowrót do MENU [enter]";
                                getchar();getchar();
                                system("clear");

                                break;
                            }

                            case 'q':
                            {
                                system("clear");
                                goto Menu;
                            }

                        }
                    }
            }

            //################################################################################

        case '3':	// Gui
        {
        while (znak!='q')
                {
                    cout<<"Instalator środowisk graficznych: "<<endl<<endl;

                    cout<<"[K] KDE Plasma"<<endl;
                    cout<<"[X] Xfce4"<<endl<<endl;

                    cout<<"[B] Budgie"<<endl;
                    cout<<"[C] Cinnamon "<<endl;
                    cout<<"[D] Deepin"<<endl;
                    cout<<"[G] Gnome"<<endl;
                    cout<<"[M] Mate"<<endl<<endl;


                    cout<<"[L] LxQt"<<endl;
                    cout<<"[l] Lxde"<<endl<<endl;

                    cout<<"[A] Awesome"<<endl;
                    cout<<"[E] Enlightenment"<<endl;
                    cout<<"[F] Fluxbox"<<endl;
                    cout<<"[I] i3"<<endl;
                    cout<<"[W] IceWM"<<endl;
                    cout<<"[O] Openbox"<<endl<<endl;

               /*
                    cout<<"[1] CDE"<<endl;
                    cout<<"[2] Hawaii"<<endl;
                    cout<<"[3] Lumina"<<endl;
                    cout<<"[4] Moksha"<<endl;
                    cout<<"[5] Pantheon"<<endl;
                    cout<<"[6] Papyros"<<endl;
                    cout<<"[7] Sugar"<<endl;
                    cout<<"[8] Trinity"<<endl;
                    cout<<"[9] Unity"<<endl;
                */

                    cout<<"[q] Powrót"<<endl;

                    cout<<"\nWybieram: ";
                    cin>>znak;

                switch(znak)
                {
                    case 'K': // KDE
                    {
                    system("clear");
                    system("sudo pacman -S plasma-desktop");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                            break;
                        }

                    case 'X': // Xfce
                    {
                    system("clear");
                    system("sudo pacman -S xfce4 xfce4-goodies");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                        break;
                    }

                    case 'B': // Budgie
                    {
                    system("clear");
                    system("sudo pacman -S budgie-desktop");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                        break;
                    }

                    case 'C': // Cinnamon
                    {
                    system("clear");
                    system("sudo pacman -S cinnamon");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                        break;
                    }

                    case 'D': // Deepin
                    {
                    system("clear");
                    system("sudo pacman -S deepin-desktop");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                        break;
                    }

                    case 'G': // Gnome
                    {
                    system("clear");
                    system("sudo pacman -S gnome gnome-extra");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                        break;
                    }

                    case 'M': // Mate
                    {
                    system("clear");
                    system("sudo pacman -S mate mate-extra");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                        break;
                    }

                    case 'L': // LxQt
                    {
                    system("clear");
                    system("sudo pacman -S lxqt");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                        break;
                    }

                    case 'l': // Lxde
                    {
                    system("clear");
                    system("sudo pacman -S lxde");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                        break;
                    }

                    case 'A': // Awesome
                    {
                    system("clear");
                    system("sudo pacman -S awesome vicious");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                        break;
                    }

                    case 'E': // Enlightenment
                    {
                    system("clear");
                    system("sudo pacman -S enlightenment");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                        break;
                    }

                    case 'F': // Fluxbox
                    {
                    system("clear");
                    system("sudo pacman -S fluxbox fbnews fluxter");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                        break;
                    }

                    case 'I': // i3
                    {
                    system("clear");
                    system("sudo pacman -S i3-wm i3lock i3status");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                        break;
                    }

                    case 'W': // IceWM
                    {
                    system("clear");
                    system("sudo pacman -S icewm icewm-utils icewm-themes");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                        break;
                    }

                    case 'O': // Openbox
                    {
                    system("clear");
                    system("sudo pacman -S openbox oblogout obconf obmenu openbox-themes");
                    cout<<"\nPowrót do MENU [enter]";
                    getchar();getchar();
                    system("clear");

                        break;
                    }

                    case 'q':
                    {
                    system("clear");
                    goto Menu;
                    }
                }
        }

        //################################################################################

            case '4':	// Inne

                {
            while (znak!='q')
                    {
                        cout<<"Inne: "<<endl<<endl;
                        cout<<"[1] Pogoda"<<endl;
                        cout<<"[2] Pobierz wideo"<<endl;
                        cout<<"[3] Konwertuj wideo na mp3"<<endl<<endl;


                        cout<<"[q] Powrót"<<endl<<endl;

                        cout<<"Wybieram: ";
                        cin>>znak;

                        switch(znak)
                        {
                            case '1': // pogoda
                            {
                                system("clear");
                                sring lokalizacja;
                                string pogoda = "curl http://wttr.in/";
                                cout << "Podaj nazwę miejscowości (bez polskich znaków): ";
                                cin >> lokalizacja;
                                pogoda+=lokalizacja;
                                system (pogoda.c_str()  );
                                cout<<"\nPowrót do MENU [enter]";
                                getchar();getchar();
                                system("clear");

                                break;
                            }

                            case '2': // YT
                            {
                                system("clear");
                                string url;
                                string wideo = "youtube-dl ";
                                cout << "Podaj URL pliku: ";
                                cin >> url;
                                wideo+=url;
                                system (wideo.c_str()  );
                                cout<<"\nPowrót do MENU [enter]";
                                getchar();getchar();
                                system("clear");

                                break;
                            }

                            case '3': // Mp3
                            {
                                system("clear");
                                string url;
                                string wideo = "youtube-dl -x --audio-format mp3 ";
                                cout << "Podaj URL pliku: ";
                                cin >> url;
                                wideo+=url;
                                system (wideo.c_str()  );
                                cout<<"\nPowrót do MENU [enter]";
                                getchar();getchar();
                                system("clear");

                                break;
                            }

                            case 'q':
                            {
                            system("clear");
                            goto Menu;
                            }

                    }
                }

            //################################################################################

                                            case '5':	// O 'VIGRID'
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

    }
}
    return 0;
}
