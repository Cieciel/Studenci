#include "funkcje.hpp"

int main()
{
    vector<vector<Studenci>> grupa;
    Studenci student;
    int wyjscie = 0;
    zapisz(grupa);
    // Zapisuje wartoúci z pliku
    //Okno wyboru operacji
    while (wyjscie == 0) {
        int wybor;
        cout << "--------------------------" << endl;
        cout << "Mozliwe akcje: " << endl;
        cout << "1. Wypisac studentow" << endl;
        cout << "2. Operacje na przynaleznosci do grup" << endl;
        cout << "3. Operacje na grupach" << endl;
        cout << "4. Operacje na ocenach" << endl;
        cout << "5. Raporty" << endl;
        cout << "6. Podsumowanie roku" << endl;
        cout << "7. Zakoncz program" << endl;
        cout << "--------------------------" << endl;
        cout << "Jaka akcje chcesz wykonac?: " << endl;
        cin >> wybor;
        // Wybůr operacji

        switch (wybor) {
            // Wyúwietlanie studentůw
        case 1: {
            int numerGrupy;
            cout << "Podaj numer grupy: ";
            cin >> numerGrupy;
            wypiszStudGrupy(grupa, numerGrupy);
            break; }
              // Operacje na przynaleŅnoúci do gr
              case 2:{
                  zmianagr(grupa);
              break;}

              //Operacje na grupach
        case 3: {
            usunieciegr(grupa);
            break; }
              /*
                  // Operacje na ocenach
                  case 4:{
                      zmianaoc(vec);
                  break;}

                  // Raporty
                  case 5:{
                      int raport;
                      int kontrola=0;
                      while (kontrola == 0) {
                      cout<<"---------------------------------------------------------------------------"<<endl;
                      cout<<"MoŅliwe raporty: "<<endl;
                      cout<<"1. Na temat grup (Liczba studentůw, úrednia ocen, najwyŅsze wyniki)"<<endl;
                      cout<<"2. Na temat studenta (Grupa, oceny z przedmiotůw, na tle grupy)"<<endl;
                      cout<<"3. Na temat przedmiotůw (Ćrednia, minimalna i maksymalna ocena, úrednia grup)"<<endl;
                      cout<<"---------------------------------------------------------------------------"<<endl;
                      cout<<"Jaki raport chcesz wykonaś?"<<endl;
                      cin>> raport;
                      switch(raport){
                          // Raport o grupach
                          case 1:{
                          cout<<"Raport na temat grup"<<endl;
                          kontrola++;
                          break;}

                          // Raport o studentach
                          case 2:{
                          cout<<"Raport na temat studenta"<<endl;
                          kontrola++;
                          break;}

                          // Raport o przedmiotach
                          case 3:{
                          cout<<"Raport na temat przedmiotu"<<endl;
                          kontrola++;
                          break;}

                          // Zabezpieczenie
                          default:{
                          cout <<"Wybierz cyfrÍ od 1 - 3"<< endl;
                          cout<<endl;
                          break;}}}
                  break;}*/

                  // ZakoŮczenie roku
        case 6: {
            cout << "Zakonczenie roku" << endl;
            break; }

              // Koniec programu
        case 7: {
            cout << "Koniec Programu!" << endl;
            wyjscie += 1;
            break; }

              // Zabezpieczenie
        default: {
            cout << "Wybierz cyfre od 1 - 7" << endl;
            cout << endl;
            break; }

        }
    }
    return 0;
}