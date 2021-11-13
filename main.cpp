#include <iostream>
using namespace std;
int main() {
    int n;
    int a=1, b=1, c;
    cin >> n;
   if(n<=2) {
        cout << a << endl;
        cout << b << endl;
    }else{
        cout << a <<endl;
        cout << b <<endl;
        for(int i=0;i<(n-2);i++){
            c=a+b;
            a=b;
            b=c;
            if (c<=n){
                cout << c <<endl;
            }
        }
    }
    return 0;
}
