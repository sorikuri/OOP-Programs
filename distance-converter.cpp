#include <iostream>
using namespace std;
class Distance 
{
    private :
    double Meter;
    float KiloMeter;
    float Miles;
    public :
    Distance (float M, float KM, float m)
    {
        Meter = M;
        KiloMeter = KM;
        Miles = m;
    }
    void convertor (float met)
    {
        Meter = met;
        Meter = (Meter / 1000);
        KiloMeter += Meter ;
    }
    void getResulltKM ()
    {
        cout << "KiloMeters : " << KiloMeter << endl;
    }
    float convertor (float km, float meter)
    {
        KiloMeter = km;
        Meter = meter ;
        KiloMeter = (1/KiloMeter);
        Meter += KiloMeter ;
        return Meter;
    }
    void getResulltMet ()
    {
     cout << "Total Meters : " << Meter << endl;   
    }

};
int main () 
{
    Distance d1 (0.0,0.0,0.0);
    d1.convertor (56000);
    d1.getResulltKM ();
    d1.convertor (70, 2300);
    d1.getResulltMet ();

return 0;
}