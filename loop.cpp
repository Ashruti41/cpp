/* Display a menu option for the use
P- Print number - check if the list is empty print the message "[]- list is empty" else print the list in the [].
A- Add number
M- Display mean of the number
S- Display the smallest number
L- Display the largest number
Q- Quit
enter your choice and if wrong choice enter print the message "Unknown selection, please try again!" and menu options should be displayed repetedly. 
*/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nu = {1,2,3};
    char op{};
    
    do{
        cout << "P- Print number" << endl;
        cout << "A- Add number" << endl;
        cout << "M- Display mean of the number" << endl;
        cout << "S- Display the smallest number" << endl;
        cout << "L- Display the largest number" << endl;
        cout << "Q- Quit" << endl;
        cin >> op;
        if(op == 'P' || op == 'p')
        {
            if(nu.size() == 0)
            {
                cout << "[] - the list is empty" << endl;
            }
            else
            {
                cout << "[ ";
                for(auto i:nu)
                {
                    cout << i << " ";
                }
                cout << "]" << endl;
            }
        }
        else if (op == 'A' || op == 'a')
        {
            int num;
            cin >> num;
            nu.push_back(num);
        }
        else if (op == 'M' || op == 'm')
        {
            int sum{};
            for(auto i:nu)
            sum += i;
            cout << "mean is: " << sum/nu.size() << endl;
        }
        else if(op == 'S'|| op == 's')
        {
            cout << "min_element: " << *min_element(nu.begin(), nu.end()) << endl;
        }
        else if (op == 'L' || op == 'l')
        {
            cout << "max_element: " << *max_element(nu.begin(), nu.end()) << endl;
        }
        else
        {
            cout << "Unknon selection ,please try again!";
        }
    }while(op != 'q' || op != 'Q');
    
    return 0;
}
