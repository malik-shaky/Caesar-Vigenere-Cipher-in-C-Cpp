#include"ceaser.h"
#include"vignere.h"
#include<iostream>
#include<string>
using namespace std;
int main ()
{
    do
    {
        char s;
		int choice;
		cout<<"\t\tChoice\t\t"<<endl;
		cout<<"1 for Ceaser Cipher \n2 for Vignere Cipher"<<endl;
		cin>>choice;
		if(choice==1)  //FOR CEASER CIPHER
        {
            string text;
            int key;
            cout<<"Enter Plaintext: \n";
            cin>>text;
            cout<<"Enter Key: "<<endl;
            cin>>key;
            for(int i=0;i<=text.length();i++)
            {
                if(text[i]>='A' && text[i]<='Z' || text[i]>='a' && text[i]<='z' )
                {
                    text[i]=toupper(text[i]);
                }
            }
            string cipherText = encryptedText(text, key);
            cout << "Ciphertext is: " << cipherText <<endl;
            cout << "Decrypted Text is: " << decryptedText(cipherText, key) << endl;
        }

        else if(choice==2) //FOR VIGNERE CIPHER
		{
            string text;
            string keyword;
            cout<<"Enter Plaintext: \n";
            cin>>text;
            cout<<"Enter Key: "<<endl;
            cin>>keyword;
            for(int i=0;i<=text.length();i++)
            {
                if(text[i]>='A' && text[i]<='Z' || text[i]>='a' && text[i]<='z' )
                {
                    text[i]=toupper(text[i]);
                }

            }
            for(int i=0;i<=keyword.length();i++)
            {
                keyword[i]=toupper(keyword[i]);
            }
            string key1 = key(keyword,text);
            string cipherText = encryptedText(text, key1);
            cout << "Ciphertext is: " << cipherText <<endl;
            cout << "Decrypted Text is: " << decryptedText(cipherText, key1) << endl;
        }

        else
        {
            cout<<"Please enter a valid choice... "<<endl;
        }
        cout << "If you want to continue then press Y: " ;
        cin >> s;
        if(s == 'y' || s == 'Y')
        continue;

        else
        {
            cout << "Exiting from the program...";
            break;
        }
        }

        while (true);
}
