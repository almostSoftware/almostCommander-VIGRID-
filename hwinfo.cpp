#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>

using namespace std;

void hwinfo()
{
    system("clear");

    int licznik;

    while (licznik!=0)
    {
            cout<<"[1]  Bios"      <<  "\t[2] Block"     <<    "\t[3] Bluetooth"    <<endl;
            cout<<"[4]  Bridge"    <<  "\t[5] Camera"    <<    "\t[6] CDrom"        <<endl;
            cout<<"[7]  Chipcard"  <<  "\t[8] CPU"       <<    "\t\t[9] Disk"       <<endl;
            cout<<"[10] Dsl"       <<  "\t[11] Gfxcard"  <<    "\t[12] Ide"         <<endl;
            cout<<"[13] Keyboard"  <<  "\t[14] Memory"   <<    "\t[15] Modem"       <<endl;
            cout<<"[16] Monitor"   <<  "\t[17] Mouse"    <<    "\t[18] Netcard"     <<endl;
            cout<<"[19] Network"   <<  "\t[20] Partition"<<    "\t[21] Pci"         <<endl;
            cout<<"[22] Printer"   <<  "\t[23] Redasd"   <<    "\t[24] Sound"       <<endl;
            cout<<"[25] Usb"       <<  "\t[26] Wlan"                                <<endl<<endl;


            cout<<"[0] Powrót"                                                      <<endl;

            cout<<"\nWybieram: ";
            cin>>licznik;

            system("clear");


    switch (licznik)
    {
        case 1:
        {
            system("clear");
            system("hwinfo --bios");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
            }

        case 2:
        {
            system("clear");
            system("hwinfo --block");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
        }

        case 3:
        {
            system("clear");
            system("hwinfo --bluetooth");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
        }

        case 4:
        {
            system("clear");
            system("hwinfo --bridge");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
        }

        case 5:
        {
            system("clear");
            system("hwinfo --camera");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
        }

        case 6:
        {
            system("clear");
            system("hwinfo --cdrom");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
        }

        case 7:
        {
            system("clear");
            system("hwinfo --chipcard");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
        }

        case 8:
        {
            system("clear");
            system("hwinfo --cpu");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
        }

        case 9:
        {
            system("clear");
            system("hwinfo --disk");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
        }

        case 10:
        {
            system("clear");
            system("hwinfo --dsl");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
        }

        case 11:
        {
            system("clear");
            system("hwinfo --gfxcard");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
        }

        case 12:
        {
            system("clear");
            system("hwinfo --ide");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
        }

        case 13:
        {
            system("clear");
            system("hwinfo --keyboard");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
        }

        case 14:
        {
            system("clear");
            system("hwinfo --memory");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
        }

        case 15:
        {
            system("clear");
            system("hwinfo --modem");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
        }

        case 16:
        {
            system("clear");
            system("hwinfo --monitor");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
        }

        case 17:
        {
            system("clear");
            system("hwinfo --mouse");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
        }

        case 18:
        {
            system("clear");
            system("hwinfo --netcard");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
        }

        case 19:
        {
            system("clear");
            system("hwinfo --network");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
        }

        case 20:
        {
            system("clear");
            system("hwinfo --partition");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
        }

        case 21:
        {
            system("clear");
            system("hwinfo --pci");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
        }

        case 22:
        {
            system("clear");
            system("hwinfo --printer");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
        }

        case 23:
        {
            system("clear");
            system("hwinfo --redasd");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
        }

        case 24:
        {
            system("clear");
            system("hwinfo --sound");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
        }

        case 25:
        {
            system("clear");
            system("hwinfo --usb");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
        }

        case 26:
        {
            system("clear");
            system("hwinfo --wlan");
            cout<<"\nPowrót do MENU [enter]";
            getchar();getchar();
            system("clear");

            break;
        }

        case 0:
        {
            system("clear");
            break;
        }



    }
    }
}
