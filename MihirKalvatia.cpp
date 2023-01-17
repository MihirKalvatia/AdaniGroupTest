#include<bits/stdc++.h>
using namespace std;

int N = 101,columnIndex;

vector<vector<int>> get2DList(int r,int c) {

    vector<vector<int>> arr = vector<vector<int>> (r,vector<int> (c));
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            arr[i][j] = rand()%N;
        }
    }

    return arr;
}

bool comparator(vector<int> a,vector<int> b) {
    if(a[columnIndex - 1] < b[columnIndex - 1])
        return true;
    else
        return false;
}

void sort2DList(vector<vector<int>> &arr,int columnIndex) {
    sort(arr.begin(),arr.end(),comparator);
}

int main() {
    int r,c;
    cout<<"Enter Number of Rows"<<endl;
    cin>>r;
    cout<<"Enter Number of Columns"<<endl;
    cin>>c;
    vector<vector<int>> arr = get2DList(r,c);

    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    cout<<"Enter Column Index"<<endl;
    cin>>columnIndex;

    sort2DList(arr,columnIndex);

    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}
