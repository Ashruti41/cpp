/* enter one secret message and encrypt that message and then decrypting that message too.
  string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  string key      {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
use this in your code for encrypting and decrypting */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key      {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    string ne {};
    cout << "Enter your secret message: "<<endl;
    getline(cin, ne);
    
    cout << "Encrypting message: ";
    string enc_me{};
    for(char c:ne)
    {
        size_t pos = alphabet.find(c);
        if(pos != string::npos)
        {
            char new_char = key.at(pos);
            enc_me += new_char;
        }
        else{
            enc_me += c;
        }
    }
    
    cout << enc_me << endl;

    cout << "Decrypting message...." <<endl;
    cout << "Decrypted message: ";
    
    string dec_me{};
    for(char e:enc_me)
    {
        size_t pos = key.find(e);
        if(pos != string::npos)
        {
            char old_char = alphabet.at(pos);
            dec_me += old_char;
        }
        else{
            dec_me += e;
        }
    }
    cout << dec_me << endl;
    return 0;
}
