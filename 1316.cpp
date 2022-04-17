////
//// Created by EUNBEE KO on 2022/04/16.
////
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int solution(string& s){
//  int len = s.length();
//  if (len == 1) return 1;
//
//  bool check[26] = {};
//  check[s[0] - 'a'] = true;
//
//  for (int i = 1; i < len; i++) {
//    if(s[i] == s[i-1]) continue;
//
//    if(check[s[i] - 'a']) return 0;
//
//    check[s[i] - 'a'] = true;
//  }
//  return 1;
//}
//
//int main() {
//  int t; cin >> t;
//  int res = 0;
//
//  while(t--) {
//    // 문자열 입력받기
//    string w; cin >> w;
//    res += solution(w);
//    }
//
//  cout << res ;
//
//  return 0;
//}
//
