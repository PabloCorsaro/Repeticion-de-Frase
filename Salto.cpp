/*
Repetir Frase con Saltos
Corsaro Pablo
28-04-2017
*/
#include <iostream>

using namespace std;

int main()
{

    int i = 0;
    A: cout << "Me Gusta Pokemon." << endl;
    i=i+1;

    if(i<200)
    {
       goto A;
    }

    return 0;
}
