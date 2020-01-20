#include<bits/stdc++.h>

using namespace std;

int main(){
    string input;
    cin >> input;
    int remainder=0;
    for(int i = 0; i < input.size(); ++i){
        int temp = (input[i]-'0') + 10 * remainder;
        remainder = temp % 7;
    }
    cout<<remainder<<endl;
}
