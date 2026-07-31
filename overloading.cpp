#include <iostream>
using namespace std;
void sum();
int sum(int, int);
float sum(int, int, float);
int main()
{
    int a, b, r1;
    float r2, c;
    cout << "sum function without parameters: "<<endl;
    sum(); // first function calling
    cout << " sum function with 2 parameters: "<<endl;
    cout << "Enter the two numbers: "<<endl;
    cin >> a >> b;
    r1 = sum(a, b);
    cout << " The sum is :" << r1<<endl;
    cout << " sum function with 3 parameters: "<<endl;
    cout << " Enter the three numbers: "<<endl;2
    cin >> a >> b >> c;
    r2 = sum(a, b, c);
    cout << " The sum is :" << r2<<endl;
}
void sum()
{
    int x, y, s;
    cout << "Enter the numbers: "<<endl;
    cin >> x >> y;
    s = x + y;
    cout << "The sum is: " << s<<endl;
}
int sum(int x, int y)
{
    int s = x + y;
    return s;
}
float sum(int x, int y, float z)
{
    float s = x + y + z;
    return (s);
}