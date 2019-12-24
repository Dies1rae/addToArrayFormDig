#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>  addToArrayForm(vector<int>& A, int K);

int main() {
	vector <int> a = { 9,9,9,9,9,9,9,9,9,9,9 };
	int b = 1;
	vector <int> R = addToArrayForm(a, b);
	return 0;
}
vector<int> addToArrayForm(vector<int>& A, int K) {
    reverse(A.begin(), A.end());
    for (int i = 0; i < A.size(); i++) {
        A[i] += K;
        K = A[i] / 10;
        A[i] %= 10;
    }
    while (K) {
        A.push_back(K % 10);
        K /= 10;
    }
    reverse(A.begin(), A.end());
    return A;
}