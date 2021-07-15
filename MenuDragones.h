#ifndef PRUEBA_MENUDRAGONES_H
#define PRUEBA_MENUDRAGONES_H

#include "Dragon.h"
#include <vector>
class MenuDragones {
    vector<Dragon*> ListaDragones;
    vector<Dragon*> DragonesJug1;
    vector<Dragon*> DragonesJug2;
public:
    MenuDragones(string ModoJuego);
    void AgregarDragon(int numJugador,Dragon* dragon);

};


#endif //PRUEBA_MENUDRAGONES_H
