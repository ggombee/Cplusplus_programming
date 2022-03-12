//#include <iostream>
//
//using namespace std;
//
//const int N = 41;
//
//int main() {
//
//    // 배열 초기화
//    int acc[2][N] = {};
//    int T;
//    //A
//    acc[0][0] = acc[1][1] = 1;
//
//    // 2부터 40까지 배열
//    for (int i=2; i<N; i++){
//      acc[0][i] = acc[0][i-1] + acc[0][i-2];
//      acc[1][i] = acc[1][i-1] + acc[1][i-2];
//    }
//
//    cin >> T;
//
//    while (T--){
//        int n; cin >> n;
//        cout << acc[0][n] << ' ' << acc[1][n] << '\n';
//    }
//
//    return 0;
//}