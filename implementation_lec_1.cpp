#include<iostream>
using namespace std;



/*
int main(){
    
    char arr[] = {'a','p','p','l','e'};

    for (int i = 0; i <5; i++)
    {
        cout <<arr[i];
    }
    
    
    


    char arr[20];
    cin >> arr;

    arr[2]='\0'; // \0 is a null charcter Exke agge print nhi hoga 
    cout <<arr<<endl;
    

}

*/

/*
int main()
{   
    //  string s = "Rohit";

    //  cout << s;


    // input from user 

    string s;
    cout << "Enter the string :  "<<endl;



   // cin>>s;

   getline(cin,s);

     cout<<s;
}

*/


// Question 1 Reverse the sting 

int main(){

    string s="rohit";

    //Reverse String 

    int i=0,j=s.size()-1;
    while (i<j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
    }

    cout << s << endl;


    int size =0;

    while (s[size]!='\0')
    {
        size++;
    }

    cout<<endl;
    cout <<size<<" ";
    
    
}