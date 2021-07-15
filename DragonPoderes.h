
#ifndef PRUEBA_DRAGONPODERES_H
#define PRUEBA_DRAGONPODERES_H

#include "Dragon.h"

class DragonPoderes:public Dragon{
    float DanioPoder;
public:
    DragonPoderes(string nombre, float danio, float defensa, float agilidad, float vida, Texture& tex_dragon, float DanioPoder);
    void LanzarPoder();
};


#endif //PRUEBA_DRAGONPODERES_H
