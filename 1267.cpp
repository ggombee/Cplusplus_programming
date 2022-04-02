#include <iostream>

using namespace std;

int main() {

    // ㅌㅔ스트 케이스 개수 s
    // 테스트 케이스 숫자 t

    int s;
    cin >> s;
    int Y = 0;
    int M = 0;

    // 1) 입력받은 테스트 케이스마다 공식써서 요금 구한뒤 합계 저장
    while (s--) {
        int t;
        cin >> t;
        Y += (t / 30 + 1) * 10;
        M += (t / 60 + 1) * 15;
        // 영 30초 10원 t/30+1*10
        // 민 60초 15원 t/60+1*15
    }

    // 2) 점수 합계 비교해서 큰 합계 가진 요금제 및 요금 출력 (같을시에는 둘다 출력)
    if (Y > M) {
        cout << "M " << M << endl;
    } else if (Y < M) {
        cout << "Y " << Y << endl;

    } else {
        cout << "Y M " << Y << endl;
    }

    return 0;
}