
#ifndef PRUEBA_DRAGONREGENERA_H
#define PRUEBA_DRAGONREGENERA_H

#include "Dragon.h"
class DragonRegenera:public Dragon{
    float velocidadRegeneracion;
public:
    DragonRegenera(string nombre, float danio, float defensa, float agilidad, float vida,
                   Texture& tex_dragon, float vRegen);
    void Regenerarse();
};


#endif //PRUEBA_DRAGONREGENERA_H
