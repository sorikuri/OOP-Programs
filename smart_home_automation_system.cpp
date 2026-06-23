#include <iostream>
using namespace std;
class Smart_Device 
{
    string deviceName ;
    bool isEnabled ;
    public :
    Smart_Device ()
    {
        deviceName = "Unknown";
        isEnabled = false ;
    }
    Smart_Device (string deviceName, bool isEnabled)
    {
        this -> deviceName = deviceName ;
        this -> isEnabled = isEnabled ;
    }
    virtual void performAction () = 0 ;
};
int main () 
{

return 0;
}