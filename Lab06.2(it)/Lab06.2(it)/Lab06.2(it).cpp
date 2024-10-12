#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Create(int* p, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++) {
        p[i] = Low + rand() % (High - Low + 1);
    }
}

void Print(int* p, const int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << p[i];
    }
    cout << endl;
}

int MaxElement(int* a, const int size) {
    int max = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int MinElement(int* a, const int size) {
    int min = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

double AverageMinMax(int* a, const int size) {
    int max = MaxElement(a, size);
    int min = MinElement(a, size);
    return (max + min) / 2.0; 
}

int main() {
    srand((unsigned)time(NULL));

    const int n = 10; 
    int p[n];
    int Low = -10;    
    int High = 14;   

    Create(p, n, Low, High);

    // Виводимо масив
    cout << "Array:" << endl;
    Print(p, n);

    double avg = AverageMinMax(p, n);

    cout << "Average of max and min elements: " << avg << endl;

    return 0;
}
