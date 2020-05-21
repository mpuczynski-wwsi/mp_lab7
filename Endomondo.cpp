#include <stdio.h>
#include <iostream>

using namespace std;


class Endomondo {
    private:
        double *s;
        double *t;
        char *r;

    public:
        // konstruktor jednoargumentowy, którego argumentem jest długość pokonywanej trasy, zaś sposób jej pokonywania ustalony jest na c -chód
        Endomondo(double s1){
            s = new double(s1);
            r = new char('c');
            t = new double;
        }

        Endomondo(double s1, char r1){
            s = new double(s1);
            r = new char(r1);
            t = new double;
        }

        ~Endomondo(){
            delete s;
            delete t;
            delete r;
        }

        // metoda wyliczająca czas pokonania trasy
        double licz(){
            //if (*s <= 0) { cout << "s musi byc wieksze od 0" << endl;}
            if (*r == 'c'){
                *t = (*s) / 4.;
                return *t;
            } else if (*r == 'r'){
                *t = *s / 9.;
                return *t;
            } else if (*r == 's'){
                *t = *s / 65.;
                return *t;
            } else { 
                // cout << "Bledny tryb" << endl;
                *t = 0;
                return *t;
            }
        }
};