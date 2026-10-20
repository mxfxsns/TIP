#include <iostream>
#include <vector>
using namespace std;


int main()
{
    /*
    // Задание 1
    int find;
    vector<int> A {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 19, 19};
    int first = 0, last = A.size(), mid, midval;
    cout << "Enter the number to find: ";
    cin >> find;
    //cout << first + (last - first) ;
    while (first < last)
    {
        //cout << " "<< first<< " " << last<<"\n";
        mid = first + (last - first) / 2;
        midval = A[mid];
        if (midval == find){
            cout << mid + 1;
            return 0;
        } else if (midval > find)
        {
            last = mid;
        } else{
            first = mid+1;
        }
    }
    cout << "Number not found in arr" <<"\n"<<"It can be in position number: "<< last+1 ;
    A.insert(A.begin() + last, find);
    cout << "\nNew array: ";
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << ", ";
    }*/
    
    // Задание 2
    /*
    vector<int> B {};
    int size_arr, num;
    cout << "\nEnter the size of the array (=> 3 elements): ";
    cin >> size_arr;
    while (size_arr < 3)
    {
        cout << "\nEnter the size of the array (=> 3 elements): ";
        cin >> size_arr;
    }
    for (int i =0; i < size_arr; i++)
    {
        cout << "\n Enter number: ";
        cin >> num;
        B.push_back(num);
    }


    int first = 0, last = B.size()-1, mid_peak, peak;
    mid_peak = first + (last - first) / 2;
    while (first <= last && mid_peak != 0 && mid_peak != B.size()-1)
    {
        mid_peak = first + (last - first) / 2;
        peak = B[mid_peak];
        if (mid_peak != 0 &&
        mid_peak != B.size() - 1 &&
        B[mid_peak - 1] < peak &&
        peak > B[mid_peak + 1] ){
            cout << "\n Peak = "<< peak;
            break;
        } else if (mid_peak != B.size() - 1 && peak < B[mid_peak+1])
        {
            first = mid_peak+1;
        } else{
            last = mid_peak-1;
        }
    }
    if (mid_peak == 0 || mid_peak == B.size()-1)
    {
        cout << "\n" << "Thats array isnt mountain array" << "\n";
    }
    */



    // Задание 3
    /*
    vector<int> C {-1, -2, -3, -4, 0, 0, 0, 1, };
    int first = 0, last = C.size()-1, mid, midval;
    int size_arr, num;
    while (first < last)
    {
        mid = first + (last - first) / 2;
        midval = C[mid];
        if (midval == 0 || last - first == 1){
            vector<int> positive(C.begin() + mid+1, C.begin() + C.size());
            vector<int> negative(C.begin() , C.begin() + mid);
            if (positive.size() > negative.size())
            {
                if (positive.front() == 0)
                {
                    positive.erase(positive.begin());
                }
                cout << "Slice of positive array: ";
                for (int i = 0; i < positive.size(); i++)
                {
                    cout << positive[i] << " ";
                }
                cout << "\n";
            }
            else if (positive.size() < negative.size())
            {
                if (negative.back() == 0)
                {
                    negative.pop_back();
                }
                cout << "Slice of negative array: ";
                for (int i = 0; i < negative.size(); i++)
                {
                    cout << negative[i] << " ";
                }
                cout << "\n";
            }
        return 0;
        } else if (midval > 0)
        {
            last = mid;
        } else{
            first = mid+1;
        }
    }
*/
    return 0;
}