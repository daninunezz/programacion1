#include <iostream>
using namespace std;
#include <fstream>

int main() {
    int n = 1, sum = 1, tot = 0;
    bool triangle;
    ifstream inputFile("integers.txt");
    while (n != 0) {
        inputFile >> n;
        triangle = false;
        while (tot <= n) {
            if (n == tot) {
                triangle = true;
                break;;
            }
            else {
                tot += sum;
                sum++;
            }
        }
        if (triangle == true) {
            cout << n << " is a triangle";
        }
        else
            cout << n << " is not a triangle";
        cout << endl;

        tot = 0;
        sum = 1;
    }
    inputFile.close();

    return 0;
}