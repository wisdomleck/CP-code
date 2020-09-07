/* Write a function nextperm(char *s)that rearranges the characters in a string
argument and generates the lexicographically next permutation of the same
 letters.  Forexample, if the strings is initially"51432", then when the function
  returns sshould be"52134" */

  #include <bits/stdc++.h>

  using namespace std;

  int main(){
      string s;
      cout << "Enter a string" << endl;
      cin >> s;

      int maxindexi = -1;
      for(auto i = s.size() - 1; i >= 0; --i){
          if(s[i] < s[i+1]){
              maxindexi = i;
              break;
          }
      }

      if(maxindexi == -1){
          cout << "There is no lexicographically larger string using the same letters" << endl;
          return 0;
      }

      int maxindexj = -1;
      for(auto j = s.size()-1; j>maxindexi; j--){
          if(s[j] > s[maxindexi]){
              maxindexj = j;
              break;
          }
      }

      swap(s[maxindexi], s[maxindexj]);
      cout << maxindexi << " " << maxindexj << endl;
      // Now reverse elements after index i
      sort(s.begin() + maxindexi + 1, s.end());


      cout << "The next lexigographic permutation is " << s << endl;

  }
