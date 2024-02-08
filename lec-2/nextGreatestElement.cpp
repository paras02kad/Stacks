#include <bits/stdc++.h>

using namespace std;

/*
! solution-1
! Brute Force Solution
* TC O(n^2)
* SC O(1);
*/

// int main()
// {
//     int arr[] = {3, 1, 2, 5, 4, 6, 2, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int ans[n];
// ans[n-1]=-1;
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = i + 1; j <n; j++)
//         {
//             if (arr[j] > arr[i])
//             {
//                 ans[i] = arr[j];
//                 break;
//             }
//             else
//             {
//                     ans[i] = -1;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << ans[i] << " ";
//     }

//     return 0;
// }

/*
! solution-2
! Brute Force Solution
* TC O(n^2)
* SC O(1);
*/

int main()
{
    int arr[] = {3, 1, 2, 5, 4, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans[n];
    stack<int> st;

    ans[n - 1] = -1;
    st.push(arr[n - 1]);

    for (int i = n - 2; i >= 0; i--)
    {
        while ( st.size()>0 && arr[i] > st.top())
        {
            st.pop();
        }

        if (st.size()==0)
        {
            st.push(-1);
            ans[i] = st.top();
        }
        else ans[i]=st.top();

        st.push(arr[i]);
    }




    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
