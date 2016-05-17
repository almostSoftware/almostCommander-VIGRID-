#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>

using namespace std;

void gui_installer()
{
    char znak;

    while (znak!='q')
            {
                cout<<"\tInstalator środowisk graficznych: "<<endl<<endl;

                cout<<"[K] KDE Plasma"      <<endl;
                cout<<"[X] Xfce4"           <<endl<<endl;

                cout<<"[B] Budgie"          <<endl;
                cout<<"[C] Cinnamon "       <<endl;
                cout<<"[D] Deepin"          <<endl;
                cout<<"[G] Gnome"           <<endl;
                cout<<"[M] Mate"            <<endl<<endl;


                cout<<"[L] LxQt"            <<endl;
                cout<<"[l] Lxde"            <<endl<<endl;

                cout<<"[A] Awesome"         <<endl;
                cout<<"[E] Enlightenment"   <<endl;
                cout<<"[F] Fluxbox"         <<endl;
                cout<<"[I] i3"              <<endl;
                cout<<"[W] IceWM"           <<endl;
                cout<<"[O] Openbox"         <<endl<<endl;

           /*
                cout<<"[1] CDE"             <<endl;
                cout<<"[2] Hawaii"          <<endl;
                cout<<"[3] Lumina"          <<endl;
                cout<<"[4] Moksha"          <<endl;
                cout<<"[5] Pantheon"        <<endl;
                cout<<"[6] Papyros"         <<endl;
                cout<<"[7] Sugar"           <<endl;
                cout<<"[8] Trinity"         <<endl;
                cout<<"[9] Unity"           <<endl;
            */

                cout<<"[q] Powrót"          <<endl;

                cout<<"\nWybieram: ";
                cin>>znak;

                system("clear");

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

                case 'L': // LxQtvoid gui_installer()
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
