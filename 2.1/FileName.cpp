// Lab_02.cpp
// < �������, ��� ������ >
// ����������� ������ � 2.
// ˳��� ��������.
// ������ 14
#include <iostream>
#include <cmath>
int main() {
    
    double x;

    
    std::cout << "x =";
    std::cin >> x;

    // ���������� z1
    double z1 = (cos(x) + sin(x)) / (cos(x) - sin(x));

    // ���������� z2
    double z2 = tan(2 * x) + 1 / cos(2 * x);

    // ��������� ����������
    std::cout << "z1 = " << z1 << std::endl;
    std::cout << "z2 = " << z2 << std::endl;

    return 0;
}