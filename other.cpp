#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>

using namespace std;

void other()
{
    char znak;

    while (znak!='q')
            {
                cout<<"\tInne: "<<endl<<endl;
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
                        string lokalizacja;
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
                    break;
                    }

            }
        }

}
