//
//  Gracz.hpp
//  warcaby
//
//  Created by Ola on 10.12.2017.
//  Copyright © 2017 Ola. All rights reserved.
//

/*
 Klasa Gracz, która ma w sobie wektor, przechowujący 12 pionków typu Pionek.
 Obiekty klasy Gracz są osobnymi graczami, którzy mają do dyspozycji 12 pionków.
 */

#ifndef Gracz_hpp
#define Gracz_hpp

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "ResourcePath.hpp"
#include <iostream>
#include <vector>
#include "Pionek.hpp"

class Gracz {
    
public:
    friend class Pionek;
    
    int id;
    std :: vector <Pionek*> wektor;
    
    Gracz (int, std :: string );
    
    ~Gracz () {
    }

};


#endif /* Gracz_hpp */
