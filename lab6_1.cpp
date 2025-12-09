#include<iostream>
using namespace std;
int main() {
    int x=1,even=0,odd=0;
    while (x!=0){
        cout << "Enter an integer: ";
        cin >> x;
        if (x%2==0&&x!=0)
        {
        even++;
        }else if(x%2!=0&&x!=0){
        odd++;
    }
    }
    cout << "#Even numbers = "<< even << endl;
    cout << "#Odd numbers = "<< odd;    
}   