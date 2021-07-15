#include "DragonPoderes.h"

DragonPoderes::DragonPoderes(string nombre, float danio, float defensa, float agilidad, float vida,
                             Texture& tex_dragon, float DanioPoder):
        Dragon(nombre, danio, defensa, agilidad, vida, tex_dragon), DanioPoder(DanioPoder){}
void DragonPoderes::LanzarPoder(){

}