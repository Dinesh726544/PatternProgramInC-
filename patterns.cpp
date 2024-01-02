#include<bits/stdc++.h>
using namespace std;
void pattern1(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    //Time complexity
// The code snippet contains nested for loops. The outer loop runs for n iterations, and the inner loop also runs for n iterations. Therefore, the total number of iterations is n * n = n^2. Hence, the runtime complexity of the code is O(n^2).


// Space Complexity:
// The space complexity is O(1) or constant. This is because the amount of additional memory used by the program does not depend on the input size "n." The only variables used are i and j, which are of constant size, and they do not increase with the input size. The cout << "* "; statement prints a fixed string, and the space used by it is also constant. Therefore, the space complexity is O(1).
}

void pattern2( int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Time complexity : o(n^2)
    // Space complexity : o(1)
}
int main()
{
    int t;
    cout << "no of test cases";
    cin >> t;
    while(t>0)
    {
        int n;
        cout << "no of rows";
        cin >> n;
        pattern1(n);
        pattern2(n);
        t--;
    }
    return 0;
}


