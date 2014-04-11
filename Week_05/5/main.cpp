#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main() {
    string a, ans;
    int b = 0;
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++) {
        a[i] = a[i] < 'a' ? a[i]-'A'+'a' : a[i];
    }
    for (int i = 0; i < a.length(); i++) {
        char x = a[i];
        if (x < b+97) {
            ans+=x-'a'+'A';
        } else {
            ans+=x;
        }
    }
    cout << ans << endl;
    return 0;
}
