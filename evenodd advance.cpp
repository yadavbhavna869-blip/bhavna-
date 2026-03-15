#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many numbers you want to check? ";
    int count;
    cin >> count;

    for(int i = 0; i < count; i++) {
        cout << "Enter number " << i+1 << ": ";
        cin >> n;
        cout << n << " is " << (n % 2 == 0 ? "even" : "odd") << endl;
    }
    return 0;
}

