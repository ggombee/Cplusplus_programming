////
//// Created by EUNBEE KO on 2022/04/02.
////
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//
//    int dic[10000] = {};
//    int N; cin >> N;
//
//    for(int i = 0; i < N; i++) {
//        int t; cin >> t;
//        dic[t-1]++; // 10000이 들어오면 dic[9999] = 1
//    }
//
//    for( int i = 0; i < 10000; i++) {
//        //dic[0] = 1
//        if( dic[i] != 0) {
//            while(dic[i]--) {
//                cout << i + 1 << '\n';
//            }
//        }
//    }
//
//    return 0;
//}