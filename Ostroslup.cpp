

class Ostroslup : public Bryla
{
private:
    double h;

public:
    double Objetosc()
    {
        double Pp = a * a;
        return Pp * h / 3;
    }

    double PCalkowite()
    {
        double half_d, triangle_arm, triangle_h;
        double Pp = a * a;

        half_d = a * sqrt(2) / 2;
        triangle_arm = sqrt(half_d * half_d + h * h);
        triangle_h = sqrt(triangle_arm * triangle_arm - (a / 2) * (a / 2));
        double Pb = a * triangle_h / 2;

        return Pp + 4 * Pb;
    }
    Ostroslup(double a1, double h_duze) : Bryla(a1)
    {
        h = h_duze;
    }
};