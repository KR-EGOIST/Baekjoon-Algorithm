#include <iostream>
#include <vector>

using namespace std;

vector<int> A, tmp;

// k : 저장 횟수, count : 총 저장 횟수, result : K 번째 저장 되는 수
int k, count = 0, result = -1;

void merge(int p, int q, int r){
    int i = p, j = q + 1, t = 0;

    while(i <= q && j <= r){
        if(A[i] <= A[j]){
            tmp[t++] = A[i++];
        } else {
            tmp[t++] = A[j++];
        }
        // 병합 과정 중에 K 번째 저장된 원소가 무엇인지 찾기 위해 사용
        if(++count == k) result = tmp[t - 1];
    }

    while(i <= q){
        tmp[t++] = A[i++];
        if(++count == k) result = tmp[t - 1];
    }

    while (j <= r) {
        tmp[t++] = A[j++];
        if (++count == k) result = tmp[t - 1];
    }

    i = p, t = 0;
    while(i <= r){
        A[i++] = tmp[t++];
    }
    /*
    for (int k = 0; k < t; ++k) {
        A[p + k] = tmp[k];
    }
    */
}

void merge_sort(int p, int r){
    if(p < r){
        int q = (p + r) / 2;
        merge_sort(p, q);
        merge_sort(q + 1, r);
        merge(p, q, r);
    }
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n >> k;

    A.resize(n);
    tmp.resize(n);

    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    merge_sort(0, n - 1);

    cout << result << "\n";
    
    return 0;
}
