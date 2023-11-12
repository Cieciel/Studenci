#include "funkcje.hpp"

void zapisz(vector<vector<Studenci>>& grupa) {
    ifstream file("Studenci.txt");
    Studenci student;
    vector<Studenci> s1;
    if (file.is_open()) {
        grupa.push_back(s1);
        int i = 0;
        while (!file.eof()) {
            while (file >> student.nr >> student.imie >> student.nazwisko >> student.ocena_tuc >> student.ocena_ppk >> student.ocena_asc) {
                if (student.nr == 0) {
                    grupa.push_back(s1);
                    i++;
                }
                else
                    grupa[i].push_back(student);
            }
        }
        file.close();
    }
    else {
        cout << "Nie znaleziono pliku" << endl;
    }
}

void wypiszStudGrupy(vector<vector<Studenci>>& grupa, int gr) {
    int kontrola = 0;
    for (int i = 0; i < grupa.size(); i++) {
        if (i == gr) {
            cout << "Lista studentow w grupie " << gr << ":" << endl;
            for (int j = 0; j < grupa[i].size(); j++) {
                cout << grupa[i][j].nr << " " << grupa[i][j].imie << " " << grupa[i][j].nazwisko << " Oceny: TUC " <<
                    grupa[i][j].ocena_tuc << " ASC " << grupa[i][j].ocena_asc << " PPK " << grupa[i][j].ocena_ppk << endl;
            }
            kontrola++;
            break;
        }
    }
    if (kontrola == 0) {
        cout << "Nie znaleziono grupy o numerze " << gr << endl;
    }
}

void zmianagr(vector<vector<Studenci>>& grupa){
    int wybor, gr;
    int kontrolna = 0;
    cout<<"Jakiemu studentowi chcesz zmienic grupe? (Podaj numer studenta)"<<endl;
    cin >>wybor;
    cout<<"Do jakiej grupy chcesz przydzielic tego Studenta?"<<endl;
    cin >>gr;
    for (int i = 0; i < grupa.size(); i++) {
        for (int j = 0; j < grupa[i].size(); j++) {
            if (grupa[i][j].nr == wybor) {
                grupa[gr].push_back(grupa[i][j]);
                grupa[i].erase(grupa.begin() + i - 1);
                kontrolna++; 
                break;
            }
        }
        if (kontrolna != 0) break;
    }
    if (kontrolna == 0) {
        cout << "Nie znaleziono takiego studenta o takiej grupie: " << gr << endl;
    }
    }

void usunieciegr(vector<vector<Studenci>>& grupa) {
    int gr, kontrola = 0;
    cout << "Jaka grupe chcesz wyrzucic" << endl;
    cin >> gr;
    for (int i = 0; i < grupa.size(); i++) {
        if (gr == i) {
            grupa.erase(grupa.begin() + i - 1);
            kontrola++;
        }
    }
    if (kontrola == 1) {
        cout << "UsuniÍto grupe: " << gr << endl;
    }
    else {
        cout << "Nie znaleziono takiej grupy" << endl;
    }
}
/*

void zmianaoc(vector<Studenci>& vec){
    int wybor, ocena,przedmiot;
    int kontrolna = 0;
    cout<<"Jakiemu studentowi chcesz zmieniś ocenÍ? (Podaj numer studenta)"<<endl;
    cin >>wybor;
    cout<<"--------------------------------"<<endl;
    cout<<"1.Teoria uk≥adůw cyfrowych"<<endl;
    cout<<"2.Podstawy programowania komputerowego"<<endl;
    cout<<"3.Arytmetyka uk≥adůw systemowych"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"Jakiego przedmiotu ocenÍ chcesz zmieniś?"<<endl;
    cin >>przedmiot;
    cout<<"JakiĻ ocenÍ chcesz wstawiś"<<endl;
    cin >>ocena;
    for(Studenci& student : vec){
        if(wybor == student.nr){
            kontrolna++;
            switch(przedmiot){
                // TUC
                case 1:{
                    student.ocena_tuc = ocena;
                break;}
                // PPK
                case 2:{
                    student.ocena_ppk = ocena;
                break;}
                // ASC
                case 3:{
                    student.ocena_asc = ocena;
                break;}
                // Zabezpieczenie
                default:{
                cout <<"Wybierz cyfrÍ od 1 - 3"<< endl;
                cout<<endl;
                break;}}}}
        if (kontrolna == 0){
            cout<<"Nie znaleziono studenta"<<endl;
    }
}*/
