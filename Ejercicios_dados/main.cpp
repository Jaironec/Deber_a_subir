#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int input (int mensajes)
{
    if (mensajes == 1)
    {
        cout << "Presione \"ENTER\" para lanzar el Primer Dado"<<endl;
    }
    else
    {
        cout << "Presione \"ENTER\" para lanzar el Segundo Dado";
    }
    cin.ignore ();
}


int tirardado ()
{
        int ran;
        srand (time (0));
        ran = rand () % 6 + 1;
        cout << " El dado obtuvo " << ran <<endl;
        return ran;
}
int dado (int primerdado, int segundodado)
{
    if (primerdado==segundodado){
        cout<<endl<<"Felicidades has ganado, tus dados son pares";
    }
    else if(primerdado+segundodado==11){
        cout<<endl<<"Felicidades has ganado, tus dados sumaron 11";
    }
    else{
        cout<<endl<<"Has perdido no fue par y la suma de los dados fue "<<primerdado+segundodado<<" , intentalo de nuevo";
    }
}



int main ()
{
    int primerdado, segundodado;
    int opcion;
    bool salir=false;
    while(true){
        cout<<endl<<endl<<"MENU PRINCIPAL - Juego de dados si sale par o 11 ganas";
        cout<<endl<<"1. Lanzar dados";
        cout<<endl<<"2. SALIR";
        cout<<endl<<" CUAL ES TU OPCION: ";
        cin>>opcion;
        switch (opcion){
            case 1:
                input (1);
                primerdado = tirardado ();
                input (2);
                segundodado = tirardado ();
                dado(primerdado, segundodado);
                break;
            case 2:
                salir= true;
                break;
            default:
                cout<<endl<<"OPCION NO VALIDAD";

        }
        if(salir)
            break;
    }
    return 0;
}
