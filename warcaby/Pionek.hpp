//
//  Pionek.hpp
//  warcaby
//
//  Created by Ola on 10.12.2017.
//  Copyright © 2017 Ola. All rights reserved.
//

/*
 Klasa będąca "podstawą" dla klasy Gracz, zawiera wszystkie potrzebne metody i zmiennie do utworzenia pojedynczego pionka.
 */

#ifndef Pionek_hpp
#define Pionek_hpp

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "ResourcePath.hpp"
#include <iostream>
#include "Okno.hpp"
#include "Glowna_gra.hpp"


class Pionek 
{
  
public:
    friend class Okno;
    
       int id;
      sf :: Sprite obrazek;
      float xP, yP;
      bool damka;
    
    
    Pionek (int i)  {
        id = i;
        damka = false;
    }
    ~Pionek () {}
    
    void rysuj_pionek(Okno &);
    void ustaw_pozycje(float, float);
    void zaladuj_pionek(std :: string);
    bool zwroc_klikniecie(Okno &);
 
    
private:
    sf :: Texture tekstura;

};


#endif /* Pionek_hpp */
