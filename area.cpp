#include <bits/stdc++.h>
using namespace std;
float area(int &r){ 
    float calculate= 3.14*r*r;
    return calculate;
    }
    int main(){
        int b;
        cin >>b;
        cout<<"area is :"<< area(b);
        return 0;
        }
/*    
#include <bits/stdc++.h>
using namespace std;

float area(int &r) { 
    float calculate = 3.14 * r * r;
    return calculate;  // Correctly return the calculated area
}

int main() {
    int b;
    cin >> b;  // Input radius
    cout << "Area is: " << area(b);  // Call the area function and display the result
    return 0;  // Ensure the main function returns an int
}
*/