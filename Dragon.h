
#ifndef PRUEBA_DRAGON_H
#define PRUEBA_DRAGON_H

#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;
class Dragon {
    Sprite ImagenDragon;
    string nombre;
    float danio;
    float defensa;
    float agilidad;
    float vida;
public:
    Dragon(string nombre, float danio, float defensa, float agilidad, float vida, Texture& tex_dragon);
    virtual void setPosicionImagen(float posX,float posY);
    virtual Sprite& getImagen();
    virtual void Disparar();
    virtual void Defenderse();
    virtual void Recargar();
    virtual void BajarVida();
};


#endif //PRUEBA_DRAGON_H
