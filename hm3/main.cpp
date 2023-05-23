#include <iostream>
using namespace std;

void rec_bub_sort(int arr[], int size) {
    for (int n = 1, temp = 0; n < size; n++) {
        if (arr[n - 1] > arr[n]) { 
            temp = arr[n];         // изменение состояние, движение к базовому случаю
            arr[n] = arr[n - 1];
            arr[n - 1] = temp;
        }
    }
    if (size > 1) rec_bub_sort(arr, size - 1); //рекурсивный случай
    // базовый случай - когда if не сработает
}

int main() {
    int n = 15;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 91 + 10;
    }
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }
    cout << '\n';
    rec_bub_sort(arr, n);
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }

    delete[] arr;
}