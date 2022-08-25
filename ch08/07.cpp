template <typename T>
T SumArray(T arr[], int n)
{
    using namespace std;
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

template <typename T>
T SumArray(T* arr[], int n)
{
    using namespace std;
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += *arr[i];
    }
    return sum;
}
