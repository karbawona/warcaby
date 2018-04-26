

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include "ResourcePath.hpp"

#include "Glowna_gra.hpp"
#include "Okno.hpp"
#include "Menu.hpp"
#include "Zasady.hpp"
#include "Pionek.hpp"
#include "Gracz.hpp"
#include "Sterowanie.hpp"
#include "WyjatekPoli.hpp"
#include "WyjatekPlik.hpp"
#include "WyjatekOtwierania.hpp"



void funkcje_menu(Menu &menuGry, Okno &okno){
    okno.sprawdzaj_zamkniecie();
    okno.wyczysc_okno();
    menuGry.rysuj_plansze(okno);
    menuGry.rysuj_obrazki(okno);
    okno.wyswietl_plansze();
    
}

void funkcje_zasad(Zasady &zasady, Okno &okno) {

    okno.sprawdzaj_zamkniecie();
    okno.wyczysc_okno();
    zasady.rysuj_plansze(okno);
    zasady.rysuj_obrazek(okno);
    okno.wyswietl_plansze();
}




int main()
{
    
     Glowna_gra gra;
    
    Okno okno;
    okno.utworz_okno();
    
    Menu menuGry;
    menuGry.zaladuj_plansze();
    menuGry.zaladuj_obrazki();
    menuGry.zaladuj_wygrana2();
    menuGry.zaladuj_wygrana1();
    
    bool zaczetaGra = false;        //true-zaczeta
    bool zaczeteZasady = false;
    bool zaczeteMenu = true;
    bool zaczetaHistoria = false;
    
    while(okno.petlaGry) {
        
        if (zaczeteMenu == true) {
            
 
            if (menuGry.wygrana == false) {
                
                funkcje_menu(menuGry, okno);
                
                    if (sf :: Mouse :: isButtonPressed(sf :: Mouse :: Left) and menuGry.klikniecie_zagraj(okno) ) {
                        zaczetaGra = true;
                    }
                
                     if (sf :: Mouse :: isButtonPressed(sf :: Mouse :: Left) and menuGry.klikniecie_historia(okno) ) {
                         zaczetaHistoria = true;
                         
                    }
                
                     if (sf :: Mouse :: isButtonPressed(sf :: Mouse :: Left) and  menuGry.klikniecie_zasady(okno) ) {
                        zaczeteZasady = true;
                    }
            }
        
            if (menuGry.wygrana == true and menuGry.ktory == 2 ) {

                for (int i =0; i<1500; i++){
                    okno.sprawdzaj_zamkniecie();
                    okno.wyczysc_okno();
                    menuGry.rysuj_wygrana2(okno);
                    okno.wyswietl_plansze();
                }
                    menuGry.wygrana = false;
                
            }
        
            
            if (menuGry.wygrana == true and menuGry.ktory == 1) {
                for (int i =0; i<1500; i++){
                    okno.sprawdzaj_zamkniecie();
                    okno.wyczysc_okno();
                    menuGry.rysuj_wygrana1(okno);
                    okno.wyswietl_plansze();
                }
                         menuGry.wygrana = false;
            }
            

            if (zaczetaHistoria == true) {
                
                zaczeteMenu = false;
                
                try{
                  
                    gra.odczytaj_z_pliku();
                    
                } catch(WyjatekPoli& pom)
                {
                    pom.wyswietl_blad();
                    return;
                   
                }
                
                zaczetaHistoria = false;
                zaczeteMenu = true;
                
                
            }
//*************************************************************************************************************************
        
       if (zaczetaGra == true) {
           
           zaczeteMenu = false;
           
           
           
           
//           bool wygrana = false;  // true jak ktos wygra, ustawia sie na koncu wygrana na true i sprawdzic w petli ten bool, jesli true to break;
           
            gra.zaladuj_plansze();
            gra.zaladuj_obrazki();
            gra.zaladuj_omenu();

               //stworzenie graczy:
            Gracz g1(1, "p1.png");
            Gracz g2(2, "p2.png");

           Pionek czerwony(100);
           Pionek niebieski(100);
           
           czerwony.zaladuj_pionek("p2.png");
           niebieski.zaladuj_pionek("p1.png");
           czerwony.ustaw_pozycje(1500, 1000);
           niebieski.ustaw_pozycje(1500, 1000);
           
           // rozpoczęcie sterowania grą
        Sterowanie ster;
           int nrPionka1 = 0;
           int nrPionka2 = 0;
           int nrPionka11 = 0;
           int nrPionka22 = 0;
           int nrKwadratu = 0;
           int nrKwadratu2 = 0;
           long int ktoTeraz = 3;
           int licznikKwadratow1 = 1;

           
           bool kliknietyPionek1 = false;
           bool kliknietyPionek12 = false;

           bool kliknietyPionek2 = false;
           bool kliknietyPionek21 = false;

           bool kliknietyKwadrat = false;
           bool kliknietyKwadrat2 = false;
           
           bool kliknietyZbity1 = false;
           bool kliknietyZbity2 = false;
           bool kliknietyZKwadrat1 = false;
           bool kliknietyZKwadrat2 = false;


            ster.wypelnij_wektorKwadrat();
            ster.ustaw_pionki_poczatkowe(g1,g2);
            ster.ustaw_kwadraty();
         
           
    while (zaczetaGra == true) {
        
        
              okno.sprawdzaj_zamkniecie();
              okno.wyczysc_okno();
              gra.rysuj_plansze(okno);
              gra.rysuj_omenu(okno);
        if (ktoTeraz % 2 != 0 )  niebieski.rysuj_pionek(okno);
        if (ktoTeraz % 2 == 0 ) czerwony.rysuj_pionek(okno);
              ster.wyswietl_pionki(g1, g2, okno);
              ster.wyswietl_kwadraty(okno);
              okno.wyswietl_plansze();
        

        if (ktoTeraz % 2 != 0 ) {
            
      
            if (sf :: Mouse :: isButtonPressed(sf :: Mouse :: Left) and ster.klikniecie_pionka(okno, g1, nrPionka1) ) {
                kliknietyPionek1 = true;
            }

            
            if (sf :: Mouse :: isButtonPressed(sf :: Mouse :: Left) and ster.klikniecie_kwadrta(okno, nrKwadratu)
                and kliknietyPionek1 == true ) {
                kliknietyKwadrat = true;
            }
            
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

            if (sf :: Mouse :: isButtonPressed(sf :: Mouse :: Left) and ster.klikniecie_pionka(okno, g2, nrPionka2)
                and kliknietyPionek1 == true ) {
                kliknietyZbity1 = true;
            }
            
            if (sf :: Mouse :: isButtonPressed(sf :: Mouse :: Left) and ster.klikniecie_kwadrta(okno, nrKwadratu)
                and kliknietyPionek1 == true and kliknietyZbity1 == true ) {
                
                kliknietyZKwadrat1 = true;
            }
            
            
            
            if (kliknietyPionek1 == true and kliknietyZbity1 == true and kliknietyZKwadrat1 == true) {
                
                
                ster.zbicie_pionka(g1, g2, nrPionka1, nrPionka2, nrKwadratu, licznikKwadratow1, ktoTeraz, okno);
                ster.ustaw_damke1(g1, nrPionka1);
                
                
                kliknietyZKwadrat1 = false;
                kliknietyZbity1 = false;
                kliknietyPionek1 = false;
                kliknietyKwadrat = false;
                ktoTeraz++;
                licznikKwadratow1++;
            }
            
             //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
            
            if ( (kliknietyPionek1 == true) and (kliknietyKwadrat == true) ) {
                
                ster.porusz_graczem1(g1, g2, nrPionka1, nrKwadratu, ktoTeraz, okno);
                ster.ustaw_damke1(g1, nrPionka1);
                
                kliknietyZKwadrat1 = false;
                kliknietyZbity1 = false;
                kliknietyPionek1 = false;
                kliknietyKwadrat = false;
              
                ktoTeraz++;
            }
            
            
        } //if do gracza 1
        
        
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
        
        if (ktoTeraz % 2 == 0) {
            
      
            if (sf :: Mouse :: isButtonPressed(sf :: Mouse :: Left) and ster.klikniecie_pionka(okno, g2, nrPionka22) ) {
                kliknietyPionek2 = true;
            }
            
            if (sf :: Mouse :: isButtonPressed(sf :: Mouse :: Left) and ster.klikniecie_kwadrta(okno, nrKwadratu2)
                and kliknietyPionek2 == true ) {
                kliknietyKwadrat2 = true;
            }
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
           
            
            if (sf :: Mouse :: isButtonPressed(sf :: Mouse :: Left) and ster.klikniecie_pionka(okno, g1, nrPionka11)
                and kliknietyPionek2 == true) {
                kliknietyZbity2 = true;
            }
            
            if (sf :: Mouse :: isButtonPressed(sf :: Mouse :: Left) and ster.klikniecie_kwadrta(okno, nrKwadratu2)
                and kliknietyPionek2 == true and kliknietyZbity2 == true ) {
                
                kliknietyZKwadrat2 = true;
            }
            
            if (kliknietyPionek2 == true and kliknietyZbity2 == true and kliknietyZKwadrat2 == true) {
                
                ster.zbicie_pionka(g2, g1, nrPionka22, nrPionka11,  nrKwadratu2, licznikKwadratow1, ktoTeraz, okno);
                ster.ustaw_damke2(g2, nrPionka2);
                
                kliknietyZKwadrat2 = false;
                kliknietyZbity2 = false;
                kliknietyPionek2 = false;
                kliknietyKwadrat2 = false;
                ktoTeraz++;
                licznikKwadratow1++;
            }

            
            if ( (kliknietyPionek2 == true) and (kliknietyKwadrat2 == true) ) {
                
                ster.porusz_graczem1(g2, g1, nrPionka22, nrKwadratu2, ktoTeraz, okno);
                ster.ustaw_damke2(g2, nrPionka2);
                
                kliknietyZKwadrat2 = false;
                kliknietyZbity2 = false;
                kliknietyPionek2 = false;
                kliknietyKwadrat2 = false;

               ktoTeraz++;
                
            }
           
        } //if do gracza 2
        
     
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -- - - - - - - - - - - - - - - - - - - -- - - - - - - -
        // WYGRANA
        
        if (g1.wektor.size() == 0) {
            
            std :: string komunikat = "wygrana 2 gracza";
            
            try{
                
             gra.zapisz_do_pliku(komunikat, ktoTeraz);
                
            } catch(WyjatekPoli& pom)
            {
                pom.wyswietl_blad();
                return;
                
            }
         
            menuGry.wygrana = true;
            menuGry.ktory = 2;
            zaczetaGra = false;
            zaczeteMenu = true;

          break;
            
        }
        
        if (g2.wektor.size() == 0) {

             std :: string komunikat = "wygrana 1 gracza";
            
            try{
                
                gra.zapisz_do_pliku(komunikat, ktoTeraz);
                
            } catch(WyjatekPoli& pom)
            {
                pom.wyswietl_blad();
                return;
                
            }
            
            menuGry.wygrana = true;
            menuGry.ktory = 1;
            zaczetaGra = false;
            zaczeteMenu = true;

            break;
            
        }



              //wyjście z gry:
              if (sf :: Mouse :: isButtonPressed(sf :: Mouse :: Left) and gra.klikniecie_menu(okno) ) {
                  
                  
                   nrPionka1 = 0;
                   nrPionka2 = 0;
                   nrPionka11 = 0;
                   nrPionka22 = 0;
                   nrKwadratu = 0;
                   nrKwadratu2 = 0;
                   ktoTeraz = 3;
                   licznikKwadratow1 = 1;
                  
                  
                   kliknietyPionek1 = false;
                   kliknietyPionek12 = false;
                  
                   kliknietyPionek2 = false;
                   kliknietyPionek21 = false;
                  
                   kliknietyKwadrat = false;
                   kliknietyKwadrat2 = false;
                  
                   kliknietyZbity1 = false;
                   kliknietyZbity2 = false;
                   kliknietyZKwadrat1 = false;
                   kliknietyZKwadrat2 = false;
                  
                    zaczetaGra = false;
                    zaczeteMenu = true;

                  break;
              }
           
           }
       }
            

            
//*************************************************************************************************************************
           
        if (zaczeteZasady == true) {

            zaczeteMenu = false;
                Zasady zasady;
        zasady.zaladuj_plansze();
        zasady.zaladuj_obrazek();
            
            while (zaczeteZasady == true) {
               funkcje_zasad(zasady,okno);
                
                if (sf :: Mouse :: isButtonPressed(sf :: Mouse :: Left) and zasady.klikniecie_menu(okno) ) {
                    zaczeteZasady = false;
                    zaczeteMenu = true;
                    break;
                }
                
            }
        }
      }
    }
     delete okno.oknoAplikacji; 
    
    return 0;
}
