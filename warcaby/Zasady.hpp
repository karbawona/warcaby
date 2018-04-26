//
//  Zasady.hpp
//  warcaby
//
//  Created by Ola on 07.12.2017.
//  Copyright © 2017 Ola. All rights reserved.
//

/*
 Klasa dziedzicząca po klasie Okno. Tworzy tło z zasadmi, po kliknięciu w menu w pole "zasady".
 */

#ifndef Zasady_hpp
#define Zasady_hpp

#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "ResourcePath.hpp"
#include "Okno.hpp"

class Zasady : public Okno
{
    
public:
    Zasady() {}
    ~Zasady() {}
    
    void zaladuj_plansze();
    void rysuj_plansze(Okno &);
    void zaladuj_obrazek();
    void rysuj_obrazek(Okno &);
    bool klikniecie_wyjscie();
    bool klikniecie_menu(Okno &);
    
private:
    
    sf :: Texture teksturaZasad, teksturaWyjscia;
    sf :: Sprite obrazekZasad, obrazekWyjscia;
    
};


#endif /* Zasady_hpp */
