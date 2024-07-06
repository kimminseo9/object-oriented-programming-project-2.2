#include "director.h"

// ���� ������ ��� ����
Vacation* Director::vacation = 0;
// Ŭ���̾�Ʈ�� ȣ���� ���� ��� �Լ� ����
void Director::book(int packageType)
{
    if (packageType == 1)
    {
        vacation = new Package1();
    }
    else if (packageType == 2)
    {
        vacation = new Package2();
    }
    else if (packageType == 3)
    {
        vacation = new Package3();
    }
    else if (packageType < 1 || packageType>3) { //1, 2, 3�� ������ Ÿ���� �Է����� ��츦 ����� �ۼ��Ͽ���.
        cout << "�߸��� Ÿ�� �����Դϴ�." << endl;
        return;
    }
    cout << "���� ��ȹ�� ���� ����: " << endl;
    vacation->bookHotels();
    vacation->bookFlights();
    vacation->bookTours();
    delete vacation;
    cout << endl;
}
