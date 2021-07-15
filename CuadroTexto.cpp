#include "CuadroTexto.h"

void CuadroTexto::setDatos(float X, float Y, string texto, int tamanio, string color, Font& fuente){
    fuente.loadFromFile("C:/Users/Shenli/CLionProjects/PRAC_windows_h/karma.otf");
    CuadroDeTexto.setFont(fuente);
    CuadroDeTexto.setString(texto);
    CuadroDeTexto.setCharacterSize(tamanio);
    if(color=="blanco"){CuadroDeTexto.setFillColor(Color::White);}
    if(color=="negro"){CuadroDeTexto.setFillColor(Color::Black);}
    CuadroDeTexto.setPosition(X,Y);
}
bool CuadroTexto::PresionaTexto(Window& window) {
    int mouse_x, mouse_y;
    mouse_x = Mouse::getPosition(window).x; //funcion sfml
    mouse_y = Mouse::getPosition(window).y; //funcion sfml
    float posXinicia=CuadroDeTexto.getGlobalBounds().left;
    float posXfin   =posXinicia + CuadroDeTexto.getGlobalBounds().width;
    float posYinicia=CuadroDeTexto.getGlobalBounds().top;
    float posYfin= posYinicia+ CuadroDeTexto.getGlobalBounds().height;
    if(Mouse::isButtonPressed(Mouse::Left) &&
       posXinicia <= mouse_x && posXfin >= mouse_x &&
       posYinicia <= mouse_y && posYfin >= mouse_y){
        return true;
    }else{ return false;}
}
Text & CuadroTexto::getCuadroTexto(){
    return CuadroDeTexto;
}