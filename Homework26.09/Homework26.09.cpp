#include <iostream>
#include<ctime>
using namespace std;
//Написать функцию, возвращающую среднее арифметическое элементов передаваемого ей одномерного статического массива с типом элементов int.
double Calculate(double sum, int n)
{
   
    return double(sum) / n;
}
//Написать функцию, показывающую на экран минимум и максимум(значение и индекс) среди элементов передаваемого ей одномерного статического массива с типом элементов double.
void Minmax(double array[], int size, double max, double min)
{    
    for (int i = 0; i < size; i++)
    {
        
        if (array[i] > max)
            max = array[i];
        if (array[i] < min)
            min = array[i];
        
    }
    cout << "Max " << max << "\n";
    cout << "Min " << min << "\n";
}
int main()
{
    const int n = 5;
    int arr[n];
    double sum = 0.0;
    
    srand(time(0));   
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 10;
        sum += arr[i];
        cout << arr[i] << ' ';
       
    }
    
    cout << "\n";
    cout << Calculate(sum, n) << "\n";
    ////////////////////////////////////////////////
    const int size = 10;
    double array[size];
    double max;
    double min;
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() / 100.0;
        cout << array[i] << " ";
    }
    max = array[0];
    min = array[0];
    cout << "\n";
    Minmax(array, size, max, min);
}


