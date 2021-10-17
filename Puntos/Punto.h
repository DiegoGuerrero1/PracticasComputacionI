/*
 * Author: Diego Guerrero
 * Contact: diegoguerrero@comunidad.unam.mx
 * Date: 10/15/21
 */

#ifndef PUNTOS_PUNTO_H
#define PUNTOS_PUNTO_H

//PUNTOS_PUNTO_H

class Punto2D {
public:
//Set and get methods
    void SetPosicion(float , float );
    [[nodiscard]] float GetX() const;
    [[nodiscard]]float GetY() const;

//Point methods
    void Trasladar(float , float );
    void RotarRespectoAlOrigen(double );
    void Escalar(float, float);

private: 

float x{0}; 
float y{0}; 



};

#endif 

