#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip> 

void swap(long &a, long &b) {
    long temp = a;
    a = b;
    b = temp;
}

int partition(std::vector<long>& arr, int p, int r) {
    long x = arr[r];
    int i = p - 1;
    for (int j = p; j <= r - 1; j++) {
        if (arr[j] <= x) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[r]);
    return i + 1;
}

void qs(std::vector<long>& arr, int p, int r) {
    if (p < r) {
        int q = partition(arr, p, r);
        qs(arr, p, q - 1);
        qs(arr, q + 1, r);
    }
}

int main() {
    int a;
    long b;
    std::cin >> a >> b;
    std::vector<long> arr(a);
    for (int i = 0; i < a; i++) {
        std::cin >> arr[i];
    }
    long double min;
    long d;
    qs(arr, 0, a - 1);

    for (int i = 0; i < a; i++) {
        if (i == 0) {
            if (arr[0] != 0) {
                d = arr[0] - 0;
            } 
            else {
                d = 0;
            }
            min = 2 * d;
            if(a==2)
            {
                d=arr[1]-arr[0];
                if(min<d)
                    min=d;
            }
        }
        if (i > 0 && i < a) {
            d = arr[i] - arr[i-1];
             
            if (min < d) {
                min = d;
              
            }
        }
        if (i == a - 1) {
            if (arr[a - 1] != b) {
                for (int j = 0; j < a; j++) {
                    d = b - arr[a - 1];
                    if (min < 2*d) {
                        min = 2 * d;
                    }
                }
            }
        }
    }
    std::cout << std::fixed << std::setprecision(10) << min / 2; 
    return 0;
}
