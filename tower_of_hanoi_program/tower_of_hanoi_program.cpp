


#include <iostream>
using namespace std;
void toh(int, char, char, char);
int main()
{ //a=Start disc
    //b=Auxillary disc
    //c=End Disc
    char a, b, c;
    int x;
    a = 'A'; 
    b = 'B'; 
    c = 'C'; 
    cout << "Enter the number of discs:";
    cin >> x;
    toh(x, a, c, b);
    return 0;
}
void toh(int x, char a, char c, char b)
{
    if (x == 1)
    {
        cout << "Move the disc 1 from " << a << " to " << c << endl; //only disc remaining
        x = x - 1;
    }
    else
    {
        //Moving n-1 poles to auxillary pole
        toh(x - 1, a, b, c); 
        cout << "Move the disc " << x << " from" << a << " to " << c << endl;
        // Move n-1 poles to destination
        toh(x - 1, b, c, a); 
    }
}