#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
//Chitra Nayal, Mithun Kumar, Shivam Kushik, 04-06-2019, Sum of two large numbers
//Retrieved from https://www.geeksforgeeks.org/sum-two-large-numbers/

string Add(string a, string b) {
    // Before proceeding further, make sure length of str2 is larger.
    if (a.length() > b.length())
            swap(a, b);

    string result = "";

    // Calculate length of both string
    int n1 = a.length();
    int n2 = b.length();

    // Reverse both of strings
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int carry = 0;
    for (int i = 0; i < n1; i++) {
        // Do school mathematics, compute sum of current digits and carry
        int sum = ((a[i] - '0') + (b[i] - '0') + carry);
        result.push_back(sum % 10 + '0');
        // Calculate carry for next step
        carry = sum / 10;
    }

    // Add remaining digits of larger number
    for (int i = n1; i < n2; i++) {
        int sum = ((b[i] - '0') + carry);
        result.push_back(sum % 10 + '0');
        carry = sum / 10;
    }

    // Add remaining carry
    if (carry)
        result.push_back(carry + '0');

    // reverse resultant string
    reverse(result.begin(), result.end());

    return result;
}
int main(void) {

    string number1, number2, sum;

    cout<<"Enter two integers: \n";
    cin >> number1 >> number2;

    int iter;
    cout<<"How many iterations: \n";
    cin >> iter;

    for(int i = 1; i <= iter; ++i){
        if(i % 50 != 0)
            continue;
        clock_t begin = clock();
        for(int j = 1; j <= i; ++j){
            sum = Add(number1, number2);
        }
        clock_t end = clock();
        double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

        //cout<<number1<<" + "<<number2<<" = "<<sum<<"\n";
        cout<<"Total time for "<<i<<" number of addition: "<<fixed<<setprecision(6)<<time_spent<<"\n";
    }
    return 0;
}

