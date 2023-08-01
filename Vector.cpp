/* Declare 2 empty vectors of int type.
- Add 10,20 to vector1 and 100,200 to vector2 using push_back() method.
- Display both vectors and it's size using at() method and size() method.
- Declare 2d vector of int type.
- Add vector1 and vector2 dynamically using push_back() method.
- Display the elements in vector_2d using at() method.
- Change vector1.at(0) to 1000.
- Display vector_2d again using at() method.
- Display vector1 and it's size.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vector1;
    vector<int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << "vector1: " << vector1.at(0) << " " << vector1.at(1) << endl;
    cout << "vector1_Size: " << vector1.size() << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "vector2: " << vector2.at(0) << " " << vector2.at(1) << endl;
    cout << "vector2_Size: " << vector1.size() << endl;
    
    vector<vector<int>> vector_2d;
   
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
   
    cout << "vector_2d: " << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << " " << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    cout << "vector_2d_Size: " << vector1.size() << endl;
    
    vector1.at(0) = 1000;
    cout << "vector1: " << vector1.at(0) << " " << vector1.at(1) << endl;
    cout << "vector_2d: " << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << " " << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    cout << "vector1_Size: " << vector1.size() << endl;
    
    return 0;
}

/* Output
vector1: 10 20
vector1_Size: 2
vector2: 100 200
vector2_Size: 2
vector_2d: 10 20 100 200
vector_2d_Size: 2
vector1: 1000 20
vector_2d: 10 20 100 200
vector1_Size: 2
*/

