#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int countSubstringsWithAtMostKDistinct(const string& s, int k) {
    unordered_map<char, int> charFrequency; 
    int left = 0;
    int count = 0;
    int n = s.size();
    for (int right = 0; right < n; right++) {
        charFrequency[s[right]]++;
        while (charFrequency.size() > k) {
            charFrequency[s[left]]--;
            if (charFrequency[s[left]] == 0) {
                charFrequency.erase(s[left]);
            }
            left++;
        }
        count += (right - left + 1);
    }

    return count;
}
int countSubstringsWithExactlyKDistinct(const string& s, int k) {
    return countSubstringsWithAtMostKDistinct(s, k) - countSubstringsWithAtMostKDistinct(s, k - 1);
}
int main() {
    string s = "pqpqs"; 
    int k = 2;

    int result = countSubstringsWithExactlyKDistinct(s, k);
    cout << "Number of substrings with exactly " << k << " distinct characters: " << result << endl;

    return 0;
}

