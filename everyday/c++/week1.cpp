// #include<iostream>

// class Animal{
//     private:  //맴버 변수
//         int food;
//         int weight;

//     public:  //맴버 함수
//         void set_animal(int _food, int _weight){
//             food = _food;
//             weight = _weight;
//         }
//         void increase_food(int inc){
//             food += inc;
//             weight += (inc/3);
//         }
//         void view_stat(){
//             std::cout << "Animal's food :" << food << std::endl;
//             std::cout << "Animal's weight :" << weight << std::endl;
//         }
// };

// int main(){
//     Animal animal;
//     animal.set_animal(100,50);
//     animal.increase_food(30);

//     animal.view_stat();
//     return 0;
// }

#include<iostream>

class Date{
    private:
        int year_;
        int month_;
        int date_;
    
    public:
        void SetDate(int year, int month, int date){
            year_ = year;
            month_ = month;
            date_ = date;
        }
        void AddDay(int inc){
            int day=date_+inc;
            if(day>=31){ //31일이 넘을 경우에
                if(month_%2==1 ||(month_==7||month_==8)){ //한달이 31일인 달 
                    if(day==31){
                        date_=31;
                    }
                    else {
                        inc=(day-31);
                        AddMonth(1);
                    }
                }
                else {
                    date_=day-30;
                    AddMonth(1);
                }
            }
            else{
                date_=day;
            }
            
        }
        void AddMonth(int inc){
            month_=month_+inc;
        }
        void AddYear(int inc){
            year_=year_+inc;
        }
        void ShowDate(){
            std::cout << "Show Date :" << year_ <<"-" <<month_<<"-"<<date_ <<std::endl;
        }
};

int main(){
    Date date;

    
}