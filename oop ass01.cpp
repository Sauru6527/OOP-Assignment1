#include<iostream>
using namespace std;

class sybtech
{
	public:
	char name1[21],name2[21],name3[21],name4[21],name5[21];
	int rno1,rno2,rno3,rno4,rno5;
	int s1,s2,s3,s4,s5,b1,b2,b3,b4,b5,c1,c2,c3,c4,c5,d1,d2,d3,d4,d5,e1,e2,e3,e4,e5;
	float per1,per2,per3,per4,per5;
	int st1sum1,st1sum2,st1sum3,st1sum4,st1sum5 = 0;
	
	stu1()
	{
		fflush(stdin);
		cout<<"ENTER NAME = ";
		
		cin>>name1;
		cout<<"ENTER RNO = ";
		cin>>rno1;
		cout<<"ENTER SUBJECT MARKS = ";
		cin>>s1;
		cin>>s2;
		cin>>s3;
		cin>>s4;
		cin>>s5;
          
        st1sum1 = s1+s2+s3+s4+s5;
        per1 = (st1sum1*100)/500;
        cout<<"TOTAL = "<<st1sum1;
		cout<<"\n";	
			
	}
	stu2()
	{
		fflush(stdin);
		cout<<"ENTER NAME = ";
		
		cin>>name2;
		cout<<"ENTER RNO = ";
		cin>>rno2;
		cout<<"ENTER SUBJECT MARKS = ";
		cin>>b1;
		cin>>b2;
		cin>>b3;
		cin>>b4;
		cin>>b5;
          
        st1sum2 = b1+b2+b3+b4+b5;
        per2 = (st1sum2*100)/500;
        cout<<"TOTAL = "<<st1sum2;
		cout<<"\n";	
			
	}
	
	stu3()
	{
		fflush(stdin);
		cout<<"ENTER NAME = ";
		
		cin>>name3;
		cout<<"ENTER RNO = ";
		cin>>rno3;
		cout<<"ENTER SUBJECT MARKS = ";
		cin>>c1;
		cin>>c2;
		cin>>c3;
		cin>>c4;
		cin>>c5;
          
        st1sum3 = c1+c2+c3+c4+c5;
        per3 = (st1sum3*100)/500;
        cout<<"TOTAL = "<<st1sum3;
		cout<<"\n";	
			
	}
	
		stu4()
	{
		fflush(stdin);
		cout<<"ENTER NAME = ";
		
		cin>>name4;
		cout<<"ENTER RNO = ";
		cin>>rno4;
		cout<<"ENTER SUBJECT MARKS = ";
		cin>>d1;
		cin>>d2;
		cin>>d3;
		cin>>d4;
		cin>>d5;
          
        st1sum4 = d1+d2+d3+d4+d5;
        per4 = (st1sum4*100)/500;
        cout<<"TOTAL = "<<st1sum4;
		cout<<"\n";	
			
	}
		stu5()
	{
		fflush(stdin);
		cout<<"ENTER NAME = ";
		
		cin>>name5;
		cout<<"ENTER RNO = ";
		cin>>rno5;
		cout<<"ENTER SUBJECT MARKS = ";
		cin>>e1;
		cin>>e2;
		cin>>e3;
		cin>>e4;
		cin>>e5;
          
        st1sum5 = e1+e2+e3+e4+e5;
        per5 = (st1sum5*100)/500;
        cout<<"TOTAL = "<<st1sum5;
		cout<<"\n";	
			
	}
	
	getdatas1()
	{
		cout<<"-------------------------------------------------------------------\n";
		cout<<"NAME = "<<name1;
		cout<<"\n";
	 	cout<<"RNO = "<<rno1;
	 	cout<<"\n";
	    cout<<"TOTAL = "<<st1sum1;
	    cout<<"\n";
		cout<<"PERCENTAGE = "<<per1; 
		cout<<"\n"; 
		cout<<"--------------------------------------------------------------------\n";
	}
	getdatas2()
	{
	  	cout<<"-------------------------------------------------------------------\n";
		cout<<"NAME = "<<name2;
		cout<<"\n";
	 	cout<<"RNO = "<<rno2;
	 	cout<<"\n";
	    cout<<"TOTAL = "<<st1sum2;
	    cout<<"\n";
		cout<<"PERCENTAGE = "<<per2;  	
		cout<<"\n";
		cout<<"--------------------------------------------------------------------\n";
	}
	
		getdatas3()
	{
		cout<<"-------------------------------------------------------------------\n";
		cout<<"NAME = "<<name3;
		cout<<"\n";
	 	cout<<"RNO = "<<rno3;
	 	cout<<"\n";
	    cout<<"TOTAL = "<<st1sum3;
	    cout<<"\n";
		cout<<"PERCENTAGE = "<<per3; 
		cout<<"\n";
		cout<<"--------------------------------------------------------------------\n"; 
	}
	
		getdatas4()
	{
		cout<<"-------------------------------------------------------------------\n";
		cout<<"NAME = "<<name4;
		cout<<"\n";
	 	cout<<"RNO = "<<rno4;
	 	cout<<"\n";
	    cout<<"TOTAL = "<<st1sum4;
	    cout<<"\n";
		cout<<"PERCENTAGE = "<<per4; 
		cout<<"\n"; 
		cout<<"--------------------------------------------------------------------\n";
	}
	
		getdatas5()
	{
		cout<<"-------------------------------------------------------------------\n";
		cout<<"NAME = "<<name5;
		cout<<"\n";
	 	cout<<"RNO = "<<rno5;
	 	cout<<"\n";
	    cout<<"TOTAL = "<<st1sum5;
	    cout<<"\n";
		cout<<"PERCENTAGE = "<<per5; 
		cout<<"\n"; 
		cout<<"--------------------------------------------------------------------\n";
	}
	
};

int main()
{
	sybtech obj;
	obj.stu1();
	obj.stu2();
	obj.stu3();
	obj.stu4();
	obj.stu5();
	
	cout<<"\n";
	
	cout<<"STUDENT 1 :::  \n";
	obj.getdatas1();
	
	cout<<"STUDENT 2 :::  \n";
	obj.getdatas2();
	
	cout<<"STUDENT 3 :::  \n";
	obj.getdatas3();
	
	cout<<"STUDENT 4 :::  \n";
	obj.getdatas4();
	
	cout<<"STUDENT 5 :::  \n";
	obj.getdatas5();
}
