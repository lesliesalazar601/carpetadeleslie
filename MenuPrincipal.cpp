#include "MenuPrincipal.h"

MenuPrincipal::MenuPrincipal(Texture& fondo, Font& fuente){
    fondo.loadFromFile("C:/Users/Shenli/CLionProjects/PRAC_windows_h/IMG/FondoMadera.jpg");
    Fondo.setTexture(fondo);
    Fondo.setPosition(0,0);
    titulo.setDatos(450,100,"PROTEGE TUS DRAGONES", 80, "blanco", fuente);
    boton1vs1.setDatos(500,250,"MODO UNO VS UNO", 60, "blanco", fuente);
    boton1vsPC.setDatos(500,350,"MODO UNO VS PC",60,"blanco", fuente);
    botonEstad.setDatos(500,450,"ESTADISTICAS",60,"blanco", fuente);
}
int MenuPrincipal::OpcionEscogida(Window& window){
    if(boton1vs1.PresionaTexto(window)){return 1;}
    if(boton1vsPC.PresionaTexto(window)){return 2;}
    if(botonEstad.PresionaTexto(window)){return 3;}
    else{return 0;}
}

Sprite& MenuPrincipal::getDrawFondo() {return Fondo;}

Text& MenuPrincipal::getDrawTexto(int num_texto) {
    if(num_texto==1){return titulo.getCuadroTexto();}
    else if(num_texto==2){return boton1vs1.getCuadroTexto();}
    else if(num_texto==3){return boton1vsPC.getCuadroTexto();}
    else{return botonEstad.getCuadroTexto();}
}
