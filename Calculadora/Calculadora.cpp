#include <iostream>
#include <math.h>
/*
 * Author: Diego Guerrero
 * contact: diegoguerrero@comunidad.unam.mx
 */

using namespace std;
int main() {
    float num1{0}, num2{0};
   char a{0};
    cout << "Bienvenido este programa realiza operaciones basicas con numeros flotantes. \n Ingresa el primer número:" << endl;
    cin >> num1;
    cout << "¿Que quieres hacer?"<< endl;
    cin >> a;

    cout << "ingresa el segundo numero" << endl;
    cin >> num2;

    switch (a) {
        case '+':
            cout << "Resultado: \n" <<num1<<" + " << num2 << " = " << num1+num2 << endl;
            break;
        case '-':
            cout << "Resultado: \n" <<num1<<" - " << num2 << " = " << num1-num2 << endl;
            break;
        case '*':
            cout << "Resultado:  \n" <<num1<<" * " << num2 << " = " << num1*num2 << endl;

            break;
        case '/':
            if (num2 == 0){
                cout << "Resultado indeterminado"<< endl;

            } else{
                cout <<"Resultado: \n" <<num1<<" / " << num2 << " = " << num1/num2 << endl;
            }
            break;

        case '%':
            if (num2 == 0){
                cout << "Resultado indeterminado"<< endl;

            } else{
                cout << "Resultado: \n" <<num1<<" % " << num2 << " = " << fmod(num1,num2) << endl;
            }
            break;
        default:
            cout << "Lo que ingresaste no es una opcion"<<endl;




    }
    return 0;
}

