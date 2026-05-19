#include <bits/stdc++.h>
using namespace std;
string hex_to_binary(string bs) {
  string st = "";
  for (int i = 0; i < bs.length(); i++) {
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
string binary_to_base64(string bs)
{
  string st = " ";
  int c = 0, d = 0;
  for (int i = bs.length() - 1; i >= 0; i--)
   {
    c += pow(2, d) * (bs[i]-'0');
    d++;
    if (d == 6 || i == 0)
    {
      if (c >= 0 && c < 26)
        st = (char)('A' + c)+st;
      else if (c >= 26 && c < 52)
        st = (char)('a' + c - 26)+st;
      else if (c >= 52 && c < 62)
        st = (char)('0' + c - 52)+st;
      c = 0;
      d = 0;
    }
  }
  return st;
}
int main() {
  string bs;
  cin >> bs;
  bs= binary_to_base64(hex_to_binary(bs));
  cout<<bs<<endl;
}
