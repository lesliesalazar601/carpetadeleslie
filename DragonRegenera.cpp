#include "DragonRegenera.h"

DragonRegenera::DragonRegenera(string nombre,float danio,float defensa,float agilidad,float vida,Texture &tex_dragon,
                               float vRegen):Dragon(nombre, danio, defensa, agilidad, vida, tex_dragon),
                               velocidadRegeneracion(vRegen){
}
void DragonRegenera::Regenerarse() {

}
