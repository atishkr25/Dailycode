#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string s;
    cin >> s;
    string newstr;

    for (int i = 0; i < s.size(); i++) {
        
        if ( (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y')  ) {
            char ch = (tolower(s[i])); 
            if((ch!= 'a' && ch!= 'e' && ch!= 'i' && ch!= 'o' && ch!= 'u' && ch!= 'y') ) newstr.push_back(ch);
        }
    }

    for (int i = 0; i < newstr.size(); i++) {
        cout << "." << newstr[i];
    }

    return 0;
}
