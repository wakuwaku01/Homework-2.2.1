#include <iostream>

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
    int my_month = 0;

    do {
        std::cout << "������� ����� ������: ";
        std::cin >> my_month;
        switch (static_cast<int>(my_month)) {
        case 1:
            std::cout << "������" << std::endl;
            break;
        case 2:
            std::cout << "�������" << std::endl;
            break;
        case 3:
            std::cout << "����" << std::endl;
            break;
        case 4:
            std::cout << "������" << std::endl;
            break;
        case 5:
            std::cout << "���" << std::endl;
            break;
        case 6:
            std::cout << "����" << std::endl;
            break;
        case 7:
            std::cout << "����" << std::endl;
            break;
        case 8:
            std::cout << "������" << std::endl;
            break;
        case 9:
            std::cout << "��������" << std::endl;
            break;
        case 10:
            std::cout << "�������" << std::endl;
            break;
        case 11:
            std::cout << "������" << std::endl;
            break;
        case 12:
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