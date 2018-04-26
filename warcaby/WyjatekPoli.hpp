//
//  WyjatekPoli.hpp
//  warcaby
//
//  Created by Ola on 19.12.2017.
//  Copyright © 2017 Ola. All rights reserved.
//

/*
 Klasa Wyjątek, po której dziedziczą WyjątekOtwierania i WyjątekPlik.
 Odpowiedzialna za stowrzenie wirtualnej klasy wyświetlającej błąd działania podczas obsługi wyjątków.
 */

#ifndef WyjatekPoli_hpp
#define WyjatekPoli_hpp
#include <iostream>

class WyjatekPoli {


public:
    
    WyjatekPoli();
    
    ~WyjatekPoli () {}
    
    virtual std :: string wyswietl_blad();

    
protected:
    std :: string info;
    
    
    
};

#endif /* WyjatekPoli_hpp */
