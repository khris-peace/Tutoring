#include <iostream>

using namespace std;

int main()
{
    double a; // введенное (начальное) число
    double eps; // точность вычисления
    int ch, zn; // числитель и знаменатель
    cout << "Введите десятичную дробь, которую необходимо перевести в обыкновенную";
    cin >> a;
    cout << "Введите точность вычисления (подсказка: точность вычисления должна содержать не меньше цифр после запятой, чем само число";
    cin >> eps;
    int i = 1;
    ch = 0;
    while (ch == 0)
    {
        i = i*10;
        if (i*a-((int)(i*a))<eps)
        {
            ch = (int) (i*a);
            zn = i;
        }
        else {ch = 0;}
    }
    cout << i;
    cout << "the answer:" << ch << "/" << zn; 
    int j = 2;
    while (abs((double)(ch)/(double)(j)-(int)(ch/j))<eps)
    {
        ch = ch/j;
        zn = zn/j;
        //j = 2*j;
    } 
    cout << "the answer:" << ch << "/" << zn;
    int k = 5;
    while (abs((double)(ch)/(double)(k)-(int)(ch/k))<eps)
    {
        ch = ch/k;
        zn = zn/k;
        //k = 5*k;
    } 
    cout << "the answer:" << ch << "/" << zn;
    return 0;
}