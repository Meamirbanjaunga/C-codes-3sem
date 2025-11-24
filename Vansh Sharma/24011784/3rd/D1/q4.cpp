#include <iostream>
#include <vector>
#include <numeric> 
#include <climits> 
#include <algorithm> 
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    vector<long long> prefix_sum(N + 1, 0);
    for (int i = 0; i < N; ++i) {
        prefix_sum[i + 1] = prefix_sum[i] + A[i];
    }
    long long max_special_sum = LLONG_MIN;
    for (int i = 0; i < N; ++i) {
        long long current_special_sum = 0;
        int group_size = 1;
        int current_index = i;
        while (true) {
            int start_index = current_index;
            int end_index = current_index + group_size - 1;
            if (end_index >= N) {
                break; // Stop adding groups
            }
            long long group_sum = prefix_sum[end_index + 1] - prefix_sum[start_index];
            current_special_sum += group_sum;
            current_index += group_size;
            group_size++;
        }
        if (current_special_sum > max_special_sum) {
            max_special_sum = current_special_sum;
        }
    }
    cout << max_special_sum << endl;
    return 0;
}