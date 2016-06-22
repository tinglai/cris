#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {

public:
    string convert(string s, int numRows) {
        string result = "";
        if (numRows == 0){
            return result;
        }
        if (numRows == 1){
            return s;
        }
        vector<string> str_vec(numRows);
        for (unsigned int i = 0; i < s.size(); ++i){
            int idx = i % (numRows * 2 - 2);
            if (idx < numRows){
                str_vec[idx].push_back(s[i]);
            }
            else {
                str_vec[numRows * 2 - 2 - idx].push_back(s[i]);
            }
        }
        for (int i = 0; i < numRows; ++i){
            result += str_vec[i];
        }
        return result;
    }
};

int main(){
    Solution sol;
    string s = "PAYPALISHIRING";
    string result = sol.convert(s, 3);
    cout << "result = " << result << std::endl;
}
