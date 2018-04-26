//
//  Menu.hpp
//  warcaby
//
//  Created by Ola on 30.11.2017.
//  Copyright © 2017 Ola. All rights reserved.
//

/*
 
 Klasa rysująca tło do gry, dziedzicząca po klasie Okno.
 
 */
#ifndef Glowna_gra_hpp
#define Glowna_gra_hpp

#include <string>
#include <fstream>
#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "ResourcePath.hpp"
#include "Okno.hpp"
#include "Menu.hpp"
#include "WyjatekPoli.hpp"
#include "WyjatekPlik.hpp"
#include "WyjatekOtwierania.hpp"

class Glowna_gra : public Okno
{
   
public:
    Glowna_gra() {
     
    }
    ~Glowna_gra() {
        plik.close();
    }

    void zaladuj_plansze();
    void rysuj_plansze(Okno &);
    bool klikniecie_menu(Okno &);
    void rysuj_omenu(Okno &);
    void zaladuj_omenu();

    void zapisz_do_pliku(std :: string, long int &);
    void odczytaj_z_pliku();
    
    std :: fstream plik;
    
    
private:

    sf::Texture teksturaGry, teksturaDoMenu;
    sf::Sprite obrazekGry, obrazekDoMenu;
    

};

#endif
