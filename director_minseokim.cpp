#include "director.h"

// 정적 데이터 멤버 정의
Vacation* Director::vacation = 0;
// 클라이언트가 호출할 정적 멤버 함수 정의
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
    else if (packageType < 1 || packageType>3) { //1, 2, 3을 제외한 타입을 입력했을 경우를 대비해 작성하였다.
        cout << "잘못된 타입 종류입니다." << endl;
        return;
    }
    cout << "여행 계획에 대한 정보: " << endl;
    vacation->bookHotels();
    vacation->bookFlights();
    vacation->bookTours();
    delete vacation;
    cout << endl;
}
