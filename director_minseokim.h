#ifndef DIRECTOR_H
#define DIRECTOR_H
#include <string>
#include <iostream>
#include <cassert>
using namespace std;

class Vacation {
public:
    virtual void bookHotels() = 0; // =0을 붙임으로써 virtual 함수에 대한 오류를 방지하였다. (처음에 지속적인 오류가 발생해 다양한 방법을 시도해보다 =0을 붙임으로써 해결할 수 있었다.)
    virtual void bookFlights() = 0;
    virtual void bookTours() = 0;
};
// 정적 멤버를 갖는 Director 클래스
class  Director
{
public:
    static Vacation* vacation;
    static void book(int type); // 클라이언트는 이 함수만 호출 가능
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