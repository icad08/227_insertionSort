#include<iostream>
using namespace std;

int i, j, n, temp;
int arr[20];


void input() {
    while (true) {
        cout << "masukan banyaknya elemen array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 eleman.\n";
        }
    }
