//
// Created by guerrero on 11/11/21.
//

#ifndef CARGAELECTRICA_GRUPO_H
#define CARGAELECTRICA_GRUPO_H
#include <string>

using namespace std;

class Grupo {

public:


    Grupo(string nombre, float pK, int carga);
    Grupo();
    void setNombre(string name);
    void setPk(float k);
    void setCarga(int charge);
    int getCarge();
    string getName();
    float getpK();
private:
    string nombreGrupo;
    float pKGrupo;
    int cargaGrupo;

};



#endif //CARGAELECTRICA_GRUPO_H
