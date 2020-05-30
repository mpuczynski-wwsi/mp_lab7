#include <stdio.h>
#include <iostream>
#include <iomanip>
#include "Endomondo.cpp"

using namespace std;

/**

Utwórz program realizujący funkcje wyznaczania teoretycznego czasu przebycia wyznaczonej trasy wiedząc, 
że sposób pokonywania trasy ma wpływ na prędkość poruszania (c (chód) - 4 km/h, r (rower) - 9 km/h, s (samochód) - 65 km/h)
W ramach realizacji zadania utwórz klasę a w niej:
     * pole S (długość tracy)
     * pole t (czas przebycia trasy)
     * pole r (forma przebycia trasy (c,r,s))
     * odpowiednie metody dostępowe do pól klasy
     * konstruktor jednoargumentowy, którego argumentem jest długość pokonywanej trasy, zaś sposób jej pokonywania ustalony jest na c -chód
     * konstruktor dwyargumentowy, którego argumentem jest długość pokonywanej trasy oraz sposób jej pokonywania
     * metoda wyliczająca czas pokonania trasy

Uwaga: dla ułatwienia przyjmujemy, że tracę pokonujemy ze stałą prędkością określoną przez wybrany sposób pokonywania trasy

 t = v / s
*/

void menu();

int main(int argc, char const *argv[])
{
  menu();
  return 0;
}


void menu(){
  char wybor, r;
  double s;


  do {
    cout <<  endl;
    cout << "MENU: " << endl;
    cout << "Program realizujący funkcje wyznaczania teoretycznego czasu przebycia wyznaczonej trasy okreslonym ponizej pojazdem:" << endl;
    cout << "(c) chod" << endl;
    cout << "(r) rower" << endl;
    cout << "(s) samochod" << endl;
    cout << "(q) Wyjdz" << endl;
    cout <<  endl;
    cin >> wybor;



    if (wybor == 'c'){
        cout << "wprowadz wartosc drogi (s) w km: " << endl;
        cin >> s;
        Endomondo *e =  new Endomondo(s);
        cout << setprecision(2) << "Uzytkownik przebyl droge s = " << s << " w czasie t = " << e->licz() << " h idac pieszo." << endl;
        delete e;
    } else if (wybor == 'r'){
        cout << "wprowadz wartosc drogi (s) w km: " << endl;
        cin >> s;
        r = 'r';
        Endomondo *e =  new Endomondo(s, r);
        cout << setprecision(2)  << "Uzytkownik przebyl droge s = " << s << " w czasie t = " << e->licz() << " h jadac rowerem." << endl;
        delete e;
    } else if (wybor == 's'){
        cout << "wprowadz wartosc drogi (s) w km: " << endl;
        cin >> s;
        r = 's';
        Endomondo *e =  new Endomondo(s, r);
        cout << setprecision(2)  << "Uzytkownik przebyl droge s = " << s << " w czasie t = " << e->licz() << " h jadac samochodem." << endl;
        delete e;
    } 
  } while (wybor != 'q');
}