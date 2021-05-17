// https://open.kattis.com/problems/abc

#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int i, nums[3];
    string abc;

    cin >> nums[0] >> nums[1] >> nums[2];
    cin >> abc;

    sort(nums, nums+3);

    if(abc == "ABC") {
        cout << nums[0] << " " << nums[1] << " " << nums[2] << endl;
    }
    if(abc == "ACB") {
        cout << nums[0] << " " << nums[2] << " " << nums[1] << endl;
    }
    if(abc == "BAC") {
        cout << nums[1] << " " << nums[0] << " " << nums[2] << endl;
    }
    if(abc == "BCA") {
        cout << nums[1] << " " << nums[2] << " " << nums[0] << endl;
    }
    if(abc == "CAB") {
        cout << nums[2] << " " << nums[0] << " " << nums[1] << endl;
    }
    if(abc == "CBA") {
        cout << nums[2] << " " << nums[1] << " " << nums[0] << endl;
    }

}
