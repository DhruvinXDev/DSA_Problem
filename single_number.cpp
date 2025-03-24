/*

136. Single Number

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,1]

Output: 1

Example 2:

Input: nums = [4,1,2,1,2]

Output: 4

Example 3:

Input: nums = [1]

Output: 1

 

Constraints:

1 <= nums.length <= 3 * 104
-3 * 104 <= nums[i] <= 3 * 104
Each element in the array appears twice except for one element which appears only once.


#include<iostream>
#include <vector>
using namespace std;

int main ( )
{
    vector<int> vect ={1,2,3,4,5} ;
    cout <<"Size of vector is : "<<vect.size( )<<endl;

    //vect.size() to get size of vector

    //for each loop
    for( int i : vect ) // hear i is int because vect is int
    {
        cout << i <<endl; //print all the value of the vect
    }
    return 0;
}

*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(auto i : nums)
        {
            ans ^= i;
        }
        return ans;
    }
};
