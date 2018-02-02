	#include<bits/stdc++.h>
	using namespace std;

	class management 
	{
	  public: 
	 
	  int id;
	  string name;
	  string email;
	  string department;
    };

	int main()
	{
		
	  vector<management> arr(1000);
	  int n;
	  cout<<"Number of the student in the list \n";
	  cin>>n;
	  for(int i=0;i<n;i++)
	  {
	  	 cout<<"Enter id name email department following a space for example : 1, ram ,ram@g.com, it \n";
	  	 cin>>arr[i].id>>arr[i].name>>arr[i].email>>arr[i].department;
	  }
	  
	  cout<<"Enter the number to see the data by is basis\n";
	  int t;
	  cin>>t;
	  for(int i=0;i<n;i++)
	  {
	  	if(arr[i].id ==t )
	  	{
	  	   cout<<"Acording to the current id the data are as follows\n";
	  	   cout<<"Name of the student is "<<arr[i].name<<endl;
	  	   cout<<"Email of the student is "<<arr[i].email<<endl;
	  	   cout<<"Department of the student is "<<arr[i].department<<endl;
	  	   cout<<endl;
	  	   break;
		}
	  }
	  cout<<"Enter one if you to update the data how many data you want to change by id \n ";
	  cout<<":Else enter zero(0)"<<endl;
	  cout<<endl;
	  int k;
	  cin>>k;
	  while(k--)
	  {
	  	 int l;
	  	 cout<<"Enter the id to change the student data according to the id \n";
	  	 cin>>l;
	  	 for(int i=0;i<=n;i++)
	  	 {
	  	 	if(arr[i].id==l )
	  	 	{
	  	 		string s;
	  	 	   cout<<"Yes id is found so enter the email id department to replace\n";
	  	 	   cout<<"Enter the name,deparment,email\n";
	  	 	   cout<<"Enter the name\n";
	  	 	   cin>>s;
	  	 	   arr[i].name = s;
	  	 	   cout<<"Enter the email\n";
	  	 	   cin>>s;
	  	 	   arr[i].email =s;
	  	 	   cout<<"Enter department\n";
	  	 	   cin>>s;
	  	 	   arr[i].department = s;
			}
		 }
	  }
	  cout<<"Enter one (1) if want to see the updated data in the list else enter zero(0) \n";
	  cout<<endl;
	  int p;
	  cin>>p;
	  if(p == 0)
      {
      	 return 9;
	  }
	  else
	  {
	  	 	cout<<"Updated list is \n";
	  	 	cout<<endl;
	  	for(int i=0;i<n;i++)
	  	{
		  
	   cout<<"Id of the student is "<<arr[i].id<<endl;
	  	cout<<"Name of the student is "<<arr[i].name<<endl;
	  	   cout<<"Email of the student is "<<arr[i].email<<endl;
	  	   cout<<"Department of the student is "<<arr[i].department<<endl;
	  	   cout<<endl;
	  }
	  }
	}
