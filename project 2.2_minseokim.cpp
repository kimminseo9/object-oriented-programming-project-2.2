#include "director.h"
#include <iostream>
using namespace std;

int main()
{
    // 여행 유형 선택
    int type = 1;
    while (type >= 1 && type <= 3) {
        cout << "여행 유형을 입력해주세요(1, 2, 3): ";
        cin >> type;
        // 여행 계획 확인
        Director::book(type);
    }
    return 0;
}