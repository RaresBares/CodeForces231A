#include <iostream>



using namespace std;

int main() {

    int n;
    cin >> n;
    int as[3];
    int passes = 0;
    for (int i = 0; i < n; ++i) {
        cin >> as[1];
        cin >> as[2];
        cin >> as[3];
        if((as[1] + as[2] + as[3]) >=2){
            passes++;
        }
    }
    cout << passes;

    return 0;
}
