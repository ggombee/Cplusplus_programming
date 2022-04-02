//
// Created by EUNBEE KO on 2022/03/05.
//

//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//bool isPrime(int k) {
//    if ( k == 1 ) return false;
//
//    for ( int i = 2; i <= sqrt(k); i++) {
//        if(k % i == 0) {
//          return false;
//        }
//    }
//    return true;
//}
//
//int main(){
//    int m,n; cin >> m >> n;
//    int sum = 0;
//    int min = 0;
//
//    for( int i = n; i >= m; i--){
//        if(isPrime(i)) {
//            sum = sum + i;
//            min = i;
//        }
//    }
//
//    if(sum > 0) {
//        cout << sum << endl;
//        cout << min << endl;
//    } else {
//        cout << -1 << endl;
//    }
//
//    return 0;
//}