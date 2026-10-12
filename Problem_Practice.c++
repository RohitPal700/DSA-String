//Count Vowels and Consonants


#include<iostream>
#include<string>
#include<cctype>

using namespace std ;


/*
int main (){

    string s;

    cout << "Enter the string : "<<endl;

    cin>>s;

    

    int Vowel=0,Consonants=0;


    for (int i = 0; i < s.size(); i++)
    {

        char ch=tolower(s[i]); 
        
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){

            Vowel++;
        }

        else{
            Consonants++;
        }

    }

    cout<<"Vowels: " <<Vowel<<endl;
    cout <<"Consonants: "<< Consonants <<endl;
    
}

*/


// Given a string, reverse it without using the built-in reverse() function.

/*
int main(){

    string s;
    cout << "Enter the the string " <<endl;

    cin>>s;

    int i=0, j=s.size()-1;

    while (i<j)
    {
        swap(s[i],s[j]);

        i++;
        j--;
    }

    cout << s<<endl;
    
}

*/

//Problem 3 — Check Whether a String Is a Palindrome

int main(){

    string s;

    cout<<"Enter the string : " <<endl;

    cin>>s;

    int i =0, j=s.size()-1;

    while (i<j)
    {
        if(s[i]!=s[j]){
        cout << "Not Palindrome" <<endl;
        return 0;
        }
        i++;
        j--;
    }

    cout << "Palindrome "<< endl;

    return 0;
    
}