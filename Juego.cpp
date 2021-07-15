#include "Juego.h"
#include "MenuDragones.h"
void Juego::CorrerJuego() {
    RenderWindow window(VideoMode(1300, 700, 32), "Juego batalla");
    Texture t_fondo;
    Font fuente;
    MenuPrincipal menu(t_fondo, fuente);
    while(window.isOpen()){
        Event event;
        while (window.pollEvent(event))
        {   if (event.type == Event::Closed)
                window.close();
        }
        if(menu.OpcionEscogida(window)==1){
        }
        if(menu.OpcionEscogida(window)==2){
        }
        else{;}
        window.clear();
        window.draw(menu.getDrawFondo());
        window.draw(menu.getDrawTexto(1));
        window.draw(menu.getDrawTexto(2));
        window.draw(menu.getDrawTexto(3));
        window.draw(menu.getDrawTexto(4));
        window.display();
    }
}