#include <iostream>
using namespace std;
 
int main()
{
    int a = 100;
    cout << "Value of variable a stored at address " << &a << " is " << (*(&a)) << endl;
    return 0;
}
