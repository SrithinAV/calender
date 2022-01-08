#include<iostream>
#include<algorithm>
#include<cctype>
#include<string>
using namespace std;

void jan(const int* day){
    if(*day == 5 || *day == 12 || *day == 19 || *day == 26 ){
        cout<<"Today is 'sunday funday'"<<endl;
    }
    if(*day == 6 || *day == 13 || *day == 20 || *day == 27 ){
        cout<<"Today is 'Monday'"<<endl;
    }
    if(*day == 7 || *day == 14 || *day == 21 || *day == 28 ){
        cout<<"Today is 'Tuesday'"<<endl;
    }
    if(*day == 1 || *day == 8 || *day == 15 || *day == 22 || *day == 29 ){
        cout<<"Today is 'Wednesday'"<<endl;
    }
    if(*day == 2 || *day == 9 || *day == 16 || *day == 23 || *day == 30 ){
        cout<<"Today is 'Thursday'"<<endl;
    }
    if(*day == 3 || *day == 10 || *day == 17 || *day == 24 || *day == 31){
        cout<<"Today is 'Friday'"<<endl;
    }
    if(*day == 4 || *day == 11 || *day == 18 || *day == 25 ){
        cout<<"Today is 'Saturday'"<<endl;
    }

   
}
void feb(const int* day){

    if(*day == 2 || *day == 9 || *day == 16 || *day == 23 ){
        cout<<"Today is 'sunday funday'"<<endl;
    }
    if(*day == 3 || *day == 10 || *day == 17 || *day == 24 ){
        cout<<"Today is 'Monday'"<<endl;
    }
    if(*day == 4 || *day == 11 || *day == 18 || *day == 25 ){
        cout<<"Today is 'Tuesday'"<<endl;
    }
    if(*day == 5 || *day == 12 || *day == 19 || *day == 26 ){
        cout<<"Today is 'Wednesday'"<<endl;
    }
    if(*day == 6 || *day == 13 || *day == 20 || *day == 27){
        cout<<"Today is 'Thursday'"<<endl;
    }
    if(*day == 7 || *day == 14 || *day == 21 || *day == 28 ){
        cout<<"Today is 'Friday'"<<endl;
    }
    if(*day == 1 || *day == 8 || *day == 15 || *day == 22  || *day == 29){
        cout<<"Today is 'Saturday'"<<endl;
    }
}
void mar(const int* day){
    
    if(*day == 1 || *day == 8 || *day == 15 || *day == 22 || *day == 29 ){
        cout<<"Today is 'sunday funday'"<<endl;
    }
    if(*day == 2 || *day == 9 || *day == 16 || *day == 23 || *day == 30 ){
        cout<<"Today is 'Monday'"<<endl;
    }
    if(*day == 3 || *day == 10 || *day == 17 || *day == 24 || *day == 31 ){
        cout<<"Today is 'Tuesday'"<<endl;
    }
    if(*day == 4 || *day == 11 || *day == 18 || *day == 25 ){
        cout<<"Today is 'Wednesday'"<<endl;
    }
    if(*day == 5 || *day == 12 || *day == 19 || *day == 26 ){
        cout<<"Today is 'Thursday'"<<endl;
    }
    if(*day == 6 || *day == 13 || *day == 20 || *day == 27 ){
        cout<<"Today is 'Friday'"<<endl;
    }
    if(*day == 7 || *day == 14 || *day == 21 || *day == 28 ){
        cout<<"Today is 'Saturday'"<<endl;
    }
}
void apr(const int* day){
    
    if(*day == 5 || *day == 12 || *day == 19 || *day == 26 ){
        cout<<"Today is 'sunday funday'"<<endl;
    }
    if(*day == 6 || *day == 13 || *day == 20 || *day == 27 ){
        cout<<"Today is 'Monday'"<<endl;
    }
    if(*day == 7 || *day == 14 || *day == 21 || *day == 28 ){
        cout<<"Today is 'Tuesday'"<<endl;
    }
    if(*day == 1 || *day == 8 || *day == 15 || *day == 22 || *day == 29 ){
        cout<<"Today is 'Wednesday'"<<endl;
    }
    if(*day == 2 || *day == 9 || *day == 16 || *day == 23 || *day == 30 ){
        cout<<"Today is 'Thursday'"<<endl;
    }
    if(*day == 3 || *day == 10 || *day == 17 || *day == 24 ){
        cout<<"Today is 'Friday'"<<endl;
    }
    if(*day == 4 || *day == 11 || *day == 18 || *day == 25 ){
        cout<<"Today is 'Saturday'"<<endl;
    }
}
void may(const int* day){
    
    if(*day == 3 || *day == 10 || *day == 17 || *day == 24 || *day == 31 ){
        cout<<"Today is 'sunday funday'"<<endl;
    }
    if(*day == 4 || *day == 11 || *day == 18 || *day == 25 ){
        cout<<"Today is 'Monday'"<<endl;
    }
    if(*day == 5 || *day == 12 || *day == 19 || *day == 26 ){
        cout<<"Today is 'Tuesday'"<<endl;
    }
    if(*day == 6 || *day == 13 || *day == 20 || *day == 27 ){
        cout<<"Today is 'Wednesday'"<<endl;
    }
    if(*day == 7 || *day == 14 || *day == 21 || *day == 28 ){
        cout<<"Today is 'Thursday'"<<endl;
    }
    if(*day == 1 || *day == 8 || *day == 15 || *day == 22 || *day == 29){
        cout<<"Today is 'Friday'"<<endl;
    }
    if(*day == 2 || *day == 9 || *day == 16 || *day == 23 || *day == 30 ){
        cout<<"Today is 'Saturday'"<<endl;
    }
}
void jun(const int* day){
    
    if(*day == 7 || *day == 14 || *day == 21 || *day == 28 ){
        cout<<"Today is 'sunday funday'"<<endl;
    }
    if(*day == 1 || *day == 8 || *day == 15 || *day == 22 || *day ==29 ){
        cout<<"Today is 'Monday'"<<endl;
    }
    if(*day == 2 || *day == 9 || *day == 16 || *day == 23 || *day == 30 ){
        cout<<"Today is 'Tuesday'"<<endl;
    }
    if(*day == 3 || *day == 10 || *day == 17 || *day == 24 ){
        cout<<"Today is 'Wednesday'"<<endl;
    }
    if(*day == 4 || *day == 11 || *day == 18 || *day == 25  ){
        cout<<"Today is 'Thursday'"<<endl;
    }
    if(*day == 5 || *day == 12 || *day == 19 || *day == 26 ){
        cout<<"Today is 'Friday'"<<endl;
    }
    if(*day == 6 || *day == 13 || *day == 20 || *day == 27 ){
        cout<<"Today is 'Saturday'"<<endl;
    }
}
void jul(const int* day){
    
    if(*day == 5 || *day == 12 || *day == 19 || *day == 26 ){
        cout<<"Today is 'sunday funday'"<<endl;
    }
    if(*day == 6 || *day == 13 || *day == 20 || *day == 27 ){
        cout<<"Today is 'Monday'"<<endl;
    }
    if(*day == 7 || *day == 14 || *day == 21 || *day == 28 ){
        cout<<"Today is 'Tuesday'"<<endl;
    }
    if(*day == 1 || *day == 8 || *day == 15 || *day == 22 || *day == 29 ){
        cout<<"Today is 'Wednesday'"<<endl;
    }
    if(*day == 2 || *day == 9 || *day == 16 || *day == 23 || *day == 30 ){
        cout<<"Today is 'Thursday'"<<endl;
    }
    if(*day == 3 || *day == 10 || *day == 17 || *day == 24 || *day == 31){
        cout<<"Today is 'Friday'"<<endl;
    }
    if(*day == 4 || *day == 11 || *day == 18 || *day == 25 ){
        cout<<"Today is 'Saturday'"<<endl;
    }
}
void aug(const int* day){
    
    if(*day == 5 || *day == 12 || *day == 19 || *day == 26 ){
        cout<<"Today is 'wednesday'"<<endl;
    }
    if(*day == 6 || *day == 13 || *day == 20 || *day == 27 ){
        cout<<"Today is 'thursday'"<<endl;
    }
    if(*day == 7 || *day == 14 || *day == 21 || *day == 28 ){
        cout<<"Today is 'Tuesday'"<<endl;
    }
    if(*day == 1 || *day == 8 || *day == 15 || *day == 22 || *day == 29 ){
        cout<<"Today is 'sunday'"<<endl;
    }
    if(*day == 2 || *day == 9 || *day == 16 || *day == 23 || *day == 30 ){
        cout<<"Today is 'sunday'"<<endl;
    }
    if(*day == 3 || *day == 10 || *day == 17 || *day == 24 || *day == 31){
        cout<<"Today is 'monday'"<<endl;
    }
    if(*day == 4 || *day == 11 || *day == 18 || *day == 25 ){
        cout<<"Today is 'tuesday'"<<endl;
    }
}
void sep(const int* day){
    
    if(*day == 5 || *day == 12 || *day == 19 || *day == 26 ){
        cout<<"Today is 'saturday'"<<endl;
    }
    if(*day == 6 || *day == 13 || *day == 20 || *day == 27 ){
        cout<<"Today is 'sunday'"<<endl;
    }
    if(*day == 7 || *day == 14 || *day == 21 || *day == 28 ){
        cout<<"Today is 'monday'"<<endl;
    }
    if(*day == 1 || *day == 8 || *day == 15 || *day == 22 || *day == 29 ){
        cout<<"Today is 'Tuesday'"<<endl;
    }
    if(*day == 2 || *day == 9 || *day == 16 || *day == 23 || *day == 30 ){
        cout<<"Today is 'Wednesday'"<<endl;
    }
    if(*day == 3 || *day == 10 || *day == 17 || *day == 24 || *day == 31){
        cout<<"Today is 'Thursday'"<<endl;
    }
    if(*day == 4 || *day == 11 || *day == 18 || *day == 25 ){
        cout<<"Today is 'Friday'"<<endl;
    }
}
void oct(const int* day){
    
    if(*day == 5 || *day == 12 || *day == 19 || *day == 26 ){
        cout<<"Today is 'Monday'"<<endl;
    }
    if(*day == 6 || *day == 13 || *day == 20 || *day == 27 ){
        cout<<"Today is 'Tuesday'"<<endl;
    }
    if(*day == 7 || *day == 14 || *day == 21 || *day == 28 ){
        cout<<"Today is 'wednesday'"<<endl;
    }
    if(*day == 1 || *day == 8 || *day == 15 || *day == 22 || *day == 29 ){
        cout<<"Today is 'thursday'"<<endl;
    }
    if(*day == 2 || *day == 9 || *day == 16 || *day == 23 || *day == 30 ){
        cout<<"Today is 'friday'"<<endl;
    }
    if(*day == 3 || *day == 10 || *day == 17 || *day == 24 || *day == 31){
        cout<<"Today is 'Saturday'"<<endl;
    }
    if(*day == 4 || *day == 11 || *day == 18 || *day == 25 ){
        cout<<"Today is 'Sunday'"<<endl;
    }
}
void nov(const int* day){
    
    if(*day == 5 || *day == 12 || *day == 19 || *day == 26 ){
        cout<<"Today is 'thursday'"<<endl;
    }
    if(*day == 6 || *day == 13 || *day == 20 || *day == 27 ){
        cout<<"Today is 'friday'"<<endl;
    }
    if(*day == 7 || *day == 14 || *day == 21 || *day == 28 ){
        cout<<"Today is 'saturday'"<<endl;
    }
    if(*day == 1 || *day == 8 || *day == 15 || *day == 22 || *day == 29 ){
        cout<<"Today is 'Sunday'"<<endl;
    }
    if(*day == 2 || *day == 9 || *day == 16 || *day == 23 || *day == 30 ){
        cout<<"Today is 'moday'"<<endl;
    }
    if(*day == 3 || *day == 10 || *day == 17 || *day == 24 || *day == 31){
        cout<<"Today is 'tuesday'"<<endl;
    }
    if(*day == 4 || *day == 11 || *day == 18 || *day == 25 ){
        cout<<"Today is 'wednesday'"<<endl;
    }
}
void dec(const int* day){
    
    if(*day == 5 || *day == 12 || *day == 19 || *day == 26 ){
        cout<<"Today is 'saturday'"<<endl;
    }
    if(*day == 6 || *day == 13 || *day == 20 || *day == 27 ){
        cout<<"Today is 'sunday'"<<endl;
    }
    if(*day == 7 || *day == 14 || *day == 21 || *day == 28 ){
        cout<<"Today is 'monday'"<<endl;
    }
    if(*day == 1 || *day == 8 || *day == 15 || *day == 22 || *day == 29 ){
        cout<<"Today is 'tuesday'"<<endl;
    }
    if(*day == 2 || *day == 9 || *day == 16 || *day == 23 || *day == 30 ){
        cout<<"Today is 'wednesday'"<<endl;
    }
    if(*day == 3 || *day == 10 || *day == 17 || *day == 24 || *day == 31){
        cout<<"Today is 'thursday'"<<endl;
    }
    if(*day == 4 || *day == 11 || *day == 18 || *day == 25 ){
        cout<<"Today is 'friday'"<<endl;
    }
}

int main(){
   
    string month;
    int day;
    string exit;
     
    do{ 
       
       system("cls");
    cout<<"Enter the Day and month ";
    cin >> day>>month;

    if (isdigit(day) == false)
    {
        cout<<"GIVE A NUMBER BITCH";
        return 0;
    }     
    transform(month.begin(), month.end(), month.begin(), [](unsigned char c){return tolower(c); });
    if (month == "January"){
        jan(&day);
    }
   else if (month == "february"){
        feb(&day);
    }
   else if (month == "march"){
        mar(&day);
    }
   else if (month == "april"){
        apr(&day);
    }
   else if (month == "may"){
        may(&day);
    }
  else  if (month == "june"){
        jun(&day);
    }
  else  if (month == "july"){
        jul(&day);
    }
   else if (month == "august"){
        aug(&day);
    }
   else if (month == "september"){
        sep(&day);
    }
   else if (month == "october"){
        oct(&day);
    }
   else if (month == "november"){
        nov(&day);
    }
   else  if (month == "december"){
        dec(&day);
    }
    else 
    cout<<"Enter the valid day and month";
    cout<<"Enter ('exit') to exit \nEnter any key to continue"<<endl;
    cin>>exit;

   }while (exit != "exit" );
   return 0;
}