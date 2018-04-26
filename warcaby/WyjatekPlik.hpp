//
//  WyjatekPlik.hpp
//  warcaby
//
//  Created by Ola on 20.12.2017.
//  Copyright © 2017 Ola. All rights reserved.
//
/*
 Klasa dziedzicząca po WyjatekPoli, nadpisuje funkcję wyświetlającą błąd, która zostaje uruchamiana podczas obsługi wyjątków w trakcie zapisywania informacji do pliku.
 */

#ifndef WyjatekPlik_hpp
#define WyjatekPlik_hpp

#include <iostream>
#include "WyjatekPoli.hpp"

class WyjatekPlik : public WyjatekPoli {
    
public:
    WyjatekPlik();
    ~WyjatekPlik() {}
    std :: string wyswietl_blad();
    
private:
    std :: string wiadomosc;
    
    
};


#endif /* WyjatekPlik_hpp */
