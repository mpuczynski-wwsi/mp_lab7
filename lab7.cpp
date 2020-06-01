#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include "Bryla.cpp"
#include "Szescian.cpp"
#include "Ostroslup.cpp"
#include "Walec.cpp"
#include "Kula.cpp"
#include "Graniastoslup.cpp"

using namespace std;

/**

Menu
        1. Sześcian
        2. Ostrosłup o podstawie kwadratu
        3. Walec
        4. Kula
        5. Graniastosłup prawidłowy o podstawie trójkąta

W ramach realizacji zadania utwórz:
      * klasę abstrakcyjną "Bryła" zawierająca metody wirtualne "Objetosc" i "PCalkowite"
      * klasy specjalistyczne dziedziczące po klasie "Bryla" zawierające definicje odpowiednich pól jak i implementacje metod odziedziczonych, 
      a także ewentualne inne metody (metody dostępowe do pól, metody wyliczające pole powierzchni boku i podstawy jeżeli ich definicja jest uzasadniona)
*/

void menu();

int main(int argc, char const *argv[])
{
  menu();
  return 0;
}

void menu()
{
  int wybor;
  double a, h;
  Bryla *b;

  do
  {
    cout << endl;
    cout << "MENU: " << endl;
    cout << "Obliczanie pola calkowitego i objetosci nastepujacych figur:" << endl;
    cout << "(1) Szescian" << endl;
    cout << "(2) Ostroslup o podstawie kwadratu" << endl;
    cout << "(3) Walec" << endl;
    cout << "(4) Kula" << endl;
    cout << "(5) Graniastoslup prawidlowy o podstawie trojkata" << endl;
    cout << "(0) Wyjdz" << endl;
    cout << endl;
    cin >> wybor;

    switch (wybor)
    {
    case 1:
      cout << "Podaj dlugosc boku (a): ";
      cin >> a;
      cout << endl;
      b = new Szescian(a);
      cout << "PCalkowite szescianu: " << b->PCalkowite() << "cm2 , objetosc = " << b->Objetosc() << " cm3 " << endl;
      break;
    case 2:
      cout << "Podaj dlugosc boku podstawy (a): ";
      cin >> a;
      cout << endl;
      cout << "Podaj wysokosc ostroslupa (H): ";
      cin >> h;
      cout << endl;
      b = new Ostroslup(a, h);
      cout << "PCalkowite ostroslupa: " << b->PCalkowite() << "cm2 , objetosc = " << b->Objetosc() << " cm3 " << endl;
      break;
    case 3:
      cout << "Podaj dlugosc promienia podstawy (r): ";
      cin >> a;
      cout << endl;
      cout << "Podaj wysokosc walca (H): ";
      cin >> h;
      cout << endl;
      b = new Walec(a, h);
      cout << "PCalkowite walaca: " << b->PCalkowite() << "cm2 , objetosc = " << b->Objetosc() << " cm3 " << endl;
      break;
    case 4:
            cout << "Podaj dlugosc promienia kuli (R): ";
      cin >> a;
      cout << endl;
      b = new Kula(a);
      cout << "PCalkowite kuli: " << b->PCalkowite() << "cm2 , objetosc = " << b->Objetosc() << " cm3 " << endl;
      break;
    case 5:
      cout << "Podaj dlugosc boku podstawy (a): ";
      cin >> a;
      cout << endl;
      cout << "Podaj wysokosc graniastoslupa (H): ";
      cin >> h;
      cout << endl;
      b = new Graniastoslup(a, h);
      cout << "PCalkowite graniastoslupa: " << b->PCalkowite() << "cm2 , objetosc = " << b->Objetosc() << " cm3 " << endl;
      break;
    }
  } while (wybor != 0);
}