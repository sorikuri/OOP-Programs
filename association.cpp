#include <iostream>
using namespace std;
class Engine 
{
    private:
    int Horsepower ;

    public:
    Engine (int hp ) : Horsepower (hp) {}

    void start ()
    {
        cout << "Horsepower :" << Horsepower << endl;
    }
};
class Car 
{
    Engine engine ;

    public :
    Car (int hp ) : engine (hp){}

    void startCar ()
    {
        engine.start();
        cout << "The Car has started "  << endl;
    }
};
int main () 
{
    Car c1 (200);
    c1.startCar();
return 0;
}