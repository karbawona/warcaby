//
//  WyjatekPlik.cpp
//  warcaby
//
//  Created by Ola on 20.12.2017.
//  Copyright © 2017 Ola. All rights reserved.
//

#include "WyjatekPlik.hpp"

WyjatekPlik :: WyjatekPlik() {
    
   wiadomosc = " nie udalo sie otworzyc pliku. ";
}


std :: string WyjatekPlik:: wyswietl_blad()  {
    
    std :: cout << wiadomosc;
    WyjatekPoli :: wyswietl_blad();
}


