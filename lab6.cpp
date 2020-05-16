#include <stdio.h>
#include <iostream>

using namespace std;

/**


*/

void menu();

int main(int argc, char const *argv[])
{
  menu();
  return 0;
}


void menu(){
  int wybor = 0;
  float temp;
  Celsjusz c;
  Fahrenheit f;
  Kalvin k;

  do {
    cout <<  endl;
    cout << "MENU: " << endl;
    cout << "(1) Kalvin" << endl;
    cout << "(2) Fahrenheit" << endl;
    cout << "(3) Celsjusz" << endl;
    cout << "(0) Wyjdz" << endl;
    cout <<  endl;
    cin >> wybor;

    switch (wybor)
    {
    case 1:
        cout << "Podaj temperature w Kalvinach: ";
        cin >> temp;
        k.setTemp(temp);
        cout << endl;
        k.show();
        cout << endl;

      break;
    case 2:
        cout << "Podaj temperature w Fahrenheitach: ";
        cin >> temp;
        cout << endl;
        f.setTemp(temp);
        f.show();
        cout << endl;
      break;
    case 3:
        cout << "Podaj temperature w Celsjuszach: ";
        cin >> temp;
        cout << endl;
        c.setTemp(temp);
        c.show();
        cout << endl;
      break;
    }
  } while (wybor != 0);
}