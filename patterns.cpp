#include <iostream>
using namespace std;

int main(){
    int n ;
    cout << "Enter the value of n:";
    cin >> n;
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            cout << j<<"\t";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            cout << "*"<<"\t";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n;i++){
        char ch = 'A';
        for (int j = 1; j <= n;j++){
            cout << ch<<"\t";
            ch++;
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n;i++){
        char c = 'a';
        for (int j = 1; j <= n;j++){
            cout << c<<"\t";
            c++;
        }
        cout << endl;
    }
    cout << endl;

         int num = 1;
    for (int i = 0; i <= n;i++){
    
        for (int j = 0; j <= n;j++){
            cout << num <<"\t";
            num++;
        }
        
        cout << endl;
    }
    cout << endl;

         char alpha = 'A';
    for (int i = 0; i <= n;i++){
        for (int j = 0; j <= n;j++){
            cout << alpha <<"\t";
            alpha++;
        }
        cout << endl;
    }
    cout << endl;

        
    for (int i = 0; i < n;i++){
        for (int j = 0; j < i+1;j++){
            cout << "*" <<"\t";
        }
        
        cout << endl;
    }
    cout << endl;
    
     int num1 = 1;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < i+1;j++){
            cout << num1 <<"\t";
            num1++;
        }
        
        cout << endl;
    }
    cout << endl;

     char ch1 = 'A';
    for (int i = 0; i < n;i++){
        for (int j = 0; j < i+1;j++){
            cout << ch1 <<"\t";
            ch1++;
        }
        
        cout << endl;
    }
    cout << endl;

    
    for (int i = 0; i <=n;i++){
        for (int j = 1; j <i+1;j++){
            cout << j <<"\t";
            
        }
        
        cout << endl;
    }
    cout << endl;

        for (int i = 0; i <=n;i++){
        for (int j = i+1; j >0;j--){
            cout << j <<"\t";
            
        }
        
        cout << endl;
    }
    cout << endl;


    for (int i = 0; i < n;i++){
         char ch2 = 'A';
        for (int j = i+1; j >0;j--){
            cout << ch2 <<"\t";
        }
    
        cout << endl;
    }
    cout << endl;

    
}