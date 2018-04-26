//
//  Sterowanie.cpp
//  warcaby
//
//  Created by Ola on 13.12.2017.
//  Copyright © 2017 Ola. All rights reserved.
//

#include "Sterowanie.hpp"


void Sterowanie :: ustaw_pionki_poczatkowe(Gracz &gracz, Gracz &gracz2) {
    
    float x = 20;
    float x3 = 20;
    float x2 = 170.0;
    
    float a = 170.0;
    float a1 = 20.0;
    float a2 = 170.0;
    
    if (gracz.id == 1) {
        
        for (int i = 0; i < 12; i++) {
            
            if (i < 4) {
                gracz.wektor[i]->ustaw_pozycje(x, 1070.0);
                gracz.wektor[i]->xP = x;
                gracz.wektor[i]->yP = 1070.0;
                x += 300.0;

            }
            

            if (i >=4 and i < 8) {

                gracz.wektor[i]->ustaw_pozycje(x2, 920.0);
                x2 += 300.0;
                gracz.wektor[i]->xP = x2;
                gracz.wektor[i]->yP = 920.0;
            }


            if (i >= 8) {

                gracz.wektor[i]->ustaw_pozycje(x3, 770.0);
                gracz.wektor[i]->xP = x3;
                gracz.wektor[i]->yP = 770.0;
                x3 += 300.0;
            }


        }

    } //to do ifa (gracz.id == 1)
    
    
    if (gracz2.id == 2) {
        
        for (int i = 0; i < 12; i++) {
            
            if (i < 4) {
                gracz2.wektor[i]->ustaw_pozycje(a, 20.0);
                gracz2.wektor[i]->xP = x;
                gracz2.wektor[i]->yP = 20.0;
                a += 300.0;
            }
            
            
            if (i >=4 and i < 8) {
                gracz2.wektor[i]->ustaw_pozycje(a1, 170.0);
                gracz2.wektor[i]->xP = x;
                gracz2.wektor[i]->yP = 170.0;
                a1 += 300.0;
            }
            

            if (i >= 8) {
                gracz2.wektor[i]->ustaw_pozycje(a2, 320.0);
                gracz2.wektor[i]->xP = x;
                gracz2.wektor[i]->yP = 320.0;
                a2 += 300.0;
            }

        }
        
    } //to do ifa (gracz.id == 2)
}

//----------------------------------------------------------------------------------------------------------


void Sterowanie:: wyswietl_pionki(Gracz & gracz1, Gracz &gracz2, Okno& okno) {
    
    for (int i = 0; i < 12; i++) {
        gracz1.wektor[i]->rysuj_pionek(okno);
        
        gracz2.wektor[i]->rysuj_pionek(okno);
        
    }
    
    
}

//----------------------------------------------------------------------------------------------------------

bool Sterowanie:: klikniecie_pionka(Okno & okno, Gracz & gracz, int &nr) {
    if(gracz.wektor[0]->zwroc_klikniecie(okno)) {
        nr = 0;
        return gracz.wektor[0]->zwroc_klikniecie(okno);
    }
    if(gracz.wektor[1]->zwroc_klikniecie(okno)) {
        nr = 1;
        return gracz.wektor[1]->zwroc_klikniecie(okno);
    }
    if(gracz.wektor[2]->zwroc_klikniecie(okno)){
        nr = 2;
        return gracz.wektor[2]->zwroc_klikniecie(okno);
    }
    if(gracz.wektor[3]->zwroc_klikniecie(okno)) {
        nr = 3;
        return gracz.wektor[3]->zwroc_klikniecie(okno);
    }
    if(gracz.wektor[4]->zwroc_klikniecie(okno)){
        nr = 4;
       return gracz.wektor[4]->zwroc_klikniecie(okno);
    }
    if(gracz.wektor[5]->zwroc_klikniecie(okno)){
        nr = 5;
     return gracz.wektor[5]->zwroc_klikniecie(okno);
    }
    if(gracz.wektor[6]->zwroc_klikniecie(okno)) {
        nr = 6;
        return gracz.wektor[6]->zwroc_klikniecie(okno);
    }
    if(gracz.wektor[7]->zwroc_klikniecie(okno)) {
        nr = 7;
        return gracz.wektor[7]->zwroc_klikniecie(okno);
    }
    if(gracz.wektor[8]->zwroc_klikniecie(okno)) {
        nr = 8;
        return gracz.wektor[8]->zwroc_klikniecie(okno);
    }
    if(gracz.wektor[9]->zwroc_klikniecie(okno)) {
        nr = 9;
     return gracz.wektor[9]->zwroc_klikniecie(okno);
    }
    if(gracz.wektor[10]->zwroc_klikniecie(okno)){
        nr = 10;
     return gracz.wektor[10]->zwroc_klikniecie(okno);
    }
    if(gracz.wektor[11]->zwroc_klikniecie(okno)) {
        nr = 11;
        return gracz.wektor[11]->zwroc_klikniecie(okno);
    }
}

//----------------------------------------------------------------------------------------------------------

void Sterowanie:: wypelnij_wektorKwadrat() {
    
    for( int i = 0; i < 32; i++ )
    {
        Kwadrat *wsk = new Kwadrat(i);
        wektorKwadrat.push_back(wsk);
        wektorKwadrat[i]->zaladuj_czarne();
    }

}

//----------------------------------------------------------------------------------------------------------

void Sterowanie:: ustaw_kwadraty() {
    
    float x = 0.0;
    float x1 = 20.0;
    float x2 = 170.0;
    for (int i=0; i<8; i++) {
        
        if (i < 4) {
            wektorKwadrat[i]->ustaw_kwadrat(x1, 470.0);
            wektorKwadrat[i]->xK = x1;
            wektorKwadrat[i]->yK = 470.0;
             x1 += 300.0;
        }
        
        
        if (i >=4 and i < 8) {
            
           wektorKwadrat[i]->ustaw_kwadrat(x2, 620.0);
            
            wektorKwadrat[i]->xK = x2;
            wektorKwadrat[i]->yK = 620.0;
            x2 += 300.0;
        }
        if (i >= 8) {
            
            wektorKwadrat[i]->ustaw_kwadrat(x, x);
            wektorKwadrat[i]->xK = x;
            wektorKwadrat[i]->yK = x;
         //   x++;
        }
    }
}

//----------------------------------------------------------------------------------------------------------

void Sterowanie:: wyswietl_kwadraty(Okno &okno) {
    
    for (int i = 0; i < 8; i++) {
        wektorKwadrat[i]->rysuj_czarne(okno);
    }
}

//----------------------------------------------------------------------------------------------------------


bool Sterowanie:: klikniecie_kwadrta(Okno & okno, int & nr) {
    
        if(wektorKwadrat[0]->zwroc_klikniecie(okno)) {
            nr = 0;
            return wektorKwadrat[0]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[1]->zwroc_klikniecie(okno)) {
            nr = 1;
            return wektorKwadrat[1]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[2]->zwroc_klikniecie(okno)){
            nr = 2;
        return wektorKwadrat[2]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[3]->zwroc_klikniecie(okno)) {
            nr = 3;
            return wektorKwadrat[3]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[4]->zwroc_klikniecie(okno)) {
            nr = 4;
            return wektorKwadrat[4]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[5]->zwroc_klikniecie(okno)) {
            nr = 5;
            return wektorKwadrat[5]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[6]->zwroc_klikniecie(okno)) {
            nr = 6;
            return wektorKwadrat[6]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[7]->zwroc_klikniecie(okno)) {
            nr = 7;
            return wektorKwadrat[7]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[8]->zwroc_klikniecie(okno)) {
            nr = 8;
            return wektorKwadrat[8]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[9]->zwroc_klikniecie(okno)) {
            nr = 9;
            return wektorKwadrat[9]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[10]->zwroc_klikniecie(okno)) {
            nr = 10;
            return wektorKwadrat[10]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[11]->zwroc_klikniecie(okno)) {
            nr = 11;
            return wektorKwadrat[11]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[12]->zwroc_klikniecie(okno)) {
            nr = 12;
            return wektorKwadrat[12]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[13]->zwroc_klikniecie(okno)) {
            nr = 13;
            return wektorKwadrat[13]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[14]->zwroc_klikniecie(okno)) {
            nr = 14;
            return wektorKwadrat[14]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[15]->zwroc_klikniecie(okno)) {
            nr = 15;
            return wektorKwadrat[15]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[16]->zwroc_klikniecie(okno)) {
            nr = 16;
            return wektorKwadrat[16]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[17]->zwroc_klikniecie(okno)){
            nr = 17;
         return wektorKwadrat[17]->zwroc_klikniecie(okno);
        }
    
        if(wektorKwadrat[18]->zwroc_klikniecie(okno)){
            nr = 18;
         return wektorKwadrat[18]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[19]->zwroc_klikniecie(okno)) {
            nr = 19;
            return wektorKwadrat[19]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[20]->zwroc_klikniecie(okno)) {
            nr = 20;
            return wektorKwadrat[20]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[21]->zwroc_klikniecie(okno)) {
            nr = 21;
            return wektorKwadrat[21]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[22]->zwroc_klikniecie(okno)){
            nr = 22;
        return wektorKwadrat[22]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[23]->zwroc_klikniecie(okno)) {
            nr = 23;
            return wektorKwadrat[23]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[24]->zwroc_klikniecie(okno)) {
            nr = 24;
            return wektorKwadrat[24]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[25]->zwroc_klikniecie(okno)) {
            nr = 25;
            return wektorKwadrat[25]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[26]->zwroc_klikniecie(okno)) {
            nr = 26;
            return wektorKwadrat[26]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[27]->zwroc_klikniecie(okno)) {
            nr = 27;
            return wektorKwadrat[27]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[28]->zwroc_klikniecie(okno)) {
            nr = 28;
            return wektorKwadrat[28]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[29]->zwroc_klikniecie(okno)) {
            nr = 29;
            return wektorKwadrat[29]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[30]->zwroc_klikniecie(okno)) {
            nr = 30;
            return wektorKwadrat[30]->zwroc_klikniecie(okno);
        }
        if(wektorKwadrat[31]->zwroc_klikniecie(okno)) {
            nr = 31;
            return wektorKwadrat[31]->zwroc_klikniecie(okno);
        }

}

//----------------------------------------------------------------------------------------------------------

void Sterowanie:: porusz_graczem1(Gracz & gracz, Gracz & gracz2, int & nrP, int & nrK, long int & licznik, Okno & okno)  {
    
    sf :: Vector2f pom1 = gracz.wektor[nrP]->obrazek.getPosition();
    sf :: Vector2f pom2 = wektorKwadrat[nrK]->okwadrat.getPosition();
    
    float x1 = pom1.x;
    float x2 = pom2.x;
    float y1 = pom1.y;
    float y2 = pom2.y;
    
    float roznicaX = x1 - x2;
    float roznicaY = y1 - y2;
    
    if (gracz.wektor[nrP]->damka == false) {
        
        
    // ogranieczenie:
            if ( fabs(roznicaX) < 160  and fabs(roznicaY) < 160 ) {
            
            //aktualizacja:
            gracz.wektor[nrP]->xP = pom2.x;
            gracz.wektor[nrP]->yP = pom2.y;
            wektorKwadrat[nrK]->xK = pom1.x;
            wektorKwadrat[nrK]->yK = pom1.y;
            
            //zmiana pozycji:
            gracz.wektor[nrP]->obrazek.setPosition(pom2);
            wektorKwadrat[nrK]->okwadrat.setPosition(pom1);
            
           
            wyswietl_pionki(gracz, gracz2, okno);
            wyswietl_kwadraty(okno);
            }
    
            else {
                licznik--;
            }
    }
    
    
    
    if (gracz.wektor[nrP]->damka == true) {
        
            if ( fabs(roznicaX) > 160  and fabs(roznicaY) > 160 ) {
                
                gracz.wektor[nrP]->xP = pom2.x;
                gracz.wektor[nrP]->yP = pom2.y;
                wektorKwadrat[nrK]->xK = pom1.x;
                wektorKwadrat[nrK]->yK = pom1.y;
                
                //zmiana pozycji:
                gracz.wektor[nrP]->obrazek.setPosition(pom2);
                wektorKwadrat[nrK]->okwadrat.setPosition(pom1);
                
                
                wyswietl_pionki(gracz, gracz2, okno);
                wyswietl_kwadraty(okno);
                
            }
        
            else {
                licznik--;
            }
        
    }
}


//----------------------------------------------------------------------------------------------------------


void Sterowanie:: zbicie_pionka(Gracz & g1, Gracz & g2, int &nrP1, int & nrP2, int &nrK, int & licznik,long int & licz, Okno & okno) {
    
    
        sf :: Vector2f pom1 = g1.wektor[nrP1]->obrazek.getPosition();
        sf :: Vector2f pom2 = g2.wektor[nrP2]->obrazek.getPosition();
        sf :: Vector2f pom3 = wektorKwadrat[nrK]->okwadrat.getPosition();
    
        float x1 = pom1.x;
        float x2 = pom2.x;
        float y1 = pom1.y;
        float y2 = pom2.y;
        float x3 = pom3.x;
        float y3 = pom3.y;
    
        float roznicaX = x1 - x3;
        float roznicaY = y1 - y3;
    float roznicaX2 = x1 - x2;
    float roznicaY2 = y1 - y2;
    
    if (g1.wektor[nrP1]->damka == false ) {
        
                    if ( fabs(roznicaX2) < 160  and fabs(roznicaY2) < 160 ) {
                        
                    //aktualizacja:
                    g1.wektor[nrP1]->xP = pom2.x;
                    g1.wektor[nrP1]->yP = pom2.y;
                    wektorKwadrat[nrK]->xK = pom1.x;
                    wektorKwadrat[nrK]->yK = pom1.y;
                    

                    //zmiana pozycji:
                    g2.wektor[nrP2]->obrazek.setPosition(-100, -100);
                    g1.wektor[nrP1]->obrazek.setPosition(pom3);
                    wektorKwadrat[nrK]->okwadrat.setPosition(pom1);
                    

                    //ustawianie kwadratu nowego
                    wektorKwadrat[8+licznik]->okwadrat.setPosition(pom2);
                    wektorKwadrat[8+licznik]->rysuj_czarne(okno);
                    
                 
                    //usuniecie obrazka
                    g2.wektor.erase(g2.wektor.begin()+nrP2);
                   

                    wyswietl_pionki(g1, g2, okno);
                    wyswietl_kwadraty(okno);
                        
                     }
        
                            else {
                                licz--;
                            }
    }
    
    if (g1.wektor[nrP1]->damka == true) {
        
                    if ( fabs(roznicaX2) >= 150  and fabs(roznicaY2) >=150 and fabs(roznicaX) >= 150  and fabs(roznicaY) >= 150  ) {
                    
                        g1.wektor[nrP1]->xP = pom2.x;
                        g1.wektor[nrP1]->yP = pom2.y;
                        wektorKwadrat[nrK]->xK = pom1.x;
                        wektorKwadrat[nrK]->yK = pom1.y;
                        
                        
                        
                        //zmiana pozycji:
                        g2.wektor[nrP2]->obrazek.setPosition(-100, -100);
                        g1.wektor[nrP1]->obrazek.setPosition(pom3);
                        wektorKwadrat[nrK]->okwadrat.setPosition(pom1);
                        
                        
                        //ustawianie i wyswietlenie kwadratu nowego
                        wektorKwadrat[8+licznik]->okwadrat.setPosition(pom2);
                        wektorKwadrat[8+licznik]->rysuj_czarne(okno);
                        
                        
                        //usuniecie obrazka
                        g2.wektor.erase(g2.wektor.begin()+nrP2);
                        
                        
                        wyswietl_pionki(g1, g2, okno);
                        wyswietl_kwadraty(okno);
                    
                    }
        
                    else {
                        licz--;
                    }

    }
}


void Sterowanie:: ustaw_damke1(Gracz & gracz, int & nr) {
    
        if (gracz.wektor[nr]->yP < 160){
            gracz.wektor[nr]->damka = true;
            gracz.wektor[nr]->zaladuj_pionek("Pionek1Damka.png");
        }
}



void Sterowanie:: ustaw_damke2(Gracz & gracz, int & nr) {
    
        if (gracz.wektor[nr]->yP >= 1050){
            gracz.wektor[nr]->damka = true;
             gracz.wektor[nr]->zaladuj_pionek("Pionek2Damka.png");
        }
}

 
