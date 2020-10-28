#include<iostream>

using namespace std;
float x1, t1, x2, x3, t3;
void interpolate(float x1, float t1, float x2, float x3, float t3){
    cout << ((x2-x1)*(t3-t1))/(x3-x1) + t1;
}
int main()
{
cout << "| x1 | t1 |" << endl;
cout << "| x2 | t2 |" << endl;
cout << "| x3 | t3 |" << endl;
cout << "" << endl;
cout << "solving for t2"  << endl;
cout << " x1: "; cin >> x1;
cout << " t1: "; cin >> t1;
cout << " x2: "; cin >> x2;
cout << " x3: "; cin >> x3;
cout << " t3: "; cin >> t3;
 
interpolate(x1, t1, x2, x3, t3);

return 0;
}