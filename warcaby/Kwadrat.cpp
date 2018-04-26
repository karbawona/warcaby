//
//  Kwadrat.cpp
//  warcaby
//
//  Created by Ola on 15.12.2017.
//  Copyright © 2017 Ola. All rights reserved.
//

#include "Kwadrat.hpp"

void Kwadrat:: zaladuj_czarne(){
    
    tczarny.loadFromFile(resourcePath() + "kwadrat.png" );
    okwadrat.setTexture(tczarny);
}

void Kwadrat:: rysuj_czarne(Okno &okno){
    okno.oknoAplikacji->draw (okwadrat);
}

void Kwadrat:: ustaw_kwadrat(float x, float y) {
    okwadrat.setPosition(sf :: Vector2f(x, y)); 
}

bool Kwadrat :: zwroc_klikniecie(Okno & okno) {
    return okwadrat.getGlobalBounds().contains(okno.zdarzenie.mouseMove.x, okno.zdarzenie.mouseMove.y);
}


