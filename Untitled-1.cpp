#include <iostream>
using namespace std;

int main() {
  cout << "Select the type of conversion\n
  1.Binary to Decimal\n
  2.Decimal to Binary\n
  3.Octal to Decimal\n
  4.Decimal to Octal\n
  5.Hexadecimal to Decimal\n
  6.Decimal to Hexadecimal\n
  7.Hexadecimal to Binary\n
  8.Binary to Hexadecimal\n
  9.Binary to Octal\n
  10.Octal to Hexadecimal\n
  11.Hexadecimal to Octal\n
  12.Octal to Binary" << endl;

  int choice;
  cin>>choice;
  
  switch choice:
    case 1:
        {
            long int val;
            cin>>val;
            cout<<BinarytoDecimal(val)<<endl;
            break;
        }
    case 2:
        {
            int val;
            cin>>val;
            cout<<BinarytoDecimal(val)<<endl;
            break;
        }
    case 3:
        {
            int val;
            cin>>val;
            cout<<BinarytoDecimal(val)<<endl;
            break;
        }
    case 4:
        {
            int val;
            cin>>val;
            cout<<BinarytoDecimal(val)<<endl;
            break;
        }
    case 5:
        {
            int val;
            cin>>val;
            cout<<BinarytoDecimal(val)<<endl;
            break;
        }
    case 6:
        {
            int val;
            cin>>val;
            cout<<BinarytoDecimal(val)<<endl;
            break;
        }
    case 7:
        {
            int val;
            cin>>val;
            cout<<BinarytoDecimal(val)<<endl;
            break;
        }
    case 8:
        {
            int val;
            cin>>val;
            cout<<BinarytoDecimal(val)<<endl;
            break;
        }
    case 9:
        {
            int val;
            cin>>val;
            cout<<BinarytoDecimal(val)<<endl;
            break;
        }
    case 10:
        {
            int val;
            cin>>val;
            cout<<BinarytoDecimal(val)<<endl;
            break;
        }
    case 11:
        {
            int val;
            cin>>val;
            cout<<BinarytoDecimal(val)<<endl;
            break;
        }
    case 12:
        {
            int val;
            cin>>val;
            cout<<BinarytoDecimal(val)<<endl;
            break;
        }
    default:
        {
            cout<<"Wrong choice"<<endl;

        }
    
  
  return 0;
}

int BinarytoDecimal(long int a){
    int ans,dig,x=1;
    while(a!=0)
    {
        dig=a%10;
        a/=10;
        ans=ans+dig*x;
        x*=2;
    }

    return ans;
}