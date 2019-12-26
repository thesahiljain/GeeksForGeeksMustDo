// Missing number in array
#include <iostream>
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int result = n*(n+1)/2;
        while(n > 2){
            int data;
            cin >> data;
            result -= data;
            n--;
        }
        cout << result << endl;
    }
}
