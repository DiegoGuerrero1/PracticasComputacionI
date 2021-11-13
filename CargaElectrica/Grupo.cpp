//
// Created by guerrero on 11/11/21.
//

#include <string>
#include "Grupo.h"

using namespace std;

Grupo::Grupo(string nombre, float pK, int carga) {
        setNombre(nombre);
        setPk(pK);
        setCarga(carga);

}
Grupo::Grupo() {
    setNombre("");
    setPk(0);
    setCarga(0);

}

void Grupo::setNombre(string name) {
    nombreGrupo = name;
}

void Grupo::setPk(float k) {
    pKGrupo = k;
}

void Grupo::setCarga(int charge) {
    cargaGrupo = charge;
}

int Grupo::getCarge() {
    return cargaGrupo;
}

string Grupo::getName() {
    return nombreGrupo;
}

float Grupo::getpK() {
    return pKGrupo;
}
