#include <bits/stdc++.h>
using namespace std;
string hex_to_binary(string bs)
{
  string st = "";
  for (int i = 0; i < bs.length(); i++)
  {
    switch (bs[i]){
      case '0':
      st += "0000";
      break;
    case '1':
      st += "0001";
      break;
    case '2':
      st += "0010";
      break;
    case '3':
      st += "0011";
      break;
    case '4':
      st += "0100";
      break;
    case '5':
      st += "0101";
      break;
    case '6':
      st += "0110";
      break;
    case '7':
      st += "0111";
      break;
    case '8':
      st += "1000";
      break;
    case '9':
      st += "1001";
      break;
    case 'a':
      st += "1010";
      break;
    case 'b':
      st += "1011";
      break;
    case 'c':
      st += "1100";
      break;
    case 'd':
      st += "1101";
      break;
    case 'e':
      st += "1110";
      break;
    case 'f':
      st += "1111";
      break;
    }
  }
    return st;
  }
  string binary_to_hex(string s)
  {
    string st ="";
    for(int i=s.length()-1;i>=0;i-=4)
    {
      int t=(s[i]-'0')*1+(s[i-1]-'0')*2+(s[i-2]-'0')*4+(s[i-3]-'0')*8;    
      switch(t)
      {
        case 0:
        st='0'+st;
        break;
        case 1:
        st='1'+st;
        break;
        case 2:
        st='2'+st;
        break;
        case 3:
        st='3'+st;
        break;
        case 4:
        st='4'+st;
        break;
        case 5:
        st='5'+st;
        break;
        case 6:
        st='6'+st;
        break;
        case 7:
        st='7'+st;
        break;
        case 8:
        st='8'+st;
        break;
        case 9:
        st='9'+st;
        break;
        case 10:
        st='a'+st;
        break;
        case 11:
        st='b'+st;
        break;
        case 12:
        st='c'+st;
        break;
        case 13:
        st='d'+st;
        break;
        case 14:
        st='e'+st;
        break;
        case 15:
        st='f'+st;
        break;
      }
    }
    return st;
  }
  string Xor(string bs1, string bs2) {
    string st = "";
    for (int i = 0; i < bs1.length(); i++)
    {
      if (bs1[i] == bs2[i])
      {
        st += '0';
      }
      else
      {
        st += '1';
      }
    }
    return st;
  }
  int main()
  {
    string bs1,bs2;
    cin>>bs1>>bs2;
    string bs= Xor(hex_to_binary(bs1),hex_to_binary(bs2));
    cout<<binary_to_hex(bs)<<endl;
  }