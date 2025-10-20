#include <iostream>
using namespace std;

int main()
{
    int num;
    bool loop = true;
    int counter = 0;
    int i = 1;


    while (loop){
        cout << "Enter a number (1 - 100): ";
        cin >> num;

        if (num >= 1){
            if (num <= 100){
                while (counter < 10){
                    cout << i << " x " << num << " = " << num * i << endl;
                    i++;
                    counter++;
                }
                i = 1;
                counter = 0;
            }
        }
    }
    return 0;
}