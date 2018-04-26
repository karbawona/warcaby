//
//  WyjatekOtwierania.cpp
//  warcaby
//
//  Created by Ola on 20.12.2017.
//  Copyright © 2017 Ola. All rights reserved.
//

#include "WyjatekOtwierania.hpp"

WyjatekOtwierania:: WyjatekOtwierania() {
    
    wiadomosc = "Nie można otworzyć pliku.";
}

std :: string WyjatekOtwierania:: wyswietl_blad() {
    
    std :: cout << wiadomosc;
    WyjatekPoli :: wyswietl_blad();
}
