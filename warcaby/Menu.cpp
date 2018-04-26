//
//  Menu.cpp
//  warcaby
//
//  Created by Ola on 30.11.2017.
//  Copyright © 2017 Ola. All rights reserved.
//

#include "Menu.hpp"



void Menu :: zaladuj_plansze() {
    teksturaMenu.loadFromFile(resourcePath() + "menu.png" );
    obrazekMenu.setTexture(teksturaMenu);
}


void Menu:: rysuj_plansze(Okno &okno){
    okno.oknoAplikacji->draw (obrazekMenu);
}


void Menu :: zaladuj_obrazki() {
    
    teksturaZasady.loadFromFile(resourcePath() + "zasady.png" );
    obrazekZasady.setTexture(teksturaZasady);
    
    tekstruraHistorii.loadFromFile(resourcePath() + "historia.png" );
    obrazekHistorii.setTexture(tekstruraHistorii);

    tekstruraGry.loadFromFile(resourcePath() + "zagraj.png" );
    obrazekGry.setTexture(tekstruraGry);
}

void Menu :: rysuj_obrazki(Okno &okno) {
    
    obrazekZasady.setPosition(sf::Vector2f(700, 400));
     okno.oknoAplikacji->draw (obrazekZasady);
    
    obrazekGry.setPosition(sf::Vector2f(700, 600));
    okno.oknoAplikacji->draw (obrazekGry);
    
    obrazekHistorii.setPosition(sf::Vector2f(700, 800));
    okno.oknoAplikacji->draw (obrazekHistorii);
}


bool Menu :: klikniecie_zagraj(Okno &okno) {
    
    return obrazekGry.getGlobalBounds().contains(okno.zdarzenie.mouseMove.x, okno.zdarzenie.mouseMove.y);
}

bool Menu :: klikniecie_historia(Okno &okno){
    
    return obrazekHistorii.getGlobalBounds().contains(okno.zdarzenie.mouseMove.x, okno.zdarzenie.mouseMove.y);
}

bool Menu :: klikniecie_zasady(Okno &okno) {
    
    return obrazekZasady.getGlobalBounds().contains(okno.zdarzenie.mouseMove.x, okno.zdarzenie.mouseMove.y);
}

bool Menu:: zwroc_okno(Okno & okno) {
    
    return okno.oknoAplikacji->isOpen();
}

void Menu :: zaladuj_wygrana1() {
    teksturaWygranej1.loadFromFile(resourcePath() + "wygrana1Gracz.png" );
    obrazekWygranej1.setTexture(teksturaWygranej1);
}


void Menu :: zaladuj_wygrana2() {
    teksturaWygranej2.loadFromFile(resourcePath() + "wygrana2Gracz.png" );
    obrazekWygranej2.setTexture(teksturaWygranej2);
}

void Menu :: rysuj_wygrana1(Okno & okno){
    okno.oknoAplikacji->draw (obrazekWygranej1);
}


void Menu :: rysuj_wygrana2(Okno & okno){
    okno.oknoAplikacji->draw (obrazekWygranej2);
}


bool Menu:: klikniecie_wygranej1(Okno & okno){
    return obrazekWygranej1.getGlobalBounds().contains(okno.zdarzenie.mouseMove.x, okno.zdarzenie.mouseMove.y);
}

bool Menu:: klikniecie_wygranej2(Okno & okno){
    return obrazekWygranej2.getGlobalBounds().contains(okno.zdarzenie.mouseMove.x, okno.zdarzenie.mouseMove.y);
}
