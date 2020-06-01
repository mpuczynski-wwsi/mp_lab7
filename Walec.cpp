class Walec : public Bryla
{
    private:
        double r, h;
public:
    double Objetosc(){
        double Pp = M_PI * r * r;
        return Pp * h;
    }

    double PCalkowite(){
        double Pp = M_PI * r * r;
        double Pb = 2 * M_PI * r * h;
        return 2 * Pp + Pb;
    }

    Walec(double r_podstawy, double h_duze): Bryla(r_podstawy){
        r = r_podstawy;
        h = h_duze;
    }

};