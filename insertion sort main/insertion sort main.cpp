#include <iostream>
using namespace std; // this means that you do not need to start the line with std
int main(int argc, char** argv)
{
    unsigned int n = 0;
    cout << "Hello this is a test of the buble sort in c++! please enter the size of the unordered array: ";
    cin >> n;
    cout << "You have chosen for the array to be: " << n << "\n";
    int* insertion_array = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Please enter the: " << i + 1 << " item in the list ";
        int x = 0;
        cin >> x;
        insertion_array[i] = x;
    } //getting all user inputs! insertion sort starts here!
    int current_item = 0;

    for (int i = 0; i < n; i++) {
        current_item = insertion_array[i];
        int j = i;
        while (j > 0 and insertion_array[j - 1] > current_item){
            insertion_array[j] = insertion_array[j - 1];
            j = j - 1;
        }
        insertion_array[j] = current_item;
    }


    cout << "The sorted array is: "; //outputting the sorted array
    for (int i = 0; i < n; i++) {
        if (i + 1 == n) {
            cout << insertion_array[i];
        }
        else {
            cout << insertion_array[i] << ",";
        }
    }

}
