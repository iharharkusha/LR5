#include <iostream>
#include <cmath>
#include "../StaticLib/task1.h"

int main() {
    setlocale(LC_ALL, "Russian");
    std::cout << "������� 1. ������� 1. ��������� ��������� ��� ���������� ������������ ���������� ������������ ��������(��������)\n";
    std::cout << "�������� ������� ����� ������������, ������ 453502\n\n";

    while (true) {
        std::cout << "������� 1 ��� ������� ���������, 0 ��� ����������:\n";
        int type = readIntegerInLine();
        if (type != 1 && type != 0) {
            std::cout << "������������ ����\n";
            continue;
        }
        if (type == 0) {
            break;
        }

        // �������� ��������
        solveProblem();
    }

    return 0;
}
