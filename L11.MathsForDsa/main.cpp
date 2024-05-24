#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<bool>Sieve(int n){
    vector<bool>sieve(n+1, true);
    sieve[0] = sieve[1] = false;

    for(int i=0; i*i<=n; i++){ //optimization 2
        if(sieve[i]==true){
            // int j = i*2;
            int j = i*i; //optimisation 1
            while(j<=n){
                sieve[j]=false;
                j+=i;
            }
        }
    }
    return sieve;
}

int main() {
    //************** TC - nlog(logn) *************
    vector<bool>sieve = Sieve(13);
    for(int i=0; i<=13; i++){
        if(sieve[i]){
            cout<<i<<" ";
        }
    }
}