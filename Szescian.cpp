

class Szescian : public Bryla
{
public:
    double Objetosc(){
        return a * a * a;
    }

    double PCalkowite(){
        return 6* a * a;
    }

    Szescian(double a1): Bryla(a1){}

};