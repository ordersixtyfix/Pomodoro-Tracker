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
cout << "Study starts with 2 beep sound. Ends with 1 long beep\n" << endl;
	
	
	
	
    int min,sec,st,i=0,tmp,tmpb,minb,secb;
    
    cout<< "Enter the study time in minutes"<<endl;
    cin >> min;
    
    cout<< "Enter the number of studies"<<endl;
    cin >> st;

    cout<< "Enter the break time in minutes"<<endl;
    cin >> minb;
    cout << "\x1B[2J\x1B[H";
    
    secb = minb*60;
    sec = min*60;
    tmpb = secb;
    tmp = sec;
    system("(speaker-test -t sine -f 1400)& pid=$!; sleep 0.2s; kill -9 $pid");
    system("(speaker-test -t sine -f 1400)& pid=$!; sleep 0.2s; kill -9 $pid");
    
    while(i<st){
		sec = tmp;
		secb = tmpb;
		while(sec>= 1){
			cout<< "STUDY TIME" << endl;
			cout<<"Counter in seconds: "<<sec<<" : " +getPresentDateTime()<<endl;
			
			usleep(1000000);
			sec--;
			cout << "\x1B[2J\x1B[H";
		}
		cout << "END OF POMODORO" << endl;
		system("(speaker-test -t sine -f 900)& pid=$!; sleep 0.7s; kill -9 $pid");
		while(secb>=1){
			cout<< "BREAK TIME" << endl;
			cout<<"Counter in seconds: "<<secb<<" : " +getPresentDateTime()<<endl;
			usleep(1000000);
			secb--;
			cout << "\x1B[2J\x1B[H";
		
			
		}
		system("(speaker-test -t sine -f 1400)& pid=$!; sleep 0.2s; kill -9 $pid");
		system("(speaker-test -t sine -f 1400)& pid=$!; sleep 0.2s; kill -9 $pid");
		i++;
		cout << "BREAK TIME IS OVER" << endl;
	}	
}


