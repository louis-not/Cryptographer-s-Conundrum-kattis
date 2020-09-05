#include <iostream>
// #include <string>

using namespace std;
int checkers (char test, char want) ;

int main (){
    string input ;
    int day_count,size;

    day_count = 0 ;
    
    cin>> input ;
    size=input.size() ;
    for(int i = 0; i<=size-1; i++){
        // cout<< input[i] << endl;
        switch(i%3){
            case 2 :
                // cout<<"test 1"<< endl;
                day_count = day_count + checkers(input[i],'R') ;
                break ;
            case 1 :
                // cout<<"test 2"<< endl;
                day_count = day_count + checkers(input[i],'E') ;
                break ;
            case 0 :
                // cout<<"test 3"<< endl;
                day_count = day_count + checkers(input[i],'P') ;
                break ;
            default :
                cout<< "Error" << endl;
                break ;
        }        
    }
    cout<< day_count << endl;
    return 0;
}
int checkers (char test, char want){
    int dc ;
    test = toupper(test) ;
    if (test == want){
        dc = 0 ;
    }else {
        dc = 1 ;
    }

    return dc;
}
