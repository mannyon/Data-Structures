#include <iostream>
// #include <string.h>
// #include <vector>
// #include <algorithm>

using namespace std;

int findLen(char ch[], int n){
    int i=0;
    while(ch[i]!='\0'){
        i++;
    }
    return i;
}

char func(char ch[], int n){
    int i=0;
    int j = n-1;
    while(i<=j){
        swap(ch[i], ch[j]);
        i++, j--;
    }
    
}

void contverToUppercase(char ch[], int n){
    int index = 0;
    while(ch[index] != '\0'){
        if(ch[index] >= 'a' && ch[index] <= 'z'){
            ch[index] = ch[index] - 'a' + 'A';
        }
        index++;
    }
}

void converToLowercase(char ch[], int n){
    int index = 0;
    while(ch[index]!='\0'){
        if(ch[index] >='A' && ch[index] <= 'Z'){
            ch[index] = ch[index] - 'A' + 'a';
        }
        index++;
    }
}

void replaceAdd(char ch[], int n){
    int index = 0;
    while(ch[index] != '\0'){
        if(ch[index]=='@'){
            ch[index] = ' ';
        }
        index++;
    }
    
}

bool checkPalindrom(char ch[], int n){
    int i = 0;
    int j = n-1;
    while (i<=j){
        if(ch[i]==ch[j]){
            i++, j--;
        }
        else {
            return false;
        }
    }
    return true;
}

int main() {

    string desc = "this is a car, big daddy of all suvs";

    cout<<desc.substr(19, 5)<<endl;
    // string str1 = "Manish";
    // string str2 = "kumar";

    // if(str1.compare(str2)==0){
    //     cout<<"Matching"<<endl;
    // }
    // else {
    //     cout<<"not matching"<<endl;
    // }

    // if(str1.find(str2)==string::npos){
    //     cout<<"not found";
    // }
    // else {
    //     cout<<"found";
    // }

    // cout<<"before appending: "<<endl;
    // cout<<str1<<endl;
    // cout<<str2<<endl;

    // str1.append(str2);

    // cout<<"after appending: "<<endl;
    // cout<<str1<<endl;




    // string name;
    // cout<<"enter"<<endl;
    // cin>>name;

    // cout<<"length: "<<name.length()<<endl;



























    // char ch[100];
    // cout<<"enter"<<endl;

    // string name;

    // // cin>>name;
    // getline(cin, name);

    // cout<<"Printing string: "<<name<<endl;

    // int index = 0;
    // while(name[index] != '\0'){
    //     cout<<"index: "<<index<<" "<<name[index]<<endl;
    //     index++;
    // }

    // int value = (int) name[6];
    // cout<<"value: "<<value<<endl;











    // cin.getline(ch, 100);

    // cout<<"String: "<<ch<<endl;

    // if(checkPalindrom(ch, strlen(ch))){
    //     cout<<"Valid palindrome"<<endl;
    // }
    // else {
    //     cout<<"Invalid palindrome"<<endl;
    // }










    // cout<<"After: "<<ch<<endl;



    // replaceAdd(ch, strlen(ch));
    // contverToUppercase(ch, strlen(ch));
    // converToLowercase(ch, strlen(ch));



    // reverse(ch, ch+strlen(ch));
    // cout<<"reversed order: "<<ch<<endl;
    // func(ch, strlen(ch));
    // cout<<"In reverse order: "<<ch<<endl;

    // int lengthCh = findLen(ch, 100);

    // cout<<"length of ch: "<<lengthCh<<endl;
    // cout<<"length using str: "<<strlen(ch)<<endl;


    // for(int i=0; i<10; i++){
    //     cout<<"At index: "<<i<<" "<<ch[i]<<endl;
    // }

    // char temp = ch[6]; //null character at index 6 when string length is 6 like manish
    // int value = (int)temp;
    // cout<<"Printing the value: "<<value<<endl;
}