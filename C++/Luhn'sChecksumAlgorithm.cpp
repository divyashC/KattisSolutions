// https://open.kattis.com/problems/luhnchecksum

#include <iostream>
#include <sstream>

using namespace std;

int main () {

    int i, j, n, sum, prod, numsize, temp, num;
    string input;


    cin >> n;

    for (i=0; i<n; i++){

        cin >> input;

        stringstream name(input);

        name >> num;

        numsize=input.length();
        sum=0;

        int arr[numsize];
        for (j=(numsize-1); j>=0; j--){
            arr[j]=num%10;
            num/=10;
        }

        for (j=0; j<numsize; j++){

            if (j%2!=0){
                prod=2*arr[j];
                if (prod>9){
                    sum = sum + (prod%10) + (prod/10);
                }
                else {
                    sum += prod;
                }
            }

            else {
                sum +=arr[j];
            }
        }

        if (sum%10 == 0){
            cout << "PASS" << endl;
        }

        else {
            cout << "FAIL" << endl;
        }

    }

}
