//
//  WyjatekOtwierania.hpp
//  warcaby
//
//  Created by Ola on 20.12.2017.
//  Copyright © 2017 Ola. All rights reserved.
//

/*
 Klasa dziedzicząca po WyjatekPoli, nadpisuje funkcję wyświetlającą błąd, która zostaje uruchamiana podczas obsługi wyjątków w trakcie odczytywania informacji z pliku.
 */


#ifndef WyjatekOtwierania_hpp
#define WyjatekOtwierania_hpp
#include <iostream>
#include "WyjatekPoli.hpp"

class WyjatekOtwierania : public WyjatekPoli {
    
public:
    WyjatekOtwierania();
    ~WyjatekOtwierania() {}
    std :: string wyswietl_blad();
    
    private :
    std :: string wiadomosc;
};

#endif /* WyjatekOtwierania_hpp */
