#include <iostream>
using namespace std;
void test(int f[])
{
    cout << &f[0];
}
int main()
{
    int f[100];
    cout << &f[0] << " " << &f << endl;;
    test(f);
    return 0;
}
// dia chi cua bien mang chinh la dia chi cua phan tu dau tien trong mang, ham duoc truyen theo co che pass by reference 
