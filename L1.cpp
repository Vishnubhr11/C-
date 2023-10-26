 #include <iostream>
using namespace std;

int main() {
    int pro = 1;
    int sum = 0;
    int n;

    cout << "Enter the number: ";
    cin >> n;

    while (n != 0) {
        int digit = n % 10;
        pro = pro * digit;
        sum = sum + digit;
        n = n / 10;
    }

    int answer = pro - sum;
    cout << "The answer is: " << answer << endl;

    return 0;
}