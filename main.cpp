// FizzBuzz
// There are numbers from 1 to 100
// If number is divided by 3, print Fizz
// If number is divided by 5, print Buzz
// If number is divided by 15, print FizzBuzz
// Else print a number

#include <iostream>
#include <string>

using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        string n = to_string(i), f = "Fizz", b = "Buzz";
        if (i % 3 != 0)
            f = "";
        else
            n = "";
        if (i % 5 != 0)
            b = "";
        else
            n = "";
        cout << n + f + b + "\n";
    }
    return 0;
}
