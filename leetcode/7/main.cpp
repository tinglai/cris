#include <iostream>
#include <limits.h>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int result = 0;
        while (x != 0){
            int mod = x % 10;
            if (result > INT_MAX / 10
                    || result < INT_MIN / 10){
                return 0;
            }
            else if (result == INT_MAX / 10){
                if (result * 10 + mod > INT_MAX){
                    return 0;
                }
                else {
                    result = result * 10 + mod;
                }
            }
            else if (result == INT_MIN / 10){
                if (result * 10 + mod < INT_MIN){
                    return 0;
                }
                else {
                    result = result * 10 + mod;
                }
            }
            else{
                result = result * 10 + mod;
            }
            x = x / 10;
        }
        return result;
    }
};

int main(){
    Solution sol;
    int x = 0;
    cin >> x;
    int result = sol.reverse(x);
    cout << "result = " << result << endl;
}
