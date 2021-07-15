#ifndef PRUEBA_CUADROTEXTO_H
#define PRUEBA_CUADROTEXTO_H

#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;
class CuadroTexto: public Text /*sfml*/{
    Text CuadroDeTexto;
public:
    CuadroTexto()=default;
    void setDatos(float X, float Y, string texto, int tamanio, string color, Font& fuente);
    bool PresionaTexto(Window& window);
    Text & getCuadroTexto();
};

#endif //PRUEBA_CUADROTEXTO_H
