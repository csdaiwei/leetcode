#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {


        if (strs.size() <= 0)
        {
            return "";
        }

        //find minimal length
        string minstr = strs[0];
        int minlen = strs[0].length();

        for (int i = 0; i < strs.size(); ++i){
            if (strs[i].length() < minlen){
                minlen = strs[i].length();
                minstr = strs[i];
            }
        }


        //find lcp
        string lcp = "";

        for (int i = 0; i < minlen; ++i){

            char c = minstr[i];

            for (int j = 0; j < strs.size() ; ++j){        
                if (strs[j][i] != c){
                    return lcp;
                }
            }


            lcp.append(1, c);
        }
        return lcp;
        
    }
};


int main()
{
    Solution s;

    vector<string> strs;

    strs.push_back("123");
    strs.push_back("1255");

    cout << s.longestCommonPrefix(strs) << endl;

    return 0;
}