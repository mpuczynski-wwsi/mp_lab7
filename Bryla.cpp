class Bryla {
    public: 
        virtual double Objetosc()=0;
        virtual double PCalkowite()=0;
    protected:
        double a;
        Bryla(double a1){
            a = a1;
        }
};