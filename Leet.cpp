#include<iostream>
#include<string>
using namespace std;


class Solution {
public:
    string mergeAlternately(string word1, string word2);
private:
    string word1;
    string word2;

};

string Solution::mergeAlternately(string word1, string word2){
    int long1 = word1.length();
    int long2 = word2.length();
    int long3 = long1 = long2;
    int maxlong = long1;
    string word3=word1+word2;
    bool cul = false;
    if (long2 > maxlong) {
        maxlong = long2;
        cul = true;
    }
     
    if (!cul) {
        for (int i = 0; i < long2; i++) {
            word3[2 * i] = word1[i];
            word3[2 * i + 1] = word2[i];
        }
        for (int i = 0; i < long1 - long2; i++) {
            word3[2 * long2 + i] = word1[i + long2];
        }
    }
    else {
        for (int i = 0; i < long1; i++) {
            word3[2 * i] = word1[i];
            word3[2 * i + 1] = word2[i];
        }
        for (int i = 0; i < long2 - long1; i++) {
            word3[2 * long1 + i] = word2[i + long1];
        }
    }
    return word3;

}

int main() {
    Solution mysolution;
    string word1;
    string word2;
    getline(cin, word1);
    getline(cin, word2);
    cout << mysolution.mergeAlternately(word1, word2);

}