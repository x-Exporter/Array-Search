#include <iostream>
#include <vector>

using namespace std;

int count_elements_greater_than(const std::vector<int>& arr, int point) {
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] <= point) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return arr.size() - left;
}

int main()
{
    setlocale(LC_ALL,"ru");
    vector<int> vec = { 14, 16, 19, 32, 32, 32, 56, 69, 72 };
    int num;
    cout << "Введите точку отсчёта: ";
    cin >> num;
    cout << "Количество элементов в массиве больших, чем " << num << ": " << count_elements_greater_than(vec, num);
}
