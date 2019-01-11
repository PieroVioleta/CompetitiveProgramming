// Borze
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    char arr[202];
    cin>>arr;
    int n = strlen(arr);
    for(i=0; i<n; i++){
        if(arr[i]=='.'){
            cout<<"0";
            continue;
        }
        else if(arr[i]=='-' && arr[i+1]=='.'){
            cout<<"1";
            i++;
            continue;
        }
        else if(arr[i]=='-' && arr[i+1]=='-'){
            cout<<"2";
            i++;
            continue;
        }
    }
}
