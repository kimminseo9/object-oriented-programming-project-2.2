#ifndef DIRECTOR_H
#define DIRECTOR_H
#include <string>
#include <iostream>
#include <cassert>
using namespace std;

class Vacation {
public:
    virtual void bookHotels() = 0; // =0�� �������ν� virtual �Լ��� ���� ������ �����Ͽ���. (ó���� �������� ������ �߻��� �پ��� ����� �õ��غ��� =0�� �������ν� �ذ��� �� �־���.)
    virtual void bookFlights() = 0;
    virtual void bookTours() = 0;
};
// ���� ����� ���� Director Ŭ����
class  Director
{
public:
    static Vacation* vacation;
    static void book(int type); // Ŭ���̾�Ʈ�� �� �Լ��� ȣ�� ����
};

class Package1 :public Vacation {
    void bookHotels() override
    {
        cout << "Hotels are booked." << endl;
    }
    void bookFlights() override
    {
        cout << "Flights are booked." << endl;
    }
    void bookTours() override {}
};

class Package2 :public Vacation {
    void bookHotels() override
    {
        cout << "Hotels are booked." << endl;
    }
    void bookFlights() override {}
    void bookTours() override
    {
        cout << "Tours are booked." << endl;
    }
};

class Package3 :public Vacation {
    void bookHotels() override
    {
        cout << "Hotels are booked." << endl;
    }
    void bookFlights() override
    {
        cout << "Flights are booked." << endl;
    }
    void bookTours() override
    {
        cout << "Tours are booked." << endl;
    }
};
#endif  