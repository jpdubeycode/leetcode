#include<iostream>
#include<string>
using namespace std;

int longestPalindrome(string s) {
    int count[52] = {0};
    int ans = 0;
    bool hasodd = false;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            count[s[i] - 'a']++;
        else if(s[i] >= 'A' && s[i] <= 'Z')
            count[s[i] - 'A' + 26]++;
    }

    for(int i = 0; i < 52; i++)
    {
        ans += (count[i] / 2) * 2;

        if(count[i] % 2 == 1)
            hasodd = true;
    }

    if(hasodd)
        ans++;

    return ans;
}

int main(){
    string s = "Aaabccccdd";
    cout << longestPalindrome(s);
}
