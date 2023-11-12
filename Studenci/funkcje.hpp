#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

class Studenci {
public:
    int nr;
    string imie;
    string nazwisko;
    int ocena_tuc;
    int ocena_ppk;
    int ocena_asc;
};
void zapisz(vector<vector<Studenci>>& grupa);
void wypiszStudGrupy(vector<vector<Studenci>>& grupa, int numerGrupy);
void usunieciegr(vector<vector<Studenci>>& grupa);
void zmianagr(vector<vector<Studenci>>& grupa);
/*
void wypisz(vector<Studenci>&  vec);
void zmianagr(vector<Studenci>&  vec);
void zmianaoc(vector<Studenci>&  vec);*/#pragma once

