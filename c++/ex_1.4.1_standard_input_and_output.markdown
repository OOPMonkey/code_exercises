# 1.4.1 Exercises: Standard Input and Output

## Using Example 1.2 (io.cpp), do the following experiments:

### First, compile and run it, to see its normal behavior.
	- Complete
### What happens if you enter a non-numeric value for the birth year?
	- The current year gets entered as the age.
### What happens if you enter a name like `Curious George` as your name?
	- Curious gets entered as the name and George gets entered as the age.
### What happens if you remove the following line?  `using namespace std;`
	- string, cin, cout, flush, endl aren't recognized.
### Replace the statement `cin >> yourName;` with the statement `getline(cin, yourName);` and try `Curious George` again.
	- It now works!
### Can you explain the difference in behavior between `cin >>` and `getline()`? (We discuss this in Section 1.8)
	- cin only gets the string up until the space where as getline (as it implies) will get the whole line.
### Add some more questions to the program that require a variety of numerical and string answers and test the results.
