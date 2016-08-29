#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;
/*Soal Nomer 1*/
long long int soal_a(long long int number)
{
    vector<int> data;
    while(number>0)
    {
        data.push_back(number%10);
        number = number/10;
    }
    sort(data.begin(),data.end());
    reverse(data.begin(),data.end());
    for(int x=0;x<data.size();x++)
    {
        cout << data[x];
    }
    cout << endl;
}
/*Soal Nomer 2*/
long long int soal_b(long long int number)
{
    if(number%2 !=0)
        cout << "Ganjil" << endl;
    else
        cout << "genap" << endl;
}
/*Soal Nomer 3*/
long long int soal_c(long long int number)
{
    cout << pow(2,number) << endl;
}
/*Soal Nomer 4*/
long long int soal_d(long long int number)
{
    for(int x=1;x<=number;x++)
    {
        if(x%2!=0)
            cout << x << " ";
    }
    cout << endl;
}
/*Soal Nomer 5*/
long long int soal_e(long long int number)
{
    int flag = 0;
    for(int x=2;x<=sqrt(number);x++)
    {
        if(number%x == 0)
            flag = 1;
            break;
    }
    if (flag == 1)
        cout << "Is Not Prime" << endl;
    else
        cout << "Prime" << endl;
}

int main()
{
    long long int input_data;
    cin >> input_data;
    soal_a(input_data);
    soal_b(input_data);
    soal_c(input_data);
    soal_d(input_data);
    soal_e(input_data);
}
