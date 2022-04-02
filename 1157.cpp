////
//// Created by EUNBEE KO on 2022/04/02.
////
//
//#include <iostream>
//#include <string>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//    string t;
//    cin >> t; //  테스트 케이스 문자열
//    int dic[26] = {};
//    int len = t.length();
//
//    // 1) 문자열을 입력받아 각각의 문자를 숫자로 변환 후 합 구하기'
//    for (int i = 0; i < len; i++) {
//        if('a' <= t[i] && t[i] <= 'z') dic[t[i] - 'a']++;
//        if('A' <= t[i] && t[i] <= 'Z') dic[t[i] - 'A']++;
//    }
//
//    // 2) 가장 많은 합을 가진 문자의 대문자 출력 (같을시 ? 출력)
//    int mx = 0;
//    for (int i = 0; i < 26; i++) mx = max(mx, dic[i]);
//    char res = 0;
//    for (int i = 0; i < 26; i++) {
//        if (dic[i] != mx) continue;
//        res = res ? '?' : ('A' + i);
//    }
//
//    cout << res;
//    return 0;
//}
//
