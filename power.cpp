// Compute x^n Through Binary Exponentiation

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        long binForm = n;
        if(n < 0) {
            x = 1/x;
            binForm = -binForm;
        }
        double ans = 1;

        while(binForm > 0) {
            if(binForm % 2 == 1) {
                ans *= x;
            }
            x *= x;
            binForm /= 2;
        }

        return ans;

    }
};

int main () {
    Solution s1;
    cout << s1.myPow(2.0, 10);
    return 0;
}