
using namespace std;

int main()
{
    int number, sum, average, count = 0; 
 int n;
    while (cin >>n)
     
    {
	    // Prompt user for number to add to sum
	    cout << "Enter a number: " << endl; 
	    cin >> number; 

	    // Compute sum
	    sum += number; 

	    // Increment count
	    count++; 
    }

    // Compute average
    average = sum / count; 

    // Print values
    cout << "Sum: " << sum << endl; 
    cout << "Count: " << count << endl; 
    cout << "Average: " << average << endl; 

    return 0; 
}
