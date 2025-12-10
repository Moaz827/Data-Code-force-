#include <iostream>
#include <String>
using namespace std;




int main() {
int n;
    cin >> n;
    int x=0;
    while (n--) {
        string operation ;
        cin >> operation;
        if (operation == "++X" || operation == "X++")
            x++;
        else
            x--;
    }
    cout << x << endl;
    return 0;
};