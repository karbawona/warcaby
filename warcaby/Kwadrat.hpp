//
//  Kwadrat.hpp
//  warcaby
//
//  Created by Ola on 15.12.2017.
//  Copyright © 2017 Ola. All rights reserved.
//

/*
 Klasa tworząca czarne kwadraty ustawiane na czarnych polach planszy, dzięki której pionki mogą być przenoszone.
 */

#ifndef Kwadrat_hpp
#define Kwadrat_hpp

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "ResourcePath.hpp"
#include <iostream>
#include "Okno.hpp"
#include "Glowna_gra.hpp"


class Kwadrat  {
    
public:
    int indeks;
    float xK, yK;
    sf :: Sprite okwadrat;
    
    Kwadrat(int i) {
        indeks = i;
    }
    
    ~Kwadrat() {}
    void zaladuj_czarne();
    void rysuj_czarne(Okno &);
    void ustaw_kwadrat(float, float);
    bool zwroc_klikniecie(Okno &);

private:
    sf :: Texture tczarny;
    
    
};
#endif /* Kwadrat_hpp */
