//! ********** Introduction **********
//! Objective
// This is a simple challenge to help you practice printing to stdout. You may also want to complete Solve Me First in C++ before attempting this challenge.

//We're starting out by printing the most famous computing phrase of all time! In the editor below, use either printf or cout to print the string Hello, World! to stdout.
// The more popular command form is cout. It has the following basic form:
// cout<<value_to_print<<value_to_print;

// Any number of values can be printed using one command as shown.
// The printf command comes from C language. It accepts an optional format specification and a list of variables. Two examples for printing a string are:
// printf("%s", string); printf(string);

//* Note that neither method adds a newline. It only prints what you tell it to.
// Output Format :-  Print Hello, World! to stdout.
// Sample Output :- Hello, World!

//? Output:- 
#include <iostream>
using namespace std;

int main() {
    printf("Hello, World!");
    return 0;
}

//! ********** Input And Output**********
//! Objective
// In this challenge, we practice reading input from stdin and printing output to stdout.

// In C++, you can read a single whitespace-separated token of input using cin, and print output to stdout using cout. For example, let's say we declare the following variables:
// string s;
// int n;
// and we want to use cin to read the input "High 5" from stdin. We can do this with the following code:
// cin >> s >> n;
// This reads the first word ("High") from stdin and saves it as string s, then reads the second word ("5") from stdin and saves it as integer n. If we want to print these values to stdout, separated by a space, we write the following code:
// cout << s << " " << n << endl;
// This code prints the contents of string s, a single space (""), then the integer n. We end our line of output with a newline using endl. This results in the following output:

// High 5
//? Task
// Read 3 numbers from stdin and print their sum to stdout.
//? Input Format
// One line that contains  space-separated integers: , , and .
//* Constraints
//? Output Format
// Print the sum of the three numbers on a single line.
// Sample Input :- 1 2 7
// Sample Output :-  10
//? Explanation
// The sum of the three numbers is 1+2+7.

//? Output:- 
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << a + b + c << endl;
    return 0;
}

//! ********** Basic Data Type **********
//! Objective
// Some C++ data types, their format specifiers, and their most common bit widths are as follows:
// Int ("%d"): 32 , Bit integer Long ("%ld"): 64 , bit integer Char ("%c"): Character type , Float ("%f"): 32 , bit real value Double ("%lf"): 64 , bit real value 

//? Reading
// To read a data type, use the following syntax: scanf("", &val) 
// For example, to read a character followed by a double:
// char ch; 
// double d;
// scanf("%c %lf", &ch, &d); 
// For the moment, we can ignore the spacing between format specifiers.
//? Printing 
// To print a data type, use the following syntax: printf("%s", val)
// For example, to print a character followed by a double:
// char ch = 'd'; 
// double d = 234.432;
// printf("%c %lf", ch, d); 
// *Note: You can also use cin and cout instead of scanf and printf; however, if you are taking a million numbers as input and printing a million lines, it is faster to use scanf and printf.
//? Input Format
// Input consists of the following space-separated values: int, long, char, float, and double, respectively.
//? Output Format
// Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.
//? Sample Input
// 3 12345678912345 a 334.23 14049.30493 
//?Sample Output
// 3 12345678912345 a 334.230 14049.304930000 
//?Explanation
// Print int 3, followed by long  12345678912345, followed by char a, followed by float 334.230, followed by double 14049.304930000.

//? Output :- 
#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;

    cin >> i >> l >> c >> f >> d;

    cout << i << endl;
    cout << l << endl;
    cout << c << endl;
    cout << fixed << setprecision(3) << f << endl;  
    cout << fixed << setprecision(9) << d << endl; 

    return 0;
}


//! ********** Conditional Statement **********
//! Objective
// Given a positive integer , do the following:
// If 1<= n <=9, print the lowercase English word corresponding to the number (e.g., one for , two for , etc.). If n>9 , print Greater than 9. Input Format A single integer, n.
// Constraints:- 1<= n <=9 Output Format If 1<= n <=9, then print the lowercase English word corresponding to the number (e.g., one for1 , two for 2, etc.); otherwise, print Greater than 9.
// Sample Input 0 :- 5 , Sample Output 0 :- five , Explanation 0 :- five is the English word for the number .
// Sample Input 1 :- 8 , Sample Output 1 :- eight , Explanation 1 :- eight is the English word for the number 8.
// Sample Input 2 :- 44 , Sample Output 2 :- Greater than 9 , Explanation 2 :- n = 44 is greater than , so we print Greater than 9. 

//?
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 1 && n <= 9) {
        switch (n) {
            case 1: cout << "one"; break;
            case 2: cout << "two"; break;
            case 3: cout << "three"; break;
            case 4: cout << "four"; break;
            case 5: cout << "five"; break;
            case 6: cout << "six"; break;
            case 7: cout << "seven"; break;
            case 8: cout << "eight"; break;
            case 9: cout << "nine"; break;
        }
    } else {
        cout << "Greater than 9";
    }
    return 0;
}


//! ********** Loops **********
//! Objective
// In this challenge, you will use a for loop to increment a variable through a range.
//? Input Format
// You will be given two positive integers, a and b (a<=b), separated by a newline.
//? Output Format
// For each integer  in the inclusive interval :
// If 1<= n <= 9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
// Else if n>9 and it is an even number, then print "even".
// Else if n>9 and it is an odd number, then print "odd".
// Note: [a,b] = {x ∈ Z | a ≤ x ≤ b} = {a, a + 1, ..., b}
//? Sample Input
// 8
// 11
//? Sample Output
// eight
// nine
// even
// odd

//?
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for (int n = a; n <= b; n++) {
        if (n >= 1 && n <= 9) {
            switch (n) {
                case 1: cout << "one" << endl; break;
                case 2: cout << "two" << endl; break;
                case 3: cout << "three" << endl; break;
                case 4: cout << "four" << endl; break;
                case 5: cout << "five" << endl; break;
                case 6: cout << "six" << endl; break;
                case 7: cout << "seven" << endl; break;
                case 8: cout << "eight" << endl; break;
                case 9: cout << "nine" << endl; break;
            }
        } else {
            if (n % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }
    return 0;
}


//! ********** Functions **********
//! Objective
// Write a function int max_of_four(int a, int b, int c, int d) which returns the maximum of the four arguments it receives.
// += : Add and assignment operator. It adds the right operand to the left operand and assigns the result to the left operand.
// a += b is equivalent to a = a + b;
//? Input Format
// Input will contain four integers - a,b,c,d , one per line.

//? Output Format
// Return the greatest of the four integers.
// PS: I/O will be automatically handled.
//? Sample Input
// 3
// 4
// 6
// 5
//? Sample Output
// 6

//?
#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    int max_val = a; 
    if (b > max_val) {
        max_val = b; 
    }
    if (c > max_val) {
        max_val = c; 
    }
    if (d > max_val) {
        max_val = d; 
    }
    return max_val; 
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d; 
    cout << max_of_four(a, b, c, d) << endl; 
    return 0;
}


//! ********** Pointers **********
//! Objective
//? Function Description
// Complete the update function in the editor below.
// update has the following parameters:
// int *a: an integer
// int *b: an integer
//? Returns
// The function is declared with a void return type, so there is no value to return. Modify the values in memory so that  contains their sum and  contains their absoluted difference.
// a* = a + b
// b* = a - b
//? Input Format
// Input will contain two integers, a and b,separated by a newline.
//? Sample Input
// 4
// 5
//? Sample Output
// 9
// 1
//? Explanation
// a* = 4+5 = 9
// b* = |4-5| = 1

//?
#include <iostream>
#include <cmath> 
using namespace std;

void update(int *a, int *b) {
    int tempA = *a;      
    *a = *a + *b;         
    *b = abs(tempA - *b); 
}

int main() {
    int a, b;

    cin >> a >> b;
    update(&a, &b);

    cout << a << endl;
    cout << b << endl;

    return 0;
}



//! ********** Arrays **********
//! Objective
// You will be given an array of  integers and you have to print the integers in the reverse order.
//? Input Format
// The first line of the input contains N,where N is the number of integers.The next line contains N space-separated integers.
//? Constraints
// 1 <= N <= 1000
// 1 <= A[i] <= 10000, where A[i] is the ith integer in the array.
//? Output Format
// Print the  integers of the array in the reverse order, space-separated on a single line.
//? Sample Input
// 4
// 1 4 3 2
//? Sample Output
// 2 3 4 1

//?
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> array(N);
    for (int i = 0; i < N; ++i) {
        cin >> array[i];
    }
    for (int i = N - 1; i >= 0; --i) {
        cout << array[i] << " ";
    }
    return 0;
}


//! ********** Variable Sized Arrays **********
//! Objective
// Consider an n-element array,a, where each index i in the array contains a reference to an array of k integers (where the value of k varies from array to array). See the Explanation section below for a diagram.
// Given a, you must answer  queries. Each query is in the format i j, where  denotes an index in array a and j denotes an index in the array located at a[i]. For each query, find and print the value of element j in the array at location a[i] on a new line.

//? Input Format
// The first line contains two space-separated integers denoting the respective values of  (the number of variable-length arrays) and  q(the number of queries).
// Each line i of the n subsequent lines contains a space-separated sequence in the format k a[i]0 a[i]1 … a[i]k-1 describing the k-element array located at a[i].
// Each of the q subsequent lines contains two space-separated integers describing the respective values of i (an index in array a) and j (an index in the array referenced by a[i]) for a query.

//? Constraints
// 1<=n<=10^5
// 1<=q<=10^5
// 1<=k<=3.10^5
// 1<=∫k<=3.10^5
// 1<=i<=n
// 1<=j<=k
// All indices in this challenge are zero-based.
// All the given numbers are non negative and are not greater than 10^6

//? Output Format
// For each pair of i and j values (i.e., for each query), print a single integer that denotes the element located at index  of the array referenced by a[i]. There should be a total of q lines of output.

//? Sample Input
// 2 2
// 3 1 5 4
// 5 1 2 8 9 3
// 0 1
// 1 3

//? Sample Output
// 5
// 9

//?
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<vector<int>> a(n);

    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        a[i].resize(k);
        for (int j = 0; j < k; ++j) {
            cin >> a[i][j];
        }
    }

    for (int x = 0; x < q; ++x) {
        int i, j;
        cin >> i >> j;
        cout << a[i][j] << endl;
    }
    return 0;
}


//! ********** StringStream **********
//! Objective
//? Function Description
// Complete the  function in the editor below.parseInts has the following parameters:
// string str: a string of comma separated integers
//? Returns
// vector<int>: a vector of the parsed integers.
//* Note: You can learn to push elements onto a vector by solving the first problem in the STL chapter.

//? Input Format
// There is one line of ( n ) integers separated by commas.
//? Constraints
// The length of  is less than ( 8 * 10^5 ).
//? Sample Input
// 23,4,56
//? Sample Output
// 23
// 4
// 56

//?
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<int> parseInts(const string &str) {
    vector<int> result;
    stringstream ss(str);
    char comma;
    int number;

    while (ss >> number) {
        result.push_back(number);
        ss >> comma; 
    }

    return result;
}

int main() {
    string input;
    getline(cin, input); 

    vector<int> integers = parseInts(input);

    for (int num : integers) {
        cout << num << endl;
    }

    return 0;
}