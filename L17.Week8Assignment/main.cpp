#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int winner(vector<bool>&person, int n, int ind, int personLeft, int k){

    if(personLeft == 1){
        for(int i=0; i<person.size(); i++){
            if(person[i]==0){
                return i;
            }
        }
    }

    int kill = (k-1) % personLeft;

    while(kill--){
        ind = (ind + 1) % n;
        while(person[ind] == 1){
            ind = (ind + 1) % n;
        }
    }

    person[ind] = 1;

    while(person[ind] == 1){
        ind = (ind+1) % n;
    }

    return winner(person, n, ind, personLeft-1, k);
}

int main()
{
   int n = 5;
   int k = 3;
   int personLeft = n;
   vector<bool>person(n, 0);
   cout<<winner(person, n, 0, personLeft, k);
}