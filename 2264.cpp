#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int rows, cols, x, y, cuenta;
    cin >> rows >> cols;
    cin >> x >> y >> cuenta;

    char direccion[cuenta];
    int cantidad[cuenta];
    for (int a = 0; a < cuenta; a++)
    {
        cin >> direccion[a] >> cantidad[a];
    }
    for (int b = cuenta-1; b >= 0; b--)
    {
        if (direccion[b] == 'N' && x + cantidad[b] <= rows)
            x += cantidad[b];
        else if (direccion[b] == 'S'&& x - cantidad[b] >= 1)
            x -= cantidad[b];
        else if (direccion[b] == 'E' && y - cantidad[b] >=1)
            y -= cantidad[b];
        else if (direccion[b] == 'W' && y + cantidad[b] <= cols)
            y += cantidad[b];
    }
    cout << x << " " << y << endl;






    return 0;
}