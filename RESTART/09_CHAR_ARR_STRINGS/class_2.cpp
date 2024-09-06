//?https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
//?https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
//* -------------------------------------------
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
//* -------------------------------------------

string removeDuplicates(string str) {
  string ans = "";
  int i = 0;

  while (i < str.length()) {
    if (ans.length() == 0) {
      ans.push_back(str[i]);
    } else {
      if (str[i] == ans[ans.length() - 1]) {
        ans.pop_back();
      } else {
        ans.push_back(str[i]);
      }
    }
    i++;
  }

  return ans;
}

string removeSubstrOccurences(string s, string part) {
  int partLength = part.length();
  auto pos = s.find(part);

  while (pos != string::npos) {
    s.erase(pos, partLength);
    pos = s.find(part);
  }

  return s;
}

int main() {
  cout << endl;
  string str = "azxxzy";

  //! REMOVE DUPLICATES
  // string ans = removeDuplicates(str);
  // cout << "\nAnswer is: " << ans;

  //! REMOVE SUB_STR OCCURENCES
  str = "daabcbaabcbc";
  string ans = removeSubstrOccurences(str, "abc");

  cout << "\nAnswer is: " << ans;
  cout << endl << endl;
}