#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    cout << "Pattern-0"<<endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << "\t";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Pattern-1"<<endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*" << "\t";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Pattern-2"<<endl;

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= n; j++)
        {
            cout << ch << "\t";
            ch++;
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pattern-3"<<endl;

    for (int i = 1; i <= n; i++)
    {
        char c = 'a';
        for (int j = 1; j <= n; j++)
        {
            cout << c << "\t";
            c++;
        }
        cout << endl;
    }
    cout << endl;
    cout << "Pattern-4"<<endl;

    int num = 1;
    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j <= n; j++)
        {
            cout << num << "\t";
            num++;
        }

        cout << endl;
    }
    cout << endl;
    cout << "Pattern-5"<<endl;

    char alpha = 'A';
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << alpha << "\t";
            alpha++;
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pattern-6"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*" << "\t";
        }

        cout << endl;
    }
    cout << endl;
    cout << "Pattern-7"<<endl;
    int num1 = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << num1 << "\t";
            num1++;
        }

        cout << endl;
    }
    cout << endl;
    cout << "Pattern-8"<<endl;
    char ch1 = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch1 << "\t";
            ch1++;
        }

        cout << endl;
    }
    cout << endl;
    cout << "Pattern-9"<<endl;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << j << "\t";
        }

        cout << endl;
    }
    cout << endl;

    cout << "Pattern-10"<<endl;
    for (int i = 0; i <= n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << j << "\t";
        }

        cout << endl;
    }
    cout << endl;
    cout << "Pattern-11"<<endl;

    for (int i = 0; i < n; i++)
    {
        char ch2 = 'A';
        for (int j = i + 1; j > 0; j--)
        {
            cout << ch2 << "\t";
        }

        cout << endl;
    }
    cout << endl;
    cout << "Pattern-12"<<endl;

    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "*" << "\t";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Pattern-13"<<endl;

    for (int i = n; i >= 1; i--)
    {
        char ch3 = 'A';
        for (int j = i; j > 0; j--)
        {
            cout << ch3 << "\t";
            ++ch3;
        }

        cout << endl;
    }

    cout << endl;
    cout << "Pattern-14"<<endl;

    for (int i = n; i >= 1; i--)
    {
        int num2 = 1;
        for (int j = i; j > 0; j--)
        {
            cout << num2<< "\t";
            num2++;
        }

        cout << endl;
    }

    cout << endl;
    cout << "Pattern-15"<<endl;
    int num3 = 1;
    for (int i = n; i >= 1; i--)
    {
        
        for (int j = i; j > 0; j--)
        {
            cout << num3<< "\t";
            num3++;
                }
        
        

        cout << endl;
    }
        cout << endl;
    cout << "Pattern-16"<<endl;
    char letter = 'A';
    for (int i = n; i >= 1; i--)
    {
        cout << endl;
        for (int j = i; j > 0; j--)
        {
            cout <<letter<< "\t";
            letter++;
                }
        cout << endl;
    }

    cout << endl;
    cout << "Pattern-17"<<endl;
    for (int i = 0; i < n;i++){
        cout << endl;
        for (int k = n - i; k > 0;k--)
            cout << " "<<"\t";
        
        for (int j = 0; j <= i;j++){
            cout << "*"<<"\t";
            
        }
        cout << endl;
    }

    cout << endl;
    cout << "Pattern-18"<<endl;
    for (int i = n; i >=1;i--){
        cout << endl<<"\t";
        for (int k = n - i; k > 0;k--)
            cout << " "<<"\t";
        
        for (int j = i; j >0;j--){
            cout << "*"<<"\t";
            
        }
        cout << endl;
    }
}
