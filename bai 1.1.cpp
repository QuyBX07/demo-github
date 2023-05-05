#include <bits/stdc++.h>
using namespace std;
void Nhap(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Phan tu thu " << i + 1 << " la : ";
        cin >> arr[i];
    }
}
void Xuat(int arr[], int n)
{
    cout << "Danh sach : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void Chen(int arr[], int &n)
{
    cout << "\nNhap vi tri ban muon chen : ";
    int k, data;
    cin >> k;
    cout << "Nhap gia tri can chen : ";
    cin >> data;
    n++;
    if (k <= 1)
    {
        k = 1;
    }
    if (k > n)
    {
        k = n;
    }
    for (int i = n - 1; i >= k; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[k - 1] = data;
}
main()
{
    int n;
    cout << "So phan tu cua day la : ";
    cin >> n;
    int arr[100];
    Nhap(arr, n);
    Xuat(arr, n);
    Chen(arr, n);
    Xuat(arr, n);
}
