#ifndef USER_H
#define USER_H
#include<user.h>
using namespace std;
class user
{
    private:
        user *link_array[5]={NULL,NULL,NULL,NULL,NULL};
        int weight_array[5] = {NULL,NULL,NULL,NULL,NULL};
        int basic_score;
        int basic_score2;
        int weighed_score;
        float network_score;
        int Count;
        char name;
    public:
        user(void);
        //void detect_users(string X);
        void beatenuser(user &usr);
        int b_score(void);
        user links(int b);
        int weights(int a);
        char get_name();
        void set_name(char name1);
        bool check_list(int a); // check list is null or not
        void set_weighted_score(int a);
        void set_network_score(float a);
        int get_weighted_score();
        float get_network_score();
        void set_basic_score(int a);
         int get_basic_score();





};
    user::user(void):Count(0),basic_score(0),basic_score2(0),weighed_score(0),network_score(0){};




    void user::set_weighted_score(int a){
    weighed_score = a;
    }
        void user::set_basic_score(int a){
    basic_score2 = a;
    }
        int user::get_basic_score(){
    return basic_score2;
    }

    void user::set_network_score(float a){
    network_score= a;
    }

    int user::get_weighted_score(){
    return weighed_score;
    }

    float user::get_network_score(){
    return network_score;
    }

    int user::weights(int a){
    return weight_array[a];
    }

    bool user::check_list(int a){ //to get weight for calculation

        return weight_array[a];

    }

    user user::links(int b){ // to get addresses which at link

        return *link_array[b];


    }
    void user::set_name(char name1){
    name = name1;
    }


    char user::get_name(){ // which used for char input to user object
    return name;
    }

    void user::beatenuser(user &usr){
        int flag =0;
        for(int i = 0; i<5;i++){
            if(link_array[i] == &usr){ // insert address in array
                weight_array[i] = weight_array[i] + 1;
                flag =1;


            }}

            if(flag == 0){
                link_array[Count] = &usr;
                weight_array[Count]++;
                Count = Count+1;

        }

}

int user::b_score(){
    for(int i=0;i<5;i++){
        basic_score = basic_score+weight_array[i];

    }

    return basic_score;

}

#endif // USER_H
