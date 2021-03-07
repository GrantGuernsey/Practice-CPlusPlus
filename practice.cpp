#include <iostream> 
#include <string>
#include <cmath>
using namespace std;

int smallerNums(int nums[], int len, int smallerNums[])
{
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len; j++)
        {
            if(j!=i)
            {
                if(nums[j] < nums[i])
                {
                    smallerNums[i] = smallerNums[i] + 1;
                }
            }
        }
       
    }
    return 1;
}


int reverseDigit(int x)
{
    int reversedNumber = 0;
    int n = 0;
    while(x!=0)
    {
        n = x%10;
        reversedNumber = reversedNumber * 10 + n;
        x = (x - n) / 10;
    }
    return reversedNumber;
}

int nthFibNumber(int first, int second, int n)
{
    int holder = 0;
    for(int i = 2 ; i < n; i++)
    {
        holder = second;
        second = second + first;
        first = holder;
    }
    return second;
}

int closestInt(double first,double second)
{
    first = fabs(first);
    second = fabs(second);
    double sum = first + second;
    if(fmod(sum,1) < 0.5)
    {
        return sum - fmod(sum,1);
    }
    else{
        return sum + (1 - fmod(sum,1));
    }


}

void plot(int sales, int number)
{
    sales /= 100;
    cout << "Store " << number << ": ";

    for(int i = 0; i < sales; i++)
    {
        cout << "*";
    }
    cout << endl;

}
void graph()
{
    int one;
    int two;
    int three;
    int four;
    int five;
    cout << "Enter today's sales for the store 1: ";
    cin >> one;
    cout << "Enter today's sales for the store 2: ";
    cin >> two;
    cout << "Enter today's sales for the store 3: ";
    cin >> three;
    cout << "Enter today's sales for the store 4: ";
    cin >> four;
    cout << "Enter today's sales for the store 5: ";
    cin >> five;
    
    plot(one,1);
    plot(two,2);
    plot(three,3);
    plot(four,4);
    plot(five,5);

}

void bankSavings()
{
    double intrest;
    cout << "Enter the intrest rate for the year: ";
    cin >> intrest;
    double starting;
    cout << "Enter the starting amount: ";
    cin >> starting;
    int months;
    cout << "Enter the number of months: ";
    cin >> months;
    double deposit;
    cout << "Enter the amount depositied during the month: ";
    cin >> deposit;
    double withdrawn;
    cout << "Enter the amount withdrawn during the month: ";
    cin >> withdrawn;
    double intrestSum;
    double depositSum;
    double withdrawnSum;

    for(int i = 0; i<months ; i++)
    {
        intrest = intrest / 12;
        intrestSum = starting * intrest;
        starting = starting * intrest + starting + deposit + withdrawn;
        depositSum += deposit;
        withdrawnSum += withdrawn;
        cout << "Enter the amount depositied during the month: ";
        cin >> deposit;
        cout << "Enter the amount withdrawn during the month: ";
        cin >> withdrawn;\
    }

}

double getLength()
{
    int x;
    cout << "Enter the length of the rectangle ";
    cin >> x;
    return x;
}
double getWidth()
{
    int x;
    cout << "Enter the width of the rectangle ";
    cin >> x;
    return x;
}
double getArea(int length, int width)
{
    return length * width;
}
void displayData()
{
    double l = getLength();
    double w =getWidth();
    double a = getArea(l,w);
    cout << "The length and with of the rectangle are " << l << " for the length and "
        << w << " for the width and the area is " << a;
}

int maxOfFour(int one, int two, int three, int four)
{
    if(one > two && one > three &&  one > four )
    {
        return one;
    }
    else if(two > three && two > four)
    {
        return two;
    }
    else if(three > four)
    {
        return three;
    }
    else
    {
        return four;
    }
}

double Voltage( double current, double resistance)
{
    return current * resistance;
}
double Current(double voltage, double resistance)
{
    return voltage /resistance;
}
double Resistance(double voltage, double current)
{
    return voltage / current;
}


void sort(int a, int b, int c)
{
    if(a > b)
    {
        if(a > c)
        {
            if(b>c)
            {
                cout << c << "\t" << b << "\t" << a << endl;
            }
            else{
                cout << b << "\t" << c << "\t" << a << endl;
            }
        }
        else 
        {
            cout << b << "\t" << a << "\t" << c << endl; 
        }
    }
    else if(b > c)
    {
        if(a<c)
        {
            cout << a << "\t" << c << "\t" << b << endl;
        }
        else{
            cout << c << "\t" << a << "\t" << b << endl;
        }
    }
    else 
    {
        cout << a << "\t" << b << "\t" << c << endl;
    }
}




int main()
{
    displayData();
    sort(700,4,5);
}
