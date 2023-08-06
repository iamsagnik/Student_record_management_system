#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class student{
     
    public:

    char fname[20],lname[20];
    int rn,csem;
    float sgpa,math,bio,phy;

    student(){
        cout<<"Enter your first name : ";
            cin >> fname;
            cout<<"Enter your last name : ";
            cin >> lname;
            cout<<"Enter your roll no. : ";
            cin >> rn;
            CSEM:
            cout<<"Current semester : ";
            cin >> csem;
            if(csem > 8){
            cout<<"Please provide correct information."<<endl;
            goto CSEM;
            }
            cout <<"Previous semester sgpa : ";
            cin >> sgpa;
            cout<<"Now please write your marks according to the subject ;"<<endl;
            MATH:
            cout<<"Math : ";
            cin>> math;
            if (math > 100){
            cout<<"Please insert a valid number."<<endl;
            goto MATH;
            }
            PHY:
            cout<<"Physics : ";
            cin>> phy;
            if (phy > 100){
            cout<<"Please insert a valid number."<<endl;
            goto PHY;
            }
            BIO:
            cout<<"Biology : ";
            cin>> bio;
            if (bio > 100){
            cout<<"Please insert a valid number."<<endl;
            goto BIO; 
            }       
    }

    void add(float per,int i){
           ofstream myfile("filename",ios::app);    //here please add the file(.txt) in which you want to see the stored information
            if(i>1)
            myfile<<endl;
            myfile<<i<<". ";
            myfile<<"Name : "<<fname<<" "<<lname<<endl;
            myfile<<"Roll no. "<<rn<<endl;
            myfile<<"Current semester : "<<csem<<"\t"<<"Previous semester sgpa : "<<sgpa<<endl;
            myfile<<"Total percentage : "<< per<<"\t";
            if(per >= 60)
            myfile<<"Grade : A";
            else if(per >= 40 && per<60)
            myfile<<"Grade : B";
            else
            myfile<<"Grade : F";
            myfile<<endl;
            myfile<<".............................................................";
            myfile.close();
    }
};

int main (){
    int i=1;
        while(true){
            student a;
            float per = (a.bio+a.phy+a.math)/3;
            a.add(per,i);
            i++;
            char c;
            cout<<"Do you want to add more students ? (Y/N) : ";
            cin>>c;
            if(c=='Y')
            continue;
            else
            break;
        }
    cout<<"Thank you for your work.";
    return 0;
}