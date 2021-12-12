// HomeWorks.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

const int kConst1{2};
const int kConst2{4};

int main()
{
    int a, b, c, d, x1, x2;   
    cout <<" Please enter numbers: a,b,c in range[2..255]\n";
    cin >>a>>b>>c;
    if ((a | b |c ) < 2 || (a | b | c) > 255) {
        cout << "You entered an incorrect number, try entering the number again";
        return 0;
    }
    cout << "your number:" << a<<b<<c;

    d = b * b - kConst2 * a * c;
   
    if (d > 0) 
    {
        x1 = ((-b) + sqrt(d)) / (kConst1 * a);
        x2 = ((-b) - sqrt(d)) / (kConst1 * a);
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
    }
    if (d == 0) 
    {
        x1 = -(b / (kConst1 * a));
        cout << "x1 = x2 = " << x1 << "\n";
    }
    if (d < 0) 
        cout << "D < 0, There are no real roots of the equation";
     

}

