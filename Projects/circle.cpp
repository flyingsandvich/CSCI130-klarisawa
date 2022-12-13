// Kodama arisawa
//this prgram will calucualte the parimiter of a circle

#include <iostream>
using namespace std;

 const float PI = 3.14;

int main(){
    float radius;
    float radsqrd;



    cout << "enter radius of a circle" << endl;
    cin >> radius;
    cout << "you enterd:" << radius << endl;

    radsqrd = radius * radius;
    
    cout <<"the area of a circle with radius "
    << radius
    << " is "
    << PI * radsqrd << endl;

    cout << "the circumfrence of a circle with radius "
    << " is "
    << PI * 2 * radius << endl;
    return 0;
}