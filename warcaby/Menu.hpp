//
//  Menu.hpp
//  warcaby
//
//  Created by Ola on 30.11.2017.
//  Copyright © 2017 Ola. All rights reserved.
//

/*
 
 Klasa rysująca tło menu, dziedzicząca po klasie okno.
 
 */


#ifndef Menu_hpp
#define Menu_hpp

#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "ResourcePath.hpp"
#include "Okno.hpp"

class Menu : public Okno
{
public:
    Menu()  {
        
        wygrana = false;
        ktory = 0;
    }
    
    ~Menu() {
    }
    
    void zaladuj_plansze();
    void rysuj_plansze(Okno &);
    void zaladuj_obrazki();
    void rysuj_obrazki(Okno &);
    bool klikniecie_zagraj(Okno &);
    bool klikniecie_zasady(Okno &);
    bool klikniecie_historia(Okno &);
    bool zwroc_okno(Okno &);
    
    void rysuj_wygrana1(Okno &);
    void rysuj_wygrana2(Okno &);
    void zaladuj_wygrana1();
    void zaladuj_wygrana2();
    bool klikniecie_wygranej1(Okno &);
    bool klikniecie_wygranej2(Okno &);
    
    bool wygrana;
    int ktory;
    
    
private:
    sf :: Texture teksturaMenu, teksturaZasady, tekstruraGry, tekstruraHistorii, teksturaWygranej1, teksturaWygranej2;
    sf :: Sprite obrazekMenu, obrazekZasady, obrazekGry, obrazekHistorii, obrazekWygranej1, obrazekWygranej2;
    
};


#endif /* Menu_hpp */
