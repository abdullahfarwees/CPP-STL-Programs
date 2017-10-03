#include <bits/stdc++.h>

using namespace std;

int main()
{

int n;
cin >> n;

int arr[n];

for(int i=0;i<n;i++)cin>>arr[i];

std::sort(arr,arr+n);

for(int i=0;i<n;i++)cout << arr[i] <<" " ;

cout << endl << endl;

/* sort in DESC order */
std::sort(arr,arr+n,std::greater<int>());

for(int i=0;i<n;i++)cout << arr[i] <<" " ;

return 0;
}
