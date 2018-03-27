//FCI - Programming 1 - 2018 - assignment 2
//program name: affine cypher .cpp
//last modification date : 28/2/2018
//author and ID  and group : mariam osama abdelaziz .. 20170280 ... G-11

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x,a=5,b=8,c=21,z;
    string cipher;
    char message[1000];
    cout<<"ahlan ya user ya habibi "<<endl;
    cout<<"what do you like to do today"<<endl;
    cout<<" 1- Cipher a message"<<endl<<" 2- Decipher a message "<<endl<<" 3- End"<<endl;
    cin>>x;
    char y[53]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','r','s','t','u','v','w','x','y','z'};


    if (x==1)
    {
        cout<<"please enter a message to cypher : ";
        cin.ignore();
        cin.getline(message,1000);


        for(int i=0; i < (sizeof(message) / sizeof(y)); i++)
        {
            for(int j = 0; j < 53; ++j)
            {
                if (message[i]== y[j])
                {
                    z =(a*j+b)%26;

                    cipher += y[z];
                }
            }

        }
           cout<<cipher;
    }
    if (x==2)
    {
        cout << "please enter a message to decipher : ";
         cin.ignore();
        cin.getline(message,1000);
                for(int i=0; i <(sizeof(message)/sizeof(y)) ; i++)
        {
            for(int j = 0; j < 53; ++j)
            {
                if (message[i]== y[j])
                {
                    z =(c*(j-b))%26;
                    cipher += y[z];
                }
            }

        }
           cout<<cipher;
    }
    if (x==3)
        return 0;

    return 0;
}
