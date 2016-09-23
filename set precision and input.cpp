   
    // Declare second integer, double, and String variables.
    int second;
    double third;
    string fourth;
    
    // Read and save an integer, double, and String to your variables.
    cin  >> second;
    cin >>  third;
    cin.ignore();
    getline(cin,fourth);
    
    // Print the sum of both integer variables on a new line.
    cout << i+second<<endl;
    // Print the sum of the double variables on a new line.
    cout << setprecision(1)<< fixed <<d+third<< endl;
    // Concatenate and print the String variables on a new line
    cout << s << fourth << endl;
    // The 's' variable above should be printed first.