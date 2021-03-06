#include <iostream>
#include <ctime>
#include <unistd.h>

using namespace std;

string getPresentDateTime()
{
    time_t tt;
    struct tm *st;

    time(&tt);
    st = localtime(&tt);
    return asctime(st);
}

int main()
{
	cout << R"(██████╗  ██████╗ ███╗   ███╗ ██████╗ ██████╗  ██████╗ ██████╗  ██████╗ 
██╔══██╗██╔═══██╗████╗ ████║██╔═══██╗██╔══██╗██╔═══██╗██╔══██╗██╔═══██╗
██████╔╝██║   ██║██╔████╔██║██║   ██║██║  ██║██║   ██║██████╔╝██║   ██║
██╔═══╝ ██║   ██║██║╚██╔╝██║██║   ██║██║  ██║██║   ██║██╔══██╗██║   ██║
██║     ╚██████╔╝██║ ╚═╝ ██║╚██████╔╝██████╔╝╚██████╔╝██║  ██║╚██████╔╝
╚═╝      ╚═════╝ ╚═╝     ╚═╝ ╚═════╝ ╚═════╝  ╚═════╝ ╚═╝  ╚═╝ ╚═════╝ 
                                                                       
████████╗██████╗  █████╗  ██████╗██╗  ██╗███████╗██████╗               
╚══██╔══╝██╔══██╗██╔══██╗██╔════╝██║ ██╔╝██╔════╝██╔══██╗              
   ██║   ██████╔╝███████║██║     █████╔╝ █████╗  ██████╔╝              
   ██║   ██╔══██╗██╔══██║██║     ██╔═██╗ ██╔══╝  ██╔══██╗              
   ██║   ██║  ██║██║  ██║╚██████╗██║  ██╗███████╗██║  ██║              
   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝              
                                                                       )" << endl;
cout << "Author : ordersixtyfix" << endl;
cout << "Every study session starts with 2 beep sound. Break time starts with 1 long beep. Whole sessions ends with 3 beep sound.\n" << endl;
	
	
	
	
    int sec=1500,secb=300,st,i=0;
    
   
    cout<< "Enter the number of study sessions"<<endl;
    cin >> st;

    cout << "\x1B[2J\x1B[H";
    
    system("(speaker-test -t sine -f 600)& pid=$!; sleep 0.2s; kill -9 $pid");
    system("(speaker-test -t sine -f 800)& pid=$!; sleep 0.2s; kill -9 $pid");
    
    while(i<st){
		sec = 1500;
		secb = 300;
		while(sec>= 1){
			cout<< "STUDY TIME" << endl;
			cout<<"Counter in seconds: "<<sec<<" : " +getPresentDateTime()<<endl;
			
			usleep(1000000);
			sec--;
			cout << "\x1B[2J\x1B[H";
		}
		cout << "END OF POMODORO" << endl;
			if(i==st-1){
				cout << "END OF SESSION" << endl;
				system("(speaker-test -t sine -f 444)& pid=$!; sleep 0.2s; kill -9 $pid");
				system("(speaker-test -t sine -f 555)& pid=$!; sleep 0.2s; kill -9 $pid");
				system("(speaker-test -t sine -f 666)& pid=$!; sleep 0.2s; kill -9 $pid");
				break;
		}
		system("(speaker-test -t sine -f 900)& pid=$!; sleep 0.7s; kill -9 $pid");
		while(secb>=1){
			cout<< "BREAK TIME" << endl;
			cout<<"Counter in seconds: "<<secb<<" : " +getPresentDateTime()<<endl;
			usleep(1000000);
			secb--;
			cout << "\x1B[2J\x1B[H";
		
			
		}
	
		system("(speaker-test -t sine -f 600)& pid=$!; sleep 0.2s; kill -9 $pid");
		system("(speaker-test -t sine -f 800)& pid=$!; sleep 0.2s; kill -9 $pid");
		i++;
		cout << "BREAK TIME IS OVER" << endl;
	}	
}
