#include <iostream>

#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k, nums, count = 0;
    cin >> n >> k;
    while (n--) {
        cin >> nums;
        if (nums % k == 0) {
            count += 1;
        }
    }
    cout << count << "\n";
    return 0;
}