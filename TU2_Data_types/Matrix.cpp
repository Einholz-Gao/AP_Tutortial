#include<iostream>
#include <vector>

using namespace std;

void print_vector(const vector<int> &v){//attention to here
    for(int i=0;i<v.size();i++)
        cout<<v[i];
}

int main(){
    vector<int> v;
    int x;
    cout<<"Please give ekements to the vector: "<<endl;
    while (cin >> x) { // Read and return false if not integer (try . )
    v.push_back(x); // Add x to the vector
    }
    cin.clear(); // Clear the error state of cin (revert to true)
    cin.ignore(); // Ignore the last element from the input buffer

    vector<std::vector<int>> A;

    cout<<"Please give ekements to the metrix: "<<endl;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            int x;
            vector<int> y;
            cin>>x;
            y.push_back(x);
            A.push_back(y);
        }
    }
    cout<<A[0][0]<<" "<<A[1][0]<<endl<<A[0][1]<<" "<<A[1][1]<<endl;
    // print_vector(v);
}

