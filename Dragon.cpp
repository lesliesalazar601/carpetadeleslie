#include "Dragon.h"
Dragon::Dragon(string nombre, float danio, float defensa, float agilidad, float vida, Texture& tex_dragon):
        nombre(nombre), danio(danio), defensa(defensa), agilidad(agilidad), vida(vida){
    ImagenDragon.setTexture(tex_dragon);
}
void Dragon::setPosicionImagen(float posX,float posY){
    ImagenDragon.setPosition(posX,posY);
}
void Dragon::Disparar() {

}
void Dragon::Defenderse() {

}
void Dragon::Recargar() {

}
void Dragon::BajarVida() {

}
Sprite& Dragon::getImagen(){return ImagenDragon;}