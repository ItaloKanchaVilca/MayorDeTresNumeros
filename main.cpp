#include <iostream>

using namespace std;

int main()
{
    float a;
    float b;
    float c;

    cout<<"Ingrese un valor para a: ";
    cin>>a;

    cout<<"Ingrese un valor para b: ";
    cin>>b;

    cout<<"Ingrese un valor para c: ";
    cin>>c;

    if (a>b && a>c)
        cout<<"El mayor es: "<<a;
    if (b>a && b>c)
        cout<<"El mayor es: "<<b;
    else
        cout<<"El mayor es: "<<c;
    return 0;
}
