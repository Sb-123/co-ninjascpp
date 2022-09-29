#include <bits/stdc++.h>
using namespace std;

template <typename T, typename V>

class Pair
{
private:
    T x;
    V y;

public:
    void setX(T x)
    {
        this->x = x;
    }
    T getX()
    {
        return x;
    }
    void setY(V y)
    {
        this->y = y;
    }
    V getY()
    {
        return y;
    }
};

int main()
{

    Pair<Pair<int, double>, char> p2;
    p2.setY('a');
    Pair<int, double> p4;
    p4.setX(10);
    p4.setY(28.25);

    p2.setX(p4);

    cout << p2.getY() << " " << p2.getX().getX() << " " << p2.getX().getY() << endl;

    /*
      Pair<Pair<int, int>, int> p2;
      p2.setY(10);
      Pair<int, int> p4;
      p4.setX(15);
      p4.setY(16);
      p2.setX(p4);

      cout << p2.getY() << " " << p2.getX().getX() << " " << p2.getX().getY() << endl;
     */

    /*
      Pair<int, double> p1;
      p1.setX(10.21);
      p1.setY(100.42);
      cout << p1.getX() << " " << p1.getY() << endl;
     */

    /*  Pair<int> p1;
      p1.setX(10);
      p1.setY(20);
      cout << p1.getX() << " " << p1.getY() << endl;

      Pair<double> p2;
      p2.setX(100.23);
      p2.setY(34.78);
      cout << p2.getX() << " " << p2.getY() << endl;

     */
}