#include <iostream>
#include <fstream>
#include <user.h>
#include <string.h>
#include<sstream>
#define INFINITY 9999
#define MAX 10
#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))
using namespace std;

int weigthed_score(user &usr){
   int w_score = 0;
   for(int i =0; i<5 ; i++){
    if(usr.check_list(i)){
        w_score = w_score + usr.weights(i)*usr.links(i).b_score();

    }
   }
   return w_score;
}

//!!! reason of the error came from after interting users number bigger than 9 is code from below !!!
// at below ı implement very basic version of fundemental prenciple of dijkstra algorithm with 7 order
// which is enough for detect distance but. when I increase the number of user bigger than 9, program is craching, problem is at the following part
// but under 10 users program will work a little bit slower towards to perfect dijkstra algorithm .
// this kind of code has high complexity so ı know should not use but ı didn't have time to implemenet dijkstra algorithm
//usr is starting node desired is target node in_user is active user array size11 is
//size of this array

int find_min_distance(user &usr, user &desireduser, user in_user[], int size11){
      int Size = size11;

      int user_size[Size]={0};
      int user_visited[Size]={0};
        int path =0;
        int k1 = 0;

        while(in_user[k1].get_name() != usr.get_name()){
            k1++;

        }

        user_size[k1] = path;
        user_visited[k1] = 1;

        for(int i = 0; i< Size; i++){

                if(usr.weights(i) != NULL){
                    int k2 = 0;



                    while(usr.links(i).get_name() != in_user[k2].get_name()){
                        k2++;

                    }

                    if(user_visited[k2]==0){
                    user_size[k2] = 1;
                   // cout<<usr.links(k2).get_name()<<endl;
                    user_visited[k2]=1;}}}

        for(int i = 0; i< Size; i++){

            if(usr.weights(i) != NULL){
                for(int j =0;j<Size;j++){
                   int k3 =0;

                   if(usr.links(i).weights(j) != NULL){


                        while(usr.links(i).links(j).get_name() != in_user[k3].get_name()){
                            k3++;

                        }


                        if(bool(user_visited[k3] == 0)){
                        user_size[k3] = 2;
                        user_visited[k3]=1;}
                    }}}}

         for(int i = 0; i< Size; i++){

            if(usr.weights(i) != NULL){
                for(int j =0;j<Size;j++){

                   if(usr.links(i).weights(j) != NULL){

                   for(int k =0;k<Size;k++){
                        if(usr.links(i).links(j).weights(k)!=NULL){
                            int k4 =0;
                            while(usr.links(i).links(j).links(k).get_name() != in_user[k4].get_name()){
                                k4++;
                            }
                            if(user_visited[k4]==0){
                            user_size[k4] = 3;
                            user_visited[k4]=1;}
                        }}}}}}

        for(int i = 0; i< Size; i++){

        if(usr.weights(i) != NULL){
                for(int j =0;j<Size;j++){

                   if(usr.links(i).weights(j) != NULL){
                        for(int k =0;k<Size;k++){
                        if(usr.links(i).links(j).weights(k)!=NULL){
                        for(int l =0;l<Size;l++){
                        if(usr.links(i).links(j).links(k).weights(l)!=NULL){
                            int k5 =0;
                            while(usr.links(i).links(j).links(k).links(l).get_name() != in_user[k5].get_name()){
                                k5++;
                            }
                            if(user_visited[k5]==0){
                            user_size[k5] = 4;
                            user_visited[k5]=1;}
                        }}}}}}}}

    for(int i = 0; i< Size; i++){

        if(usr.weights(i) != NULL){
                for(int j =0;j<Size;j++){

                   if(usr.links(i).weights(j) != NULL){
                        for(int k =0;k<Size;k++){
                            if(usr.links(i).links(j).weights(k)!=NULL){
                                for(int l =0;l<Size;l++){
                                    if(usr.links(i).links(j).links(k).weights(l)!=NULL){
                                        for(int w =0;w<Size;w++){
                                            if(usr.links(i).links(j).links(k).links(l).weights(w)!=NULL){

                                                int k6 =0;
                                    while(usr.links(i).links(j).links(k).links(l).links(w).get_name() != in_user[k6].get_name()){
                                                k6++;
                            }
                            if(user_visited[k6]==0){
                            user_size[k6] = 5;
                            user_visited[k6]=1;}
                        }}}}}}}}}}

        for(int i = 0; i< Size; i++){

        if(usr.weights(i) != NULL){
                for(int j =0;j<Size;j++){

                   if(usr.links(i).weights(j) != NULL){
                        for(int k =0;k<Size;k++){
                            if(usr.links(i).links(j).weights(k)!=NULL){
                                for(int l =0;l<Size;l++){
                                    if(usr.links(i).links(j).links(k).weights(l)!=NULL){
                                        for(int w =0;w<Size;w++){
                                            if(usr.links(i).links(j).links(k).links(l).weights(w)!=NULL){
                                                    for(int z =0;z<Size;z++){
                                                    if(usr.links(i).links(j).links(k).links(l).links(w).weights(z)!=NULL){

                                                int k7 =0;
                                    while(usr.links(i).links(j).links(k).links(l).links(w).links(z).get_name() != in_user[k7].get_name()){
                                                k7++;
                            }
                            if(user_visited[k7]==0){
                            user_size[k7] = 6;
                            user_visited[k7]=1;}
                        }}}}}}}}}}}}
                  for(int i = 0; i< Size; i++){
                if(usr.weights(i) != NULL){
                for(int j =0;j<Size;j++){

                   if(usr.links(i).weights(j) != NULL){
                        for(int k =0;k<Size;k++){
                            if(usr.links(i).links(j).weights(k)!=NULL){
                                for(int l =0;l<Size;l++){
                                    if(usr.links(i).links(j).links(k).weights(l)!=NULL){
                                        for(int w =0;w<Size;w++){
                                            if(usr.links(i).links(j).links(k).links(l).weights(w)!=NULL){
                                                    for(int z =0;z<Size;z++){
                                                    if(usr.links(i).links(j).links(k).links(l).links(w).weights(z)!=NULL){
                                                            for(int z1 =0;z1<Size;z1++){
                                                    if(usr.links(i).links(j).links(k).links(l).links(w).links(z).weights(z1)!=NULL){

                                                int k8 =0;
                                    while(usr.links(i).links(j).links(k).links(l).links(w).links(z).links(z1).get_name() != in_user[k8].get_name()){
                                                k8++;
                            }
                            if(user_visited[k8]==0){
                            user_size[k8] = 7;
                            user_visited[k8]=1;}
                        }}}}}}}}}}}}}}



int userorder=0;
while(desireduser.get_name() != in_user[userorder].get_name()){
    userorder++;
}


return user_size[userorder];
}



///////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////


float network_score(user in_user[], user &usr, int size1){ // network score will calculated
      int size2 = size1;                                                     // according to active users also ý will
    int min_dist = 0;                                       // use another function to find min. distance.
    float netw_score=0.0;
    for(int i = 0; i<size1 ; i++){
       if(in_user[i].get_name() != usr.get_name()){

        user a =in_user[i];
        min_dist = find_min_distance(usr, a, in_user, size2);

       if(min_dist !=0){
        netw_score = (netw_score + (float)(weigthed_score(in_user[i])/(float)min_dist));

       }

        }

    }
    usr.set_network_score(netw_score);
    return netw_score;
}

////////////////////////////////////////////////////////////
            template<class T>
            void Merge(T score[],char username[], int p,int q,int r);
            template<class T>
            void merge_sort(T score[],char username[],int p,int r){
                    int q;
                    if(p<r)
                    {
                     q=(p+r)/2;
                     merge_sort(score,username,p,q);
                     merge_sort(score,username,q+1,r);
                     Merge(score,username,p,q,r);
                    }
                }

            template<class T>
            void Merge(T score[],char username[], int p,int q,int r)
                    {
                    int n1=q-p+1;
                    int n2=r-q;
                    T L[n1+1];
                    char Lu[n1+1];
                    T R[n2+1];
                    char Ru[n2+1];
                     L[n1+1]=999;
                    R[n2+1]=999;
                    int i=1, j=1;

                for(int i=1;i<=n1;i++){
                        L[i]=score[p+i-1];
                        Lu[i] = username[p+i-1];
                    }
                for(int j=1;j<=n2;j++){
                        R[j]=score[q+j];
                        Ru[j] = username[q+j];
                    }

                for(int k=p;k<=r;k++)
                    {
                        if(L[i]<=R[j])
                        {
                            score[k]=L[i];
                            username[k]=Lu[i];


                            i=i+1;
                        }
                        else
                        {
                            score[k]=R[j];
                            username[k] =Ru[j];
                            j=j+1;
                        }
                    }
                }

        /////////////////////////////////////////////////////////////



int main()
{       user A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T;

        A.set_name('A');
        B.set_name('B');
        C.set_name('C');
        D.set_name('D');
        E.set_name('E');
        F.set_name('F');
        G.set_name('G');
        H.set_name('H');
        I.set_name('I');
        J.set_name('J');
        K.set_name('K');
        L.set_name('L');
        M.set_name('M');
        N.set_name('N');
        O.set_name('O');
        P.set_name('P');
        R.set_name('R');
        S.set_name('S');
        T.set_name('T');
        Q.set_name('Q');

        user all_user[20]={A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T};
        // I set all user in array after this line
        // I interested in only this user array.

        char activeusers[20] = {NULL};// users in the game in char format
        user in_user[20];
        int size_active_users=0;
        ifstream inputtxt;
        inputtxt.open("input.txt");
        string teams;
        if (inputtxt.is_open()){
                inputtxt >> teams;
                //cout<< teams<<endl;

        int k = 0;
        char myArray[teams.size()+1];//as 1 char space for null is also required
        strcpy(myArray, teams.c_str()); //
        int i = 0;
        while(myArray[i] != 0){
            if(myArray[i] != ',' ){
            activeusers[k] = myArray[i];
            k++;
            }
            i++;

        }

        for(int i = 0; i<20 ; i++){
                if(activeusers[i] != NULL){
                        size_active_users++;

                }}


        for(int i = 0; i<20 ; i++){
            //cout<<activeusers[i]<<endl;
            int x = 0;
            if(activeusers[i] != NULL){
            while(all_user[x].get_name() != activeusers[i] ){
                x++;
            }
            in_user[i] = all_user[x];
        }}

        while(!inputtxt.eof()){
            char match;
            int count1 = 0;
            int count2 = 0;

            inputtxt >> match;


            while(match != all_user[count1].get_name()){ // find order of user in user array
                count1++;
            }

            inputtxt >> match;
            while(match != all_user[count2].get_name()){
                count2++;
            }

            if(count1 != count2){
                     all_user[count1].beatenuser(all_user[count2]); // building the graph by adding address and number of wins
            }
        }


        }
        for(int i=0; i<size_active_users;i++){
            int kk=0;
            while(in_user[i].get_name()!=all_user[kk].get_name()){
                kk++;
            }
            in_user[i] = all_user[kk];
        }


// ı stored name and scores of the arrays
        int basic_score1[size_active_users];
        int weighted_score1[size_active_users];
        int network_score1[size_active_users];
        int start = 0;
        user b_user[size_active_users];//sorted user name array according to basic scores
        user w_user[size_active_users];//sorted user name array according to weighted scores
        user n_user[size_active_users];//sorted user name array for network scores
        int b_score1[size_active_users];
        int w_score1[size_active_users];
        float n_score1[size_active_users];
        char b_order[size_active_users];
        char w_order[size_active_users];
        char n_order[size_active_users];

        for(int i=0; i<size_active_users;i++){
             b_user[i] = in_user[i];//user array is replicated to seperate calculations
             w_user[i] = in_user[i];
             n_user[i] = in_user[i];
             b_order[i] =in_user[i].get_name();
             w_order[i] =in_user[i].get_name();
             n_order[i] =in_user[i].get_name();
            }



         for(int i = 0; i< size_active_users; i++){ //writing values on the arrays
            b_score1[i] = b_user[i].b_score();
            w_score1[i] = weigthed_score(w_user[i]);
            n_score1[i] = network_score(in_user, n_user[i], size_active_users);

            in_user[i].set_network_score(n_score1[i]);
            in_user[i].set_weighted_score(w_score1[i]);
            }





        /*for(int i = size_active_users-1; i>=0; i--){
            cout<<b_order[i]<<"("<<b_score1[i]<<")"<<endl;
        }
        */

        //sorting
        int bb = 0;
        merge_sort(b_score1,b_order,bb,size_active_users-1);
        merge_sort(w_score1,w_order,bb,size_active_users-1);
        merge_sort(n_score1,n_order,bb,size_active_users-1);







//display

        while(1){
            string line;

        cout<<"choose an option to perform"<<endl;
        cout<<"1- Calculate Basic Scores,"<<endl;
        cout<<"2- Calculate Weighted Scores,"<<endl;
        cout<<"3- Calculate Network Scores "<<endl;

        int select,flag=0;
        while(flag==0)
        {


        cin>>line;
        stringstream ss(line);
        ss>>select;
        if(select == 1){


        for(int i = size_active_users-1; i>=0; i--){
            cout<<b_order[i]<<"("<<b_score1[i]<<")"<<endl;
        }




          flag=1;

        }
        else if(select == 2){

        for(int i = size_active_users-1; i>=0; i--){
            cout<<w_order[i]<<"("<<w_score1[i]<<")"<<endl;
            }

            flag=1;
        }
        else if(select == 3)
        {

        for(int i = size_active_users-1; i>=0; i--){
            cout<<n_order[i]<<"("<<n_score1[i]<<")"<<endl;
            }
          flag=1;

        }
        else{
            cout<<line<<" is not a valid number"<<endl;
            flag=0;


            }

        }






        }







}


