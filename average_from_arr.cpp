double is_even(int arr[], int &size);
int my_arr[] = {0,100, -3, 14, 15, -20};

int main(){
    int n;
    double v;

    n = sizeof(my_arr)/sizeof(my_arr[0]);
    v = is_even(my_arr,n);
    cout << v << "\n";
    return 0;
}

double is_even(int arr[], int &size) {
    int counter = 0;
    for (int i=0; i< size; i++) {
        counter += arr[i];
    }
    cout << counter << '\n';
    cout << size << '\n';
    return static_cast<double>(counter)/size;
}
