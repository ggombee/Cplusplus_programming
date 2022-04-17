////
//// Created by EUNBEE KO on 2022/04/16.
////
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//bool isValid(string& str) {
//    int len = str.length(); // 문자열의 길이
//    int cnt = 0;
//
//    for( int i = 0; i < len; i++) {
//        if(str[i] == '(' ) cnt++;
//        else {
//            if(!cnt) return false;
//            cnt--;
//        }
//    }
//    return !cnt;
//}
//
//int main() {
//    int t; cin >> t; // 테스트 케이스 개수
//
//    while(t--) {
//        string a; cin >> a;
//        cout << (isValid(a) ? "YES" : "NO") << '\n';
//    }
//
//    return 0;
//}
