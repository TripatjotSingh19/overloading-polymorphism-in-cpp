/* Tripajot singh
PRN 24070123044
ENTC A2 */

// function overloading
#include<iostream>
using namespace std;

class Cars
{
    public:
    Car1(string Brand, string model)
    {
        cout<<Brand<<endl<<model;
    }

    Car2(int price)
    {
        cout<<endl<<price;
    }
}; // end of class

int main()
{
    Cars c;
    c.Car1("VW", "Virtus");
    c.Car2(1500000);

}

/* output for this code

VW
Virtus
1500000

*/
