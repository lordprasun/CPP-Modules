#include <iostream>
#include <string>
using namespace std;
// ...............1.1 Mobile Account ...............
        void MobileAccount()
   {
        int a11;
        cout << endl << endl;
        cout << '\t' << '\t' << "1: To Jazzcash ";
        cout << endl << endl;
        cout << '\t' << '\t' << "2: To Upaisa ";
        cout << endl << endl;
        cout << '\t' << '\t' << "3: To EasyPaisa";
        cout << endl << endl;
        cout << '\t' << '\t' << "00: Main Menu";
        cout << endl << endl;
        cout << '\t' << '\t' <<"Enter your choice here: " ;
        cin >> a11;
        cout << endl << endl;
        switch (1)
        {
            case 1:
            {   int jn,am,PIN;
                cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................JazzCash...................."<< endl << endl;
                cout << '\t' << '\t' << "Enter Jazzcash Number: ";
                cin >> jn;
                cout << '\t' << '\t' << "Enter Amount: ";
                cin >> am;
                cout << '\t' << '\t' << "Enter PIN: " ;
                cin >> PIN;
                cout << endl << endl;
                cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
                cout << '\t' << '\t' << am << " have been sent to Jazzcash Account " << jn << "." << endl;
                break;
            }
            case 2:
            {   int un,am,PIN;
            cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<"..........................Upaisa......................."<< endl << endl;
                cout << '\t' << '\t' << "Enter Upaisa Number: ";
                cin >> un;
                cout << '\t' << '\t' << "Enter Amount: ";
                cin >> am;
                cout << '\t' << '\t' << "Enter PIN: " ;
                cin >> PIN;
                cout << endl << endl;
                cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
                cout << '\t' << '\t' << am << " have been sent to Upaisa Account " << un << "." << endl;
                break;
            }
            case 3:
            {   int en,am,PIN;
            cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................EasyPaisa...................."<< endl << endl;
                cout << '\t' << '\t' << "Enter EasyPaisa Number: ";
                cin >> en;
                cout << '\t' << '\t' << "Enter Amount: ";
                cin >> am;
                cout << '\t' << '\t' << "Enter PIN: " ;
                cin >> PIN;
                cout << endl << endl;
                cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
                cout << '\t' << '\t' << am << " have been sent to EasyPaisa Account " << en << "." << endl;
                break;
            }
                 default:
     {
         cout << "Invalid Choice!" << endl;
         break;
     }
        }
   }
// ...............1. Send Money ...........
    void SendMoney()
    {
        int a1;
        cout << '\t' << '\t' << "1: To Mobile Account \n";
        cout << endl;
        cout << '\t' << '\t' << "2: To CNIC \n";
        cout << endl;
        cout << '\t' << '\t' << "3: To Bank Account \n";
        cout << endl;
        cout << '\t' << '\t' << "00: Main Menu \n";
        cout << endl;
        cout << '\t' << '\t' <<"Enter your choice here: " ;
        cin >> a1;

        switch (a1)
        {
            case 1:
            {
                MobileAccount();
                break;
            }
            case 2:
            {
                int cnic,amo,PIN;
                cout << '\t' << '\t' << "Enter CNIC Number: ";
                cin >> cnic;
                cout << '\t' << '\t' << "Enter Amount: ";
                cin >> amo;
                cout << '\t' << '\t' << "Enter PIN: " ;
                cin >> PIN;
                cout << endl << endl;
                cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
                cout << '\t' << '\t' << amo << " have been sent to CNIC Number " << cnic << "." << endl;
                break;
            }
            case 3:
            {
                string bn;
                int an,amo,PIN;
                cout << '\t' << '\t' << "Enter Bank Name: ";
                cin >> bn;
                cout << '\t' << '\t' <<"Enter "<< bn <<" Account Number: ";
                cin >> an;
                cout << '\t' << '\t' <<"Enter Amount: ";
                cin >> amo;
                cout << '\t' << '\t' << "Enter PIN: " ;
                cin >> PIN;
                cout << endl << endl;
                cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
                cout << '\t' << '\t' << amo << " have been sent to Bank Account " << an << "." << endl;
                break;
            }
                 default:
     {
         cout << "Invalid Choice!" << endl;
         break;
     }
        }
        cout << endl;
    }
// ...............2. Pay Bills ...........
    void PayBills()
    {
        int a2;
        cout << '\t' << '\t' << "1: Electricity Bill \n";
        cout << endl;
        cout << '\t' << '\t' << "2: Gass Bill \n";
        cout << endl;
        cout << '\t' << '\t' << "3: Water Bill \n";
        cout << endl;
        cout << '\t' << '\t' << "4: Telephone \n";
        cout << endl;
        cout << '\t' << '\t' << "5: Internet \n";
        cout << endl;
        cout << '\t' << '\t' << "00: Main Menu \n";
        cout << endl;
        cout << '\t' << '\t' <<"Enter your choice here: " ;
        cin >> a2;
        switch (a2)
        {
            case 1:
            {
                int con,PIN;
                cout << '\t' << '\t' << "Enter Consumer Number: ";
                cin >> con;
                cout << '\t' << '\t' << "Enter PIN: ";
                cin >> PIN;
                cout << endl << endl;
                cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
                cout << '\t' << '\t' << "Electricity bill of consumer number "<< con << " have been deposited."<< endl;
                break;
            }
            case 2:
            {
                int con,PIN;
                cout << '\t' << '\t' << "Enter Consumer Number: ";
                cin >> con;
                cout << '\t' << '\t' << "Enter PIN: ";
                cin >> PIN;
                cout << endl << endl;
                cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
                cout << '\t' << '\t' << "Gass bill of consumer number "<< con << " have been deposited."<< endl;
                break;
            }
            case 3:
            {
                string status;
                int PIN;
                cout << '\t' << '\t' << "Do you want to pay water bill? (y / n): ";
                cin >> status;
                if(status == "y")
                {
                    cout << '\t' << '\t' << "Enter PIN to Pay Water Bill: ";
                    cin >> PIN;
                cout << endl << endl;
                cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
                    cout << '\t' << '\t' << "Your water bill have been deposited." << endl;
                    break;
                } else
                {
                    cout <<"Okay..."<< endl;
                    break;
                }
            }
            case 4:
            {
                int pn,PIN;
                cout << '\t' << '\t' << "Enter Phone Number: ";
                cin >> pn;
                cout << '\t' << '\t' << "Enter PIN: ";
                cin >> PIN;
                cout << endl << endl;
                cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
                cout << "Telephone Bill of " << pn << " have been successfully deposited.";
                break;
            }
            case 5:
            {
                string status;
                int PIN;
                cout << '\t' << '\t' << "Do you want to pay water bill? (y / n): ";
                cin >> status;
                if(status == "y")
                {
                    cout << '\t' << '\t' << "Enter PIN to Pay Internet Bill: ";
                    cin >> PIN;
                cout << endl << endl;
                cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
                    cout << '\t' << '\t' << "Your Internet Bill have been deposited." << endl;
                    break;
                } else
                {
                    cout <<"Okay..."<< endl;
                    break;
                }
            }
                 default:
     {
         cout << "Invalid Choice!" << endl;
         break;
     }
        }
        cout << endl;
    }

// ...............3. Mobile Load ...........
    void MobileLoad()
    {
        int a3;
        cout << '\t' << '\t' << "1: Jazz \n";
        cout << endl;
        cout << '\t' << '\t' << "2: Telenor \n";
        cout << endl;
        cout << '\t' << '\t' << "3: Zong \n";
        cout << endl;
        cout << '\t' << '\t' << "4: Ufone \n";
        cout << endl;
        cout << '\t' << '\t' << "5: Warid \n";
        cout << endl;
        cout << '\t' << '\t' << "00: Main Menu \n";
        cout << endl;
        cout << '\t' << '\t' <<"Enter your choice here: " ;
        cin >> a3;
        cout << endl;
        switch (a3)
        {
            case 1:
            {
                int jn,am,PIN;
                cout << '\t' << '\t' << "Enter Jazz Number: ";
                cin >> jn;
                cout << '\t' << '\t' << "Enter Amount: ";
                cin >> am;
                cout << '\t' << '\t' << "Enter PIN: " ;
                cin >> PIN;
                cout << endl << endl;
                cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
                cout << '\t' << '\t' << am << " have been sent to Jazz number " << jn << "." << endl;
                break;
            }
            case 2:
            {
                int tn,am,PIN;
                cout << '\t' << '\t' << "Enter Telenor Number: ";
                cin >> tn;
                cout << '\t' << '\t' << "Enter Amount: ";
                cin >> am;
                cout << '\t' << '\t' << "Enter PIN: " ;
                cin >> PIN;
                cout << endl << endl;
                cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
                cout << '\t' << '\t' << am << " have been sent to Telenor number " << tn << "." << endl;
                break;
            }
            case 3:
            {
                int zn,am,PIN;
                cout << '\t' << '\t' << "Enter Zong Number: ";
                cin >> zn;
                cout << '\t' << '\t' << "Enter Amount: ";
                cin >> am;
                cout << '\t' << '\t' << "Enter PIN: " ;
                cin >> PIN;
                cout << endl << endl;
                cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
                cout << '\t' << '\t' << am << " have been sent to Zong number " << zn << "." << endl;
                break;
            }
            case 4:
            {
                int un,am,PIN;
                cout << '\t' << '\t' << "Enter Ufone Number: ";
                cin >> un;
                cout << '\t' << '\t' << "Enter Amount: ";
                cin >> am;
                cout << '\t' << '\t' << "Enter PIN: " ;
                cin >> PIN;
                cout << endl << endl;
                cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
                cout << '\t' << '\t' << am << " have been sent to Ufone number " << un << "." << endl;
                break;
            }
            case 5:
            {
                int wn,am,PIN;
                cout << '\t' << '\t' << "Enter Warid Number: ";
                cin >> wn;
                cout << '\t' << '\t' << "Enter Amount: ";
                cin >> am;
                cout << '\t' << '\t' << "Enter PIN: " ;
                cin >> PIN;
                cout << '\t' << '\t' << am << " have been sent to Warid number " << wn << "." << endl;
                break;
            }
                 default:
     {
         cout << "Invalid Choice!" << endl;
         break;
     }
        }
    }
// ...............4. Quick Pay ...........
    void QuickPay()
    {
        int a4,PIN;
        cout << '\t' << '\t' <<"Enter 4 digit QuickPay ID : " ;
        cin >> a4;
        cout << '\t' << '\t' << "Enter PIN: " ;
        cin >> PIN;
        cout << endl;
        cout << endl << endl;
        cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
        cout <<'\t' << '\t'<< " You are Done!" << endl;

    }
// ...............5. Payments ...........
    void Payments()
    {
        int a5;
        cout << '\t' << '\t' << "1: Loan Payments \n";
        cout << endl;
        cout << '\t' << '\t' << "2: Fees \n";
        cout << endl;
        cout << '\t' << '\t' << "3: Tickets \n";
        cout << endl;
        cout << '\t' << '\t' << "00: Main Menu \n";
        cout << endl;
        cout << '\t' << '\t' <<"Enter your choice here: " ;
        cin >> a5;
        cout << endl;
        switch (a5)
        {
            case 1:
            {
                string status;
                int PIN;
                cout << '\t' << '\t' << "Do you want to Pay Loans? (y / n): ";
                cin >> status;
                if(status == "y")
                {
                    cout << '\t' << '\t' << "Enter PIN to Pay all Loans: ";
                    cin >> PIN;
                    cout << endl << endl;
                    cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
                    cout << '\t' << '\t' << "You have payed loans of Rs.6,000." << endl;
                    break;
                } else
                {
                    cout <<"Okay..."<< endl;
                    break;
                }
            }
                                    case 2:

            {
                string status;
                int PIN;
                cout << '\t' << '\t' << "Do you want to Pay your fees? (y / n): ";
                cin >> status;
                if(status == "y")
                {
                    cout << '\t' << '\t' << "Enter PIN to Pay for fees: ";
                    cin >> PIN;
                    cout << endl << endl;
                    cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
                    cout << '\t' << '\t' << "You have payed." << endl;
                    break;
                } else
                {
                    cout <<"Okay..."<< endl;
                    break;
                }
            }
                        case 3:

            {
                string status;
                int PIN;
                cout << '\t' << '\t' << "Do you want to Pay for Tickets? (y / n): ";
                cin >> status;
                if(status == "y")
                {
                    cout << '\t' << '\t' << "Enter PIN to Pay for Tickets: ";
                    cin >> PIN;
                    cout << endl << endl;
                    cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
                    cout << '\t' << '\t' << "You have payed." << endl;
                    break;
                } else
                {
                    cout <<"Okay..."<< endl;
                    break;
                }
            }
                        case 4:
            {
                string status;
                int PIN;
                cout << '\t' << '\t' << "Do you want to Pay Loans? (y / n): ";
                cin >> status;
                if(status == "y")
                {
                    cout << '\t' << '\t' << "Enter PIN to Check Balance: ";
                    cin >> PIN;
                    cout << endl << endl;
                    cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
                    cout << '\t' << '\t' << "You have payed loans of Rs.6,000." << endl;
                    break;
                } else
                {
                    cout <<"Okay..."<< endl;
                    break;
                }
            }
        }
    }
// ...............6. My Account ...........
    void MyAccount()
    {
        int a6;
        cout << '\t' << '\t' << "1: Change MPIN \n";
        cout << endl;
        cout << '\t' << '\t' << "2: Check Balance \n";
        cout << endl;
        cout << '\t' << '\t' << "3: Mini Statment \n";
        cout << endl;
        cout << '\t' << '\t' << "00: Main Menu \n";
        cout << endl;
        cout << '\t' << '\t' <<"Enter your choice here: " ;
        cin >> a6;
        cout << endl;
        switch (a6)
        {
            case 1:
            {
            int PIN,nPIN;
            cout << '\t' << '\t' << "Enter old PIN: ";
            cin >> PIN;
            cout << '\t' << '\t' << "Enter new PIN: ";
            cin >> nPIN;
            cout << '\t' << '\t' << "Confirm new PIN: ";
            cin >> nPIN;
            cout << endl << endl;
            cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
            cout << '\t' << '\t' << "Your Jazzcash Account PIN has been changed successfully.\n";
            break;
            }

            case 2:
            {
                string status;
                int PIN;
                cout << '\t' << '\t' << "Do you want to Check Balance? (y / n): ";
                cin >> status;
                if(status == "y")
                {
                    cout << '\t' << '\t' << "Enter PIN to Check Balance: ";
                    cin >> PIN;
                    cout << endl << endl;
                    cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
                    cout << '\t' << '\t' << "Your Jazzcash Balance is Rs. 6,400." << endl;
                    break;
                } else
                {
                    cout <<"Okay..."<< endl;
                    break;
                }
            }
             case 3:
            {
                string status;
                int PIN;
                cout << '\t' << '\t' << "Do you Need Mini Statment? (y / n): ";
                cin >> status;
                if(status == "y")
                {
                    cout << '\t' << '\t' << "Enter PIN to Get Mini Statment: ";
                    cin >> PIN;
                    cout << endl << endl;
                    cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
                    cout << '\t' << '\t' << "Last time you've send Rs. 100 to Hamza but us nay nahi diay.." << endl;
                    break;
                } else
                {
                    cout <<"Okay..."<< endl;
                    break;
                }

            }
                 default:
     {
         cout << "Invalid Choice!" << endl;
         break;
     }

            }
        }

// ...............7. Invite a Friend ...........
    void InviteFrnd()
    {
        int a7,PIN;
        cout << '\t' << '\t' <<"Enter Friend's Number (03xxxxxxxxx) : " ;
        cin >> a7;
        cout << '\t' << '\t' << "Enter PIN: ";
        cin >> PIN;
        cout << endl;
                cout << endl << endl;
                cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
        cout <<'\t' << '\t'<<"Your Friend with number " << a7 << " have been successfully invited to JazzCash." << endl;

    }
// ...............8. Saving n Insurance ...........
    void Saving_n_Insurance()
    {
        int a8;
        cout << '\t' << '\t' << "1: Subscribe Savings \n";
        cout << endl;
        cout << '\t' << '\t' << "2: Unsubscribe Savings \n";
        cout << endl;
        cout << '\t' << '\t' << "3: Subscribe Sehat Sahulat \n";
        cout << endl;
        cout << '\t' << '\t' << "4: Subscribe Beema\n";
        cout << endl;
        cout << '\t' << '\t' << "00: Main Menu \n";
        cout << endl;
        cout << '\t' << '\t' <<"Enter your choice here: " ;
        cin >> a8;
        cout << endl;
        switch (a8)
        {
            case 1:
            {
                string status;
                int PIN;
                cout << '\t' << '\t' << "Do you want to subscribe savings? (y / n): ";
                cin >> status;
                if(status == "y")
                {
                    cout << '\t' << '\t' << "Enter PIN to subscribe to savings: ";
                    cin >> PIN;
                cout << endl << endl;
                cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
                    cout << '\t' << '\t' << "Your are successfully subscribed to savings." << endl;
                    break;
                } else
                {
                    cout <<"Okay..."<< endl;
                    break;
                }
            }
            case 2:
            {
                string status;
                int PIN;
                cout << '\t' << '\t' << "Do you want to Unsubscribe savings? (y / n): ";
                cin >> status;
                if(status == "y")
                {
                    cout << '\t' << '\t' << "Enter PIN to Unsubscribe savings: ";
                    cin >> PIN;
                cout << endl << endl;
                cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
                    cout << '\t' << '\t' << "Your are successfully Unsubscribed to savings." << endl;
                    break;
                } else
                {
                    cout <<"Okay..."<< endl;
                    break;
                }
            }
            case 3:
            {
                string status;
                int PIN;
                cout << '\t' << '\t' << "Do you want to subscribe to sehat sahalut? (y / n): ";
                cin >> status;
                if(status == "y")
                {
                    cout << '\t' << '\t' << "Enter PIN to subscribe to sehat sahalut: ";
                    cin >> PIN;
                cout << endl << endl;
                cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
                    cout << '\t' << '\t' << "Your are successfully subscribed to sehat sahulut." << endl;
                    break;
                } else
                {
                    cout <<"Okay..."<< endl;
                    break;
                }
            }
            case 4:
            {
                string status;
                int PIN;
                cout << '\t' << '\t' << "Do you want to subscribe to beema? (y / n): ";
                cin >> status;
                if(status == "y")
                {
                    cout << '\t' << '\t' << "Enter PIN to subscribe ot beema: ";
                    cin >> PIN;
                cout << endl << endl;
                cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
                    cout << '\t' << '\t' << "Your are successfully subscribed to beema." << endl;
                    break;
                } else
                {
                    cout <<"Okay..."<< endl;
                    break;
                }
            }
                 default:
     {
         cout << "Invalid Choice!" << endl;
         break;
     }
        }

    }
// ...............9. Mobile Load of 100 rupees ...........
    void MobileLoad100Rupe()
    {
        int a9,PIN;
        cout << '\t' << '\t' <<"Enter Jazz/Warid number : " ;
        cin >> a9;
        cout << '\t' << '\t' << "Enter PIN to subscribe ot beema: ";
        cin >> PIN;
        cout << endl;
                cout << endl << endl;
                cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Success....................."<< endl << endl;
        cout << '\t' << '\t' <<"You have purchased Mobile Load of Rs. 100 to "<< a9 << " successfully." << endl;
    }

int main()
{
    int a;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << '\t' <<"######################################################################################################"<< '\t' << endl;
    cout << endl;
    cout << '\t' << '\t' << '\t' << '\t'<< '\t'<< '\t'<<  '\t'<< "   JazzCash" << endl;
    cout << '\t' << '\t' << '\t' << '\t'<< '\t'<< '\t'<< "      Har Dill, Har Din!" << endl;
    cout << endl;
    cout << '\t' <<"######################################################################################################"<< '\t' << endl;
    cout << endl;
    cout << endl;
    cout << '\t' << '\t' <<'\t' <<'\t' <<"..................Welcome to Main Menu!!..............."<< endl << endl;
    cout << '\t' << '\t' <<"1: Send Money \n";
    cout << endl;
    cout << '\t' << '\t' <<"2: Pay Bills \n";
    cout << endl;
    cout << '\t' << '\t' <<"3: Mobile Load \n";
    cout << endl;
    cout << '\t' << '\t' <<"4: QuickPay  \n";
    cout << endl;
    cout << '\t' << '\t' <<"5: Payments  \n";
    cout << endl;
    cout << '\t' << '\t' <<"6: My Account  \n";
    cout << endl;
    cout << '\t' << '\t' <<"7: Invite a Friend  \n";
    cout << endl;
    cout << '\t' << '\t' <<"8: Saving and Insurance \n";
    cout << endl;
    cout << '\t' << '\t' <<"9: Mobile Load of 100 Rupees \n";
    cout << endl;
    cout << '\t' << '\t' <<"0: Enter 0 to exit \n";
    cout << endl;
    cout << '\t' << '\t' <<"Enter your choice here: " ;
    cin >> a;
    cout << endl;
    switch (a)
{
     case 0:
     {
        cout << '\t' << '\t' <<"Program exit!" << endl;
        break;
     }
     case 1:
     {
         cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Send Money...................."<< endl << endl;
         SendMoney();
         break;
     }
     case 2:
     {
         cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Pay Bills....................."<< endl << endl;
         PayBills();
         break;
     }
     case 3:
     {
         cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<"......................Mobile Load...................."<< endl << endl;
         MobileLoad();
         break;
     }
     case 4:
     {
         cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................QuickPay......................."<< endl << endl;
         QuickPay();
         break;
     }
     case 5:
     {
         cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".......................Payments......................."<< endl << endl;
         Payments();
         break;
     }
     case 6:
     {
         cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<"......................My Account......................"<< endl << endl;
         MyAccount();
         break;
     }
     case 7:
     {
         cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".....................Invite a Friend.................."<< endl << endl;
         InviteFrnd();
         break;
     }
     case 8:
     {
         cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<".................Saving and Insurance................."<< endl << endl;
         Saving_n_Insurance();
         break;
     }
     case 9:
     {
         cout << '\t' << '\t' <<'\t' <<'\t' <<'\t' <<"...............Mobile Load of 100 Rupees................"<< endl << endl;
         MobileLoad100Rupe();
         break;
     }
     default:
     {
         cout << "Invalid Choice!" << endl;
         break;
     }
}
    return 0;
}
