#include <bits/stdc++.h> // Include the standard library for C++ which contains various useful functions and data structures.

using namespace std; // Use the standard namespace to avoid writing "std::" before standard library functions and objects.

string ltrim(const string &); // Declare a function prototype for left trimming a string.
string rtrim(const string &); // Declare a function prototype for right trimming a string.
vector<string> split(const string &); // Declare a function prototype for splitting a string into tokens.

/*
 * Complete the 'waiter' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY number
 *  2. INTEGER q
 */
bool isPrime(int n){ // Define a function to check if a number is prime.
   
    if (n <= 1) // If the number is less than or equal to 1, it is not prime.
        return false;
    else if (n == 2) // If the number is 2, it is prime.
        return true;
    else if (n % 2 == 0) // If the number is even, it is not prime.
        return false;
    for (int i = 3; i <= sqrt(n); i += 2) // Check divisibility of the number from 3 to square root of the number, skipping even numbers.
    {
        if (n % i == 0) // If the number is divisible by any other number, it is not prime.
            return false;
    }   
    return true; // If the number is not divisible by any other number, it is prime.
}

vector<int> waiter(vector<int> number, int q) { // Define the waiter function which takes an array of numbers and an integer q as parameters and returns an array of integers.
    vector<int> a; // Declare an empty vector a.
    vector<int> b; // Declare an empty vector b.
    vector<int> c; // Declare an empty vector c.
    vector<int> d; // Declare an empty vector d.
    int count=0; // Initialize a counter variable to 0.
    int m=number.size(); // Get the size of the input number array.
    for(int i = 1; count<q; i++) // Iterate from 1 until the counter reaches q.
    {
       
        if(isPrime(i)) // If the current number is prime.
        {
            c.push_back(i); // Add the current number to vector c.
            count++; // Increment the counter.
        }
    }
    int n=c.size(); // Get the size of vector c.
    for(int i=0;i<n;i++) // Iterate through vector c.
    {
        for(int j=number.size()-1;j>=0;j--) // Iterate through the input number array in reverse order.
        {
            if(number[j]%c[i]==0) // If the current number in the array is divisible by the current prime number.
            {
                b.push_back(number[j]); // Add the current number to vector b.
                      
            }
            else
            {   
                a.push_back(number[j]); // Add the current number to vector a.
            }
        }
        number.clear(); // Clear the input number array.
        for(int t=0;t<b.size();t++) // Iterate through vector b.
        {
            d.push_back(b[b.size()-t-1]); // Add the numbers from vector b to vector d in reverse order.
                
        }
        for(int k=0;k<a.size();k++) // Iterate through vector a.
        {
                
            if(i>=n-1) // If it is the last iteration of the outer loop.
            {
                d.push_back(a[a.size()-k-1]); // Add the numbers from vector a to vector d in reverse order.
            }
        }
        number=a; // Assign vector a to the input number array.
        a.clear(); // Clear vector a.
        b.clear(); // Clear vector b.   
    }
    return d; // Return vector d.  

}

int main() { // The entry point of the program.
    ofstream fout(getenv("OUTPUT_PATH")); // Open a file for writing the output.

    string first_multiple_input_temp; // Declare a string variable to store the first line of input.
    getline(cin, first_multiple_input_temp); // Read the first line of input.

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp)); // Split the first line of input into tokens.

    int n = stoi(first_multiple_input[0]); // Convert the first token to an integer and assign it to n.

    int q = stoi(first_multiple_input[1]); // Convert the second token to an integer and assign it to q.

    string number_temp_temp; // Declare a string variable to store the second line of input.
    getline(cin, number_temp_temp); // Read the second line of input.

    vector<string> number_temp = split(rtrim(number_temp_temp)); // Split the second line of input into tokens.

    vector<int> number(n); // Declare a vector of integers with size n.

    for (int i = 0; i < n; i++) { // Iterate from 0 to n-1.
        int number_item = stoi(number_temp[i]); // Convert the current token to an integer.

        number[i] = number_item; // Assign the integer to the corresponding index in the number vector.
    }

    vector<int> result = waiter(number, q); // Call the waiter function with the number vector and q as arguments and assign the result to a vector.

    for (size_t i = 0; i < result.size(); i++) { // Iterate through the result vector.
        fout << result[i]; // Write the current element to the output file.

        if (i != result.size() - 1) { // If it is not the last element.
            fout << "\n"; // Write a newline character to the output file.
        }
    }

    fout << "\n"; // Write a newline character to the output file.

    fout.close(); // Close the output file.

    return 0; // Exit the program.
}

string ltrim(const string &str) { // Define the function to left trim a string.
    string s(str); // Create a copy of the input string.

    s.erase( // Erase the leading whitespace characters.
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s; // Return the trimmed string.
}

string rtrim(const string &str) { // Define the function to right trim a string.
    string s(str); // Create a copy of the input string.

    s.erase( // Erase the trailing whitespace characters.
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s; // Return the trimmed string.
}

vector<string> split(const string &str) { // Define the function to split a string into tokens.
    vector<string> tokens; // Declare an empty vector to store the tokens.

    string::size_type start = 0; // Initialize the start index of a token.
    string::size_type end = 0; // Initialize the end index of a token.

    while ((end = str.find(" ", start)) != string::npos) { // Find the next occurrence of a space character.
        tokens.push_back(str.substr(start, end - start)); // Extract the token from the string and add it to the vector.

        start = end + 1; // Update the start index for the next token.
    }

    tokens.push_back(str.substr(start)); // Add the last token to the vector.

    return tokens; // Return the vector of tokens.
}
