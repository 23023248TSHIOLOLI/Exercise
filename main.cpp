#include <iostream>

using namespace std;

int main()
{
    string name_of_Yourself,name_of_a_partner,genders,first_reply,second_reply;
    int ageofyourself,ageofpatner;
    cout<<"whats your name"<<endl;
    cin>>name_of_Yourself;
    cout<<"whats your partner's name"<<endl;
    cin>> name_of_a_partner;
    cout<<"are you a boy or a girl"<<endl;
    cin>>genders;
    cout<<"whats your age"<<endl;
    cin>>ageofyourself;
    cout<<"whats your partner's age"<<endl;
    cin>>ageofpatner;



    if(ageofyourself>=18 && ageofpatner>= 18){
        if(genders=="girl" || genders == "female"){
            cout<<"reply with Y for yes and N for no "<<endl;
            cout<<"do you care about your partner??"<<endl;
            cin>>first_reply;
            cout<<"do love your partner"<<endl;
            cin>>second_reply;
            if(first_reply =="Y" && second_reply == "Y"){
                cout<<name_of_Yourself<<"you are compatible with"<<name_of_a_partner<<endl;

            }
            else{
                cout<<name_of_Yourself <<" you are not compatible with "<<name_of_a_partner<<endl;

            }

        }
        else if ( genders == "male"|| genders == "boy"){
            cout<<"reply with Y for yes and N for No"<<endl;
            cout<<"Is your partner loyal ?"<<endl;
            cin>>first_reply;
                cout<<"do you love her"<<endl;
                cin>>second_reply;
                if (first_reply=="Y" && second_reply=="Y"){
                    cout<< name_of_Yourself <<" you are compatible with "<< name_of_a_partner <<endl;

                }
                else{
                    cout<<name_of_Yourself<<"you are not compatible with"<<name_of_a_partner<<endl;


                }


        }
    }
        else{
            cout<<name_of_Yourself<<" You are still a minor "<<endl;

        }

    return 0;

}
