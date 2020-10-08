#include <iostream>
using namespace std;
int main()
{
    double m, n, fraction, bigger, smaller;
    cout << "Input M value...\n";
    cin >> m;
    cout << "Input N value...\n";
    cin >> n;
    fraction = m / n;
    for (int i = 0; i < 50; i++) { cout << "-";}
    cout << "\n The fraction is ";
    cout << fraction; cout << "\n";
    for (int i = 0; i < 50; i++){cout << "-";}
    smaller = floor((fraction - ((int)fraction)) * 10);
    bigger = int(fraction)%10;
    if (fraction == int(fraction)){
        cout << "\nThe younger figure of the whole part is "; cout << bigger; cout << ".\n";
        cout << "We cannot define the older part of the fractional part, because a fraction is an integer.\n";
    }
    else{
        cout << "\nThe younger figure of the whole part is "; cout << bigger; cout << ".\n";
        cout << "The older part of the fractional part is "; cout << smaller; cout << ".\n";
    }
    system("pause");
}