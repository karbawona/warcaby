//
//  Pionek.cpp
//  warcaby
//
//  Created by Ola on 10.12.2017.
//  Copyright © 2017 Ola. All rights reserved.
//

#include "Pionek.hpp"


void Pionek :: zaladuj_pionek (std :: string nazwa) {
    tekstura.loadFromFile (resourcePath() + nazwa);
    obrazek.setTexture (tekstura);
}


void  Pionek :: rysuj_pionek(Okno & okno) {
    okno.oknoAplikacji->draw (obrazek);
}

void Pionek :: ustaw_pozycje(float x, float y) {
    obrazek.setPosition(sf::Vector2f(x, y));
}

bool Pionek :: zwroc_klikniecie(Okno & okno) {
    return obrazek.getGlobalBounds().contains(okno.zdarzenie.mouseMove.x, okno.zdarzenie.mouseMove.y);
}








