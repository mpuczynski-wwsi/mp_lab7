
class Graniastoslup : public Bryla
{
private:
    double h;

public:
    double Objetosc()
    {
        double Pp = (a * a) * sqrt(3) / 4;

        return Pp * h;
    }

    double PCalkowite()
    {
        double Pp = (a * a) * sqrt(3) / 4;
        double Pb = a * h;
        return 2 * Pp + 3 * Pb;
    }

    Graniastoslup(double a1, double h_duze) : Bryla(a1)
    {
        h = h_duze;
    }
};