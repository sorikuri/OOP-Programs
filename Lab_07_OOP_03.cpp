#include <iostream>
using namespace std;
// first class 
class Processor 
{
    string Manufacturer ;
    float Speed ;

    public :
    Processor (string manufactorer, float speed)
    {
        Manufacturer = manufactorer ;
        Speed = speed ;
    }
    void getProcessorinfo ()
    {
        cout << "Manufactorer : " << Manufacturer << endl ;
        cout << "Speed : " << Speed << endl ;
    }
};
// second class 
class Memory 
{
    int Capacity ;
    string Type ;

    public :
    Memory (int capacity, string type)
    {
        Capacity = capacity ;
        Type = type ;
    }
    void getMemoryInfo ()
    {
        cout << "Capacity of Primary Memory : " << Capacity << endl ;
        cout << "Type : " << Type << endl ;
    }
};
// third class
class Storage 
{
    int SecondryStorageCapacity ;
    string StorageType ;
    public :
    Storage (int sceondaryCapacity, string storageType) 
    {
        SecondryStorageCapacity = sceondaryCapacity ;
        StorageType = storageType ;
    }
    void getStorageInfo ()
    {
        cout << "Capacity of Secondary Memory : " << SecondryStorageCapacity << endl ;
        cout << "Type of Secondary Storage : " << StorageType << endl ;
    }
};
// fourth class
class Computer 
{
    Processor processor ;
    Memory memory ;
    Storage storage ;

    public :
    Computer (string m, float s, int c, string t, int sc, string st): processor (m,s), memory (c,t), storage (sc,st) {}

    void displaySpecification ()
    {
        processor.getProcessorinfo ();
        memory.getMemoryInfo ();
        storage.getStorageInfo();
    }
};
int main () 
{
    Computer c1 ("Nvidia", 49990.78, 256, "RAM", 120, "ROM" );
    c1.displaySpecification ();
return 0;
}