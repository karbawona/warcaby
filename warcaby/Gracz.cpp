//
//  Gracz.cpp
//  warcaby
//
//  Created by Ola on 10.12.2017.
//  Copyright © 2017 Ola. All rights reserved.
//

#include "Gracz.hpp"


 Gracz :: Gracz (int i, std :: string nazwa)  {
    
    id = i;
    for( int i = 0; i < 12; i++ )
    {
        Pionek *wsk = new Pionek(i);
        wektor.push_back(wsk);
        wektor[i]->zaladuj_pionek(nazwa);
        
       
    }
     
     int *w = new int(7);
     std :: cout << *w;
    
}

