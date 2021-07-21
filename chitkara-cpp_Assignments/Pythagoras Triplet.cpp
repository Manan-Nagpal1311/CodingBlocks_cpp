#include<iostream>
#include <cmath>
using namespace std;
#include<iostream>
using namespace std;

int main() {
	long long int n; 
    cin >> n;

    if(n == 1 || n == 0){
        cout << "-1";
	}else if(n % 2 == 0){
        long long int res = n * n / 4;
        cout << res - 1 << " " << res + 1;
    }else if(n % 2 != 0){
        long long int res = n * n + 1;
        cout << res / 2 - 1 << "  "<< res / 2;
    }
}