#include <bits/stdc++.h>
using namespace std;
int sum(int a[], int len);
int main()
{
int a[20], len, i;
scanf(“%d”, &len);
for(i=0; i<len; i++)
{
scanf(“%d”, &a[i]);
}
cout << sum(a, len);
return 0;
}
int sum(int a[], int len)
{
// Store frequencies of elements of the array
unordered_map<int, int> m;
for (int i = 0; i < len; i++)
m[a[i]]++;

// variable to store sum of all odd occurring elements/
int sum = 0;

// loop to iterate through map
for (auto itr = m.begin(); itr != m.end(); itr++) {

// check if frequency is odd
if (itr->second % 2 != 0)
sum += (itr->first) * (itr->second);
}
return sum;
}
