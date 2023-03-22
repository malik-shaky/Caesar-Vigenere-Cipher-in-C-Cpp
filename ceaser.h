//  Ceaser Cipher 
#include<iostream>
#include<string> 
using namespace std; 
string encryptedText(string plainText, int key) //encrypting text with key
{ 
    string entryptedText; 
  
    for (int i = 0; i < plainText.size(); i++) 
    { 
        char ch = char(int(plainText[i]+key-65)%26);  
        ch+=65;
        entryptedText.push_back(ch); 
    } 
    return entryptedText; 
} 
  

string decryptedText(string entryptedText, int key) //decrypting text with key
{ 
    string decryptedText; 
    for (int i = 0 ; i < entryptedText.size(); i++) 
    { 
        char ch = char(int(entryptedText[i]-key-65)%26); 
        ch+=65;
        decryptedText.push_back(ch); 
    } 
    return decryptedText; 
} 


