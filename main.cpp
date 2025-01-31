#include <iostream>

using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int sources[n];
    for (int i = 0; i < n; i++) {
        cin >> sources[i];
    }

    int threshold = sources[k - 1];
    int count = 0;

    for (int i = 0; i < n; i++){
        if (sources[i] >= threshold && sources[i] > 0) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
