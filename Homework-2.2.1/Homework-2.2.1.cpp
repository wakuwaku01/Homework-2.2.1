#include <iostream>
#include <Windows.h>

enum class months {
    ������ = 1,
    �������,
    ����,
    ������,
    ���,
    ����,
    ����,
    ������,
    ��������,
    �������,
    ������,
    �������
};

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    int my_month = 0;

    do {
        std::cout << "������� ����� ������: ";
        std::cin >> my_month;
        switch (static_cast<months>(my_month)) {
        case months::������:
            std::cout << "������" << std::endl;
            break;
        case months::�������:
            std::cout << "�������" << std::endl;
            break;
        case months::����:
            std::cout << "����" << std::endl;
            break;
        case months::������:
            std::cout << "������" << std::endl;
            break;
        case months::���:
            std::cout << "���" << std::endl;
            break;
        case months::����:
            std::cout << "����" << std::endl;
            break;
        case months::����:
            std::cout << "����" << std::endl;
            break;
        case months::������:
            std::cout << "������" << std::endl;
            break;
        case months::��������:
            std::cout << "��������" << std::endl;
            break;
        case months::�������:
            std::cout << "�������" << std::endl;
            break;
        case months::������:
            std::cout << "������" << std::endl;
            break;
        case months::�������:
            std::cout << "�������" << std::endl;
            break;
        case 0:
            std::cout << "�� ��������!" << std::endl;
        default:
            if (my_month > 12 || my_month < 0)
                std::cout << "������������ �����." << std::endl;
        }
    } while (my_month != 0);
}