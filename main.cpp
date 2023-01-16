#include <iostream>
using namespace std;

int firstDigit(int n)
{
    while (n >= 10)
        n /= 10;

    return n;
}
int smallestDigit(int n) {
    int smallest = 9;
    while (n) {
        int r = n % 10;

        smallest = min(r, smallest);

        n = n / 10;

    }
    return smallest;
}

void print(int arr[], int length)
{
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
}
void sort(int arr[],int length){
    for (int i =0;i<length-1;i++){
        for(int j=i+1;j<length;j++){
            if (firstDigit(arr[i])!= firstDigit(arr[j])){
                if (firstDigit(arr[i])> firstDigit(arr[j])){swap(arr[j],arr[i]);
                cout<<arr[i]<<"  1  "<<arr[j]<<endl;}
            }
            else if (smallestDigit(arr[i])!= smallestDigit(arr[j])){
                if(smallestDigit(arr[i])> smallestDigit(arr[j])){swap(arr[j],arr[i]);
                    cout<<arr[i]<<"  2  "<<arr[j]<<endl;}
            }
            else if (arr[i]>arr[j]){swap(arr[j],arr[i]);
                cout<<arr[i]<<"  3  "<<arr[j]<<endl;}
        }
    }
}

int main()
{
    std::cout << "Enter how many number you want to input: ";
    int length;
    std::cin >> length;
    int *array = new int[length];

    for (int i = 0; i < length; i++) {
        cin >> array[i];
    }

   sort(array,length);
   print (array, length);

   delete[] array;
   return 0;
}
