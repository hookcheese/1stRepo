//CHICKENroad.cpp
//Cory Cagle
//CS I
//Notes
//Chicken crossin the road
//October 5, 2022

#include<bits/stdc++.h>
//operating specific behavior
#include<unistd.h>
using namespace std;

int main(){
	cout<<"Place your bets! Go Chicken Go!!!\n";
char road[42] = "--------------------+--------------------";
	int pos = 20;
	srand(time(0));
	
	while(pos != 0 && pos != 40){
	cout<<road<<endl;
	int d = rand()%3;	
	road[pos]='-';
	if(d==0)
		pos--;
	else if(d==1)
		pos++;
	road[pos]='+';
	usleep(75000);
	}		
	
	cout<<"Did you guess right?\n";
	cout<<endl;
	cout<<endl;
	cout<<"I'll be back! Program terminated...\n";
	return 0;
}

