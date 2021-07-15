#ifndef PRUEBA_MENUPRINCIPAL_H
#define PRUEBA_MENUPRINCIPAL_H

#include <iostream>
#include <SFML/Graphics.hpp>
#include "CuadroTexto.h"

using namespace sf;
using namespace std;

class MenuPrincipal {
    Sprite Fondo; //clase de SFML
    CuadroTexto titulo;
    CuadroTexto boton1vs1;
    CuadroTexto boton1vsPC;
    CuadroTexto botonEstad;
public:
    explicit MenuPrincipal(Texture& fondo, Font& fuente);
    int OpcionEscogida(Window &window);
    Sprite& getDrawFondo();
    Text& getDrawTexto(int num_texto);
};


#endif //PRUEBA_MENUPRINCIPAL_H
