switch(Z)
{
    case 1:  cout<<"Enter day : ";
             cin>>day;
             int n;
             if (day == "Monday")
                 n = 1;
             else if (day == "Tuesday")
                 n = 2;
             else if (day == "Wednesday")
                 n = 3;
             else if (day == "Thursday")
                 n = 4;
             else
                 n = 5;
         
             switch (n)
             {
             case 1:
                 b.insert(9, "Monday", 6102, "Mrs Dhanshree Patil", "Lecture");
                 b.insert(10, "Monday", 6102, "Mrs Amruta Patil", "Lecture");
                 b.insert(11, "Monday", 6102, "Mrs Shruti Chudhari", "Lecture");
                 b.insert(12, "Monday", 0, " ", " ");
                 b.insert(1, "Monday", 6119, " Mrs Ashmita", "Lab");
                 b.insert(2, "Monday", 6119, "Mrs Ashmita ", "Lab");
                 cout << "Time : ";
                 cin >> a;
                 cout << endl;
                 cout << "****************************************" << endl;
                 b.search(a);
                 break;
             case 2:
                 b.insert(8, "Tuesday", 6102, "Mrs Dhanshree Patil", "Lecture");
                 b.insert(9, "Tuesday", 6102, "Mrs Swati Chandurkar", "Lecture");
                 b.insert(10, "Tuesday", 6206, "Mrs Dhanshree Patil", "Lab");
                 b.insert(11, "Tuesday", 6206, "Mrs Dhanshree Patil", "Lab");
                 b.insert(12, "Tuesday", 0, " ", " ");
                 b.insert(1, "Tuesday", 6101, "Mrs Amruta Patil", "Lecture");
                 b.insert(2, "Tuesday", 6101, "Mrs Shruti Chaudhari", "Lecture");
                 cout << "Time : ";
                 cin >> a;
                 cout << endl;
                 cout << "****************************************" << endl;
                 b.search(a);
                 break;
         
             case 3:
                 b.insert(9, "Wednesday", 6102, "Mrs Swati Chandurkar", "Lecture");
                 b.insert(10, "Wednesday", 6106, "Mrs Swati Chandurkar", "Lab");
                 b.insert(11, "Wednesday", 6106, "Mrs Swati Chandurkar", "Lab");
                 b.insert(12, "Wednesday", 0, " ", " ");
                 b.insert(1, "Wednesday", 6104, "Mrs Amruta Patil", "Lecture");
                 b.insert(2, "Wednesday", 6104, "Mr Sachin Shende", "Lecture");
                 cout << "Time : ";
                 cin >> a;
                 cout << endl;
                 cout << "****************************************" << endl;
                 b.search(a);
                 break;
             case 4:
                 b.insert(8, "Thrusday", 6104, "Mrs Swati Chandurkar", "Lab");
                 b.insert(9, "Thrusday", 6104, "Mrs Swati Chandurkar", "Lab");
                 b.insert(10, "Thrusday", 6102, "Mrs Shruti Chudhati", "Lecture");
                 b.insert(11, "Thrusday", 6102, "Mrs Swat Chandurkar", "Lecture");
                 b.insert(12, "Thrusday", 0, " ", " ");
                 b.insert(1, "Thrusday", 6102, "Mr Satpal Singh Rajput", "Lecture");
                 b.insert(2, "Thrusday", 6102, "Mra Amruta Patil", "Lecture");
                 cout << "Time : ";
                 cin >> a;
                 cout << endl;
                 cout << "****************************************" << endl;
                 b.search(a);
                 break;
             case 5:
                 b.insert(9, "Friday", 6102, "Mrs Swati Chandurkar", "Lecture");
                 b.insert(10, "Friday", 6102, "Mrs Shruti Chaudhari", "Lecture");
                 b.insert(11, "Friday", 6102, "Mr Satpal Singh Rajput", "Lecture");
                 b.insert(12, "Friday", 0, " ", " ");
                 b.insert(1, "Friday", 6102, "Mr Sachin Shende", "Lecture");
                 b.insert(2, "Friday", 6118, "Mrs Shruti Chaudhari", "Lab");
                 b.insert(3, "Friday", 6118, "Mrs Shruti Chaudhari", "Lab");
                 cout << "Time : ";
                 cin >> a;
                 cout << endl;
                 cout << "****************************************" << endl;
                 b.search(a);
                 break;
             }
             break;

    case 2:  cout<<"Enter day : ";
             cin>>day;
             int n;
             if (day == "Monday")
                 n = 1;
             else if (day == "Tuesday")
                 n = 2;
             else if (day == "Wednesday")
                 n = 3;
             else if (day == "Thursday")
                 n = 4;
             else
                 n = 5;
         
             switch (n)
             {
             case 1:
                 b.insert(9, "Monday", 6102, "Mrs Dhanshree Patil", "Lecture");
                 b.insert(10, "Monday", 6102, "Mrs Amruta Patil", "Lecture");
                 b.insert(11, "Monday", 6102, "Mrs Shruti Chudhari", "Lecture");
                 b.insert(12, "Monday", 0, " ", " ");
                 b.insert(1, "Monday", 6104, " Mrs Swati Chandurkar", "Lab");
                 b.insert(2, "Monday", 6104, " Mrs Swati Chandurkar ", "Lab");
                 cout << "Time : ";
                 cin >> a;
                 cout << endl;
                 cout << "****************************************" << endl;
                 b.search(a);
                 break;
             case 2:
                 b.insert(8, "Tuesday", 6102, "Mrs Dhanshree Patil", "Lecture");
                 b.insert(9, "Tuesday", 6102, "Mrs Swati Chandurkar", "Lecture");
                 b.insert(10, "Tuesday", 6118, "Mrs Shruti Chaudhari", "Lab");
                 b.insert(11, "Tuesday", 6118, "Mrs Shruti Chaudhari", "Lab");
                 b.insert(12, "Tuesday", 0, " ", " ");
                 b.insert(1, "Tuesday", 6101, "Mrs Amruta Patil", "Lecture");
                 b.insert(2, "Tuesday", 6101, "Mrs Shruti Chaudhari", "Lecture");
                 cout << "Time : ";
                 cin >> a;
                 cout << endl;
                 cout << "****************************************" << endl;
                 b.search(a);
                 break;
         
             case 3:
                 b.insert(9, "Wednesday", 6102, "Mrs Swati Chandurkar", "Lecture");
                 b.insert(10, "Wednesday", 6206, "Mrs Dhanshree Patil", "Lab");
                 b.insert(11, "Wednesday", 6206, "Mrs Dhanshree Patil", "Lab");
                 b.insert(12, "Wednesday", 0, " ", " ");
                 b.insert(1, "Wednesday", 6104, "Mrs Amruta Patil", "Lecture");
                 b.insert(2, "Wednesday", 6104, "Mr Sachin Shende", "Lecture");
                 cout << "Time : ";
                 cin >> a;
                 cout << endl;
                 cout << "****************************************" << endl;
                 b.search(a);
                 break;
             case 4:
                 b.insert(8, "Thrusday", 6118, "Mrs Shruti Chaudhari", "Lab");
                 b.insert(9, "Thrusday", 6118, "Mrs Shruti Chaudhari", "Lab");
                 b.insert(10, "Thrusday", 6102, "Mrs Shruti Chudhati", "Lecture");
                 b.insert(11, "Thrusday", 6102, "Mrs Swat Chandurkar", "Lecture");
                 b.insert(12, "Thrusday", 0, " ", " ");
                 b.insert(1, "Thrusday", 6102, "Mr Satpal Singh Rajput", "Lecture");
                 b.insert(2, "Thrusday", 6102, "Mra Amruta Patil", "Lecture");
                 cout << "Time : ";
                 cin >> a;
                 cout << endl;
                 cout << "****************************************" << endl;
                 b.search(a);
                 break;
             case 5:
                 b.insert(9, "Friday", 6102, "Mrs Swati Chandurkar", "Lecture");
                 b.insert(10, "Friday", 6102, "Mrs Shruti Chaudhari", "Lecture");
                 b.insert(11, "Friday", 6102, "Mr Satpal Singh Rajput", "Lecture");
                 b.insert(12, "Friday", 0, " ", " ");
                 b.insert(1, "Friday", 6102, "Mr Sachin Shende", "Lecture");
                 b.insert(2, "Friday", 6104, "Mrs Swati Chandurkar", "Lab");
                 b.insert(3, "Friday", 6104, "Mrs Swati Chandurkar", "Lab");
                 cout << "Time : ";
                 cin >> a;
                 cout << endl;
                 cout << "****************************************" << endl;
                 b.search(a);
                 break;
             }
             break;
    case 3:  cout<<"Enter day : ";
             cin>>day;
             int n;
             if (day == "Monday")
                 n = 1;
             else if (day == "Tuesday")
                 n = 2;
             else if (day == "Wednesday")
                 n = 3;
             else if (day == "Thursday")
                 n = 4;
             else
                 n = 5;
         
             switch (n)
             {
             case 1:
                 b.insert(9, "Monday", 6102, "Mrs Dhanshree Patil", "Lecture");
                 b.insert(10, "Monday", 6102, "Mrs Amruta Patil", "Lecture");
                 b.insert(11, "Monday", 6102, "Mrs Shruti Chudhari", "Lecture");
                 b.insert(12, "Monday", 0, " ", " ");
                 b.insert(1, "Monday", 6118, " Mrs Shruti Chaudhari", "Lab");
                 b.insert(2, "Monday", 6118, "Mrs  Shruti Chaudhari", "Lab");
                 cout << "Time : ";
                 cin >> a;
                 cout << endl;
                 cout << "****************************************" << endl;
                 b.search(a);
                 break;
             case 2:
                 b.insert(8, "Tuesday", 6102, "Mrs Dhanshree Patil", "Lecture");
                 b.insert(9, "Tuesday", 6102, "Mrs Swati Chandurkar", "Lecture");
                 b.insert(10, "Tuesday", 6105, "Mr Chetan Chawhan", "Lab");
                 b.insert(11, "Tuesday", 6105, "Mr Chetan Chawhan", "Lab");
                 b.insert(12, "Tuesday", 0, " ", " ");
                 b.insert(1, "Tuesday", 6101, "Mrs Amruta Patil", "Lecture");
                 b.insert(2, "Tuesday", 6101, "Mrs Shruti Chaudhari", "Lecture");
                 cout << "Time : ";
                 cin >> a;
                 cout << endl;
                 cout << "****************************************" << endl;
                 b.search(a);
                 break;
         
             case 3:
                 b.insert(9, "Wednesday", 6102, "Mrs Swati Chandurkar", "Lecture");
                 b.insert(10, "Wednesday", 6118, "Mrs Shruti Chaudhari", "Lab");
                 b.insert(11, "Wednesday", 6118, "Mrs Shruti Chaudhari", "Lab");
                 b.insert(12, "Wednesday", 0, " ", " ");
                 b.insert(1, "Wednesday", 6104, "Mrs Amruta Patil", "Lecture");
                 b.insert(2, "Wednesday", 6104, "Mr Sachin Shende", "Lecture");
                 cout << "Time : ";
                 cin >> a;
                 cout << endl;
                 cout << "****************************************" << endl;
                 b.search(a);
                 break;
             case 4:
                 b.insert(8, "Thrusday", 6206, "Mrs Dhanshree Patil", "Lab");
                 b.insert(9, "Thrusday", 6206, "Mrs Dhanshree Patil", "Lab");
                 b.insert(10, "Thrusday", 6102, "Mrs Shruti Chudhati", "Lecture");
                 b.insert(11, "Thrusday", 6102, "Mrs Swat Chandurkar", "Lecture");
                 b.insert(12, "Thrusday", 0, " ", " ");
                 b.insert(1, "Thrusday", 6102, "Mr Satpal Singh Rajput", "Lecture");
                 b.insert(2, "Thrusday", 6102, "Mra Amruta Patil", "Lecture");
                 cout << "Time : ";
                 cin >> a;
                 cout << endl;
                 cout << "****************************************" << endl;
                 b.search(a);
                 break;
             case 5:
                 b.insert(9, "Friday", 6102, "Mrs Swati Chandurkar", "Lecture");
                 b.insert(10, "Friday", 6102, "Mrs Shruti Chaudhari", "Lecture");
                 b.insert(11, "Friday", 6102, "Mr Satpal Singh Rajput", "Lecture");
                 b.insert(12, "Friday", 0, " ", " ");
                 b.insert(1, "Friday", 6102, "Mr Sachin Shende", "Lecture");
                 b.insert(2, "Friday", 6115, "Mrs Chetan Chawhan", "Lab");
                 b.insert(3, "Friday", 6115, "Mrs Chetan Chawhan", "Lab");
                 cout << "Time : ";
                 cin >> a;
                 cout << endl;
                 cout << "****************************************" << endl;
                 b.search(a);
                 break;
             }
             break;
                 case 4:  cout<<"Enter day : ";
                         cin>>day;
                         int n;
                         if (day == "Monday")
                             n = 1;
                         else if (day == "Tuesday")
                             n = 2;
                         else if (day == "Wednesday")
                             n = 3;
                         else if (day == "Thursday")
                             n = 4;
                         else
                             n = 5;
                     
                 switch (n)
                 {
                 case 1:
                     b.insert(9, "Monday", 6102, "Mrs Dhanshree Patil", "Lecture");
                     b.insert(10, "Monday", 6102, "Mrs Amruta Patil", "Lecture");
                     b.insert(11, "Monday", 6102, "Mrs Shruti Chudhari", "Lecture");
                     b.insert(12, "Monday", 0, " ", " ");
                     b.insert(1, "Monday", 6206, "Mrs Dhanshree Patil", "Lab");
                     b.insert(2, "Monday", 6206, "Mrs Dhanshree Patil", "Lab");
                     cout << "Time : ";
                     cin >> a;
                     cout << endl;
                     cout << "****************************************" << endl;
                     b.search(a);
                     break;
                 case 2:
                     b.insert(8, "Tuesday", 6102, "Mrs Dhanshree Patil", "Lecture");
                     b.insert(9, "Tuesday", 6102, "Mrs Swati Chandurkar", "Lecture");
                     b.insert(10, "Tuesday", 6104, "Mrs Swati Chandurkar", "Lab");
                     b.insert(11, "Tuesday", 6104, "Mrs Swati Chandurkar", "Lab");
                     b.insert(12, "Tuesday", 0, " ", " ");
                     b.insert(1, "Tuesday", 6101, "Mrs Amruta Patil", "Lecture");
                     b.insert(2, "Tuesday", 6101, "Mrs Shruti Chaudhari", "Lecture");
                     cout << "Time : ";
                     cin >> a;
                     cout << endl;
                     cout << "****************************************" << endl;
                     b.search(a);
                     break;
            
                 case 3:
                     b.insert(9, "Wednesday", 6102, "Mrs Swati Chandurkar", "Lecture");
                     b.insert(10, "Wednesday", 6106, "Mrs Archana Kadam", "Lab");
                     b.insert(11, "Wednesday", 6106, "Mrs Archana Kadam", "Lab");
                     b.insert(12, "Wednesday", 0, " ", " ");
                     b.insert(1, "Wednesday", 6206, "Mrs Amruta Patil", "Lecture");
                     b.insert(2, "Wednesday", 6206, "Mr Sachin Shende", "Lecture");
                     cout << "Time : ";
                     cin >> a;
                     cout << endl;
                     cout << "****************************************" << endl;
                     b.search(a);
                     break;
                 case 4:
                     b.insert(8, "Thrusday", 6119, "Mrs Kavita Kolpe", "Lab");
                     b.insert(9, "Thrusday", 6119, "Mrs Kavita Kolpe", "Lab");
                     b.insert(10, "Thrusday", 6102, "Mrs Shruti Chudhati", "Lecture");
                     b.insert(11, "Thrusday", 6102, "Mrs Swat Chandurkar", "Lecture");
                     b.insert(12, "Thrusday", 0, " ", " ");
                     b.insert(1, "Thrusday", 6102, "Mr Satpal Singh Rajput", "Lecture");
                     b.insert(2, "Thrusday", 6102, "Mra Amruta Patil", "Lecture");
                     cout << "Time : ";
                     cin >> a;
                     cout << endl;
                     cout << "****************************************" << endl;
                     b.search(a);
                     break;
                 case 5:
                     b.insert(9, "Friday", 6102, "Mrs Swati Chandurkar", "Lecture");
                     b.insert(10, "Friday", 6102, "Mrs Shruti Chaudhari", "Lecture");
                     b.insert(11, "Friday", 6102, "Mr Satpal Singh Rajput", "Lecture");
                     b.insert(12, "Friday", 0, " ", " ");
                     b.insert(1, "Friday", 6102, "Mr Sachin Shende", "Lecture");
                     b.insert(2, "Friday", 6119, "Mrs Kavita Kolpe", "Lab");
                     b.insert(3, "Friday", 6119, "Mrs Kavita Kolpe", "Lab");
                     cout << "Time : ";
                     cin >> a;
                     cout << endl;
                     cout << "****************************************" << endl;
                     b.search(a);
                     break;
                
        }  
        break;  

}