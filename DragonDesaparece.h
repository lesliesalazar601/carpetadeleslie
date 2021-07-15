#ifndef PRUEBA_DRAGONDESAPARECE_H
#define PRUEBA_DRAGONDESAPARECE_H

#include "Dragon.h"

class DragonDesaparece: public Dragon{
public:
    DragonDesaparece(string nombre, float danio, float defensa, float agilidad, float vida, Texture& tex_dragon);
    void Desaparecer();
};


#endif //PRUEBA_DRAGONDESAPARECE_H
