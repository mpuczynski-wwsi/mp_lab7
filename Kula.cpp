
class Kula : public Bryla
{
private:
    double r;

public:
    double Objetosc()
    {
        return (4 * M_PI * (r * r * r)) / 3;
    }

    double PCalkowite()
    {
        return 4 * M_PI * (r * r);
    }

    Kula(double r_duze) : Bryla(r_duze)
    {
        r = r_duze;
    }
};