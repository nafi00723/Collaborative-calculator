#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b; 
	cout << "Enter two integer number:\n";
    cin >> a >> b;

    char ch;
    cin >> ch;

    switch (ch)
    {
    case '+':
        cout << a + b << '\n';
        break;
    case '-':
        cout << a - b << '\n';
        break;
    case '*':
        cout << (a*b) << '\n';
        break;
    case '/':
        if(b != 0){
            cout << a/b << '\n';
        }
        else{
            cout << "Cannot divide\n";
        }
        break;
    default:
        cout << "Please check\n";
        break;
    }

    return 0;
}