//  Vigenere Cipher 
#include<iostream>
#include<string> 
using namespace std; 

string key(string key,string plainText) // for Generating keyy
{
    int x = plainText.length(); 
    for (int i = 0;key.size() != plainText.size(); i++) 
    { 
        if (key.size() == plainText.size()) 
            break; 
        key.push_back(key[i]); 
    } 
    return key; 
} 
  

string encryptedText(string str, string key) //encrypting text with key
{ 
    string entryptedText; 
  
    for (int i = 0; i < str.size(); i++) 
    { 
        int ch = (str[i] + key[i]) %26;  
        ch += 65;
        entryptedText.push_back(ch); 
    } 
    return entryptedText; 
} 
  

string decryptedText(string entryptedText, string key) //decrypting text with key
{ 
    string decryptedText; 
    for (int i = 0 ; i < entryptedText.size(); i++) 
    { 
        int ch = (entryptedText[i] - key[i] + 26) %26; 
        ch += 65; 
        decryptedText.push_back(ch); 
    } 
    return decryptedText; 
} 


