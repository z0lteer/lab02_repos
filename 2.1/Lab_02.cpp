// Lab_02.cpp
// < �������� ���� �������� >
// ����������� ������ � 2.
// ˳��� ��������.
// ������ 14


#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double x;

    cout << "x =";
    cin >> x;

    // ���������� z1
    double z1 = (cos(x) + sin(x)) / (cos(x) - sin(x));

    // ���������� z2
    double z2 = tan(2 * x) + 1 / cos(2 * x);

    // ��������� ����������
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    return 0;
}