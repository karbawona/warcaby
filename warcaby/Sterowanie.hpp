//
//  Sterowanie.hpp
//  warcaby
//
//  Created by Ola on 13.12.2017.
//  Copyright © 2017 Ola. All rights reserved.
//
/*
 Klasa odpowiedzialna za całą mechanikę sterowania w trakcie gry.
 */
#ifndef Sterowanie_hpp
#define Sterowanie_hpp

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "ResourcePath.hpp"
#include <iostream>
#include <vector>
#include "Pionek.hpp"
#include "Gracz.hpp"
#include "Okno.hpp"
#include "Kwadrat.hpp"
#include <vector>
#include <math.h>
#include <stdio.h>

class Sterowanie //: public Okno
{
    
public:
    friend class Gracz;
    friend class Okno;
    friend class Pionek;

    
    
    Sterowanie() {}
    ~Sterowanie() {}

    void ustaw_pionki_poczatkowe(Gracz &, Gracz &);
    void wyswietl_pionki(Gracz &, Gracz &, Okno &);
    bool klikniecie_pionka(Okno &, Gracz &, int &);
    
    void wypelnij_wektorKwadrat();
    void ustaw_kwadraty();
    void wyswietl_kwadraty(Okno &);
    bool klikniecie_kwadrta(Okno &, int &);
    void zamiana_miejsc(Gracz &);
    
    void porusz_graczem1(Gracz &, Gracz &, int &, int &, long int &, Okno &);
    void zbicie_pionka (Gracz &, Gracz &, int &, int &, int &, int &, long int &, Okno &);

    void ustaw_damke1(Gracz & gracz, int &);
    void ustaw_damke2(Gracz & gracz, int &);

    
private:
    
      std :: vector <Kwadrat*> wektorKwadrat;
    
    
};


//zrobić funkcję uzupełniającą dodane wektorKwadrat

#endif /* Sterowanie_hpp */
