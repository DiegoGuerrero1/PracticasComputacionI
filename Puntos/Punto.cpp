/*
 * Author: Diego Guerrero
 * Contact: diegoguerrero@comunidad.unam.mx
 * Date: 10/15/21
 */



# include "Punto.h"
# include <math.h>
# define PI 3.14159265

using namespace std;

//Set and Get methods
void Punto2D::SetPosicion(float x1, float y1) {
    x = x1;
    y = y1;
}
float Punto2D::GetX() const{
    return x;
}
float Punto2D::GetY() const{
    return y;
}

//Point Methods

void Punto2D::Trasladar(float dx, float dy) {

    x += dx;
    y += dy;

}

void Punto2D::RotarRespectoAlOrigen(double theta) {
    int xO = x;
    x = x*cos(theta*(PI/180))+y* sin(theta*(PI/180));
    y = xO*sin(theta*(PI/180))+ y*cos(theta*(PI/180));
}

void Punto2D::Escalar(float kx, float ky) {
    x = x*kx;
    y = y*ky;
}

